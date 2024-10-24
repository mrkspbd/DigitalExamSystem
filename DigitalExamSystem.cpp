#include<iostream>
#include<fstream>
#include<cstring>
#include<conio.h>
#define tab '\t'

using namespace std;
int k=0,marks=0,marks1=0,marks2=0,marks3=0;

int ans,Count=0;
class LOGIN
{
private:

    string name;
    string user_name;
    string password;
    string rePassword;

    string User_Id;
    string Password;

public:
    void Registation()
    {
        cout<<"Enter Your FULL NAME : ";
        cin>>name;
        ///getline(cin,name);

        cout<<"Enter Your USER_NAME : ";
        cin>>user_name;
Home:
        cout<<"Enter Your PASSWORD : ";
        cin>>password;

        cout<<"Re-Enter Your PASSWORD : ";
        cin>>rePassword;

        if(password == rePassword)
        {
            /// output to file
            ofstream input("Data/user_data.txt");

            input<<name<<endl<<user_name<<endl<<password<<endl;

            input.close();
            cout<<endl<<endl<<"Registation  Complite !.";
            cout<<endl<<endl;
            ///LogIn();
        }
        else
        {
            cout<<"Error! Password did not match..."<<endl;
            goto Home;
        }


    }

    void LogIn()
    {
        cout<<"Enter Your USER_ID : ";
        cin>>User_Id;

        cout<<"Enter Your PASSWORD : ";
        cin>>Password;
        cout<<endl;

        /// UserInput from File (Username , Password)
        string regiName[10], regiUsername[10], regiPassword[10];

        ifstream user_info("Data/user_data.txt");
        for(int i=0; i<2; i++)
        {
            user_info>>regiName[i]>>regiUsername[i]>>regiPassword[i];
        }
        user_info.close();

        /// input close

        for(int i=0; i<2; i++)
        {
            if(regiUsername[i]==User_Id && regiPassword[i]==Password)
            {
                cout<<"Login Successfully !"<<endl<<endl;
                k=1;

                cout<<endl<<tab<<tab<<tab<<"Active User : "<<regiName[i]<<endl<<endl;
                break;
            }
        }
        if(k!=1)
        {
            cout<<tab<<tab<<tab<<"Login Not Successfull. !"<<endl;
            LogIn();
        }
    }

};

class QUESTION
{
public:

    void question()
    {
        int x,Correct_Answer[10];
        string Q[10],a[10],b[10],c[10],d[10],f[10];
        if(k==1)
        {
            cout<<endl<<tab<<tab<<tab<<"Enter 1 To proces..."<<endl;
            cin>>x;
            if(x==1)
            {
Mrks :

                ifstream user_info("Data/question.txt");

                for(int i=1; i<6; i++)
                {
                    user_info>>f[i];
                    user_info.ignore();
                    getline(user_info,Q[i]);
                    getline(user_info,a[i]);
                    getline(user_info,b[i]);
                    getline(user_info,c[i]);
                    getline(user_info,d[i]);
                    user_info>>Correct_Answer[i];
                }
                user_info.close();

                for(int i=1; i<6; i++)
                {
                    cout<<tab<<Q[i]<<endl<<endl<<endl<<tab<<tab<<a[i]<<endl<<tab<<tab<<b[i]<<endl<<tab<<tab<<c[i]<<endl<<tab<<tab<<d[i]<<endl;
                    cout<<endl;

Ans:

                    cout<<"Give your answer(press 1/2/3/4)"<<endl;

                    cin>>ans;

                    if(ans==1 || ans==2 || ans==3 || ans==4)
                    {
                        if(ans == Correct_Answer[i])
                        {
                            cout<<"Your Answer is Correct."<<endl;
                            marks +=10;
                            marks3+=10;
                        }
                        else
                        {
                            cout<<"Sorry! your answer is wrong."<<endl;

                        }

                    }
                    else
                    {
                        cout<<"Invalid Option..."<<endl;
                        goto Ans;
                    }
                    cout<<endl;

                    ///cout<<"Press any key to next question...";
                    cout<<endl;
                    cout<<endl;

                    _getch();


                    cout<<endl;
                }
            }
        }
    }


    void questionMedium()
    {
        marks=0;
        int x,Correct_Answer[10];
        string Q[10],a[10],b[10],c[10],d[10],f[10];
        if(k==1)
        {
            cout<<endl<<tab<<tab<<tab<<"Enter 1 To proces..."<<endl;
            cin>>x;
            if(x==1)
            {
Mrks :

                ifstream user_info("Data/question2.txt");

                for(int i=1; i<6; i++)
                {
                    user_info>>f[i];
                    user_info.ignore();
                    getline(user_info,Q[i]);
                    getline(user_info,a[i]);
                    getline(user_info,b[i]);
                    getline(user_info,c[i]);
                    getline(user_info,d[i]);
                    user_info>>Correct_Answer[i];
                }
                user_info.close();

                for(int i=1; i<6; i++)
                {
                    cout<<tab<<Q[i]<<endl<<endl<<endl<<tab<<tab<<a[i]<<endl<<tab<<tab<<b[i]<<endl<<tab<<tab<<c[i]<<endl<<tab<<tab<<d[i]<<endl;
Ans :
                    cout<<endl;
                    cout<<"Give your answer(press 1/2/3/4)"<<endl;

                    cin>>ans;

                    if(ans==1 || ans==2 || ans==3 || ans==4)
                    {
                        if(ans == Correct_Answer[i])
                        {
                            cout<<"Your Answer is Correct."<<endl;
                            marks +=10;
                            marks2+=10;
                        }
                        else
                        {
                            cout<<"Sorry! your answer is wrong."<<endl;

                        }

                    }
                    else
                    {
                        cout<<"Invalid Option..."<<endl;
                        goto Ans;
                    }
                    cout<<endl;

                    ///cout<<"Press any key to next question...";
                    cout<<endl;
                    cout<<endl;

                    bool run;
                    char ch;
                    while(ch = getchar())
                    {
                        if(ch == '\n')
                        {
                            run = true;
                            break;
                        }

                        if(ch == '0')
                        {
                            run = false;
                            break;
                        }
                    }
                    if(!run)
                        break;

                    cout<<endl;
                }
            }
        }
    }

    void questionHard()
    {
        marks=0;
        int x,Correct_Answer[10];
        string Q[10],a[10],b[10],c[10],d[10],f[10];
        if(k==1)
        {
            cout<<endl<<tab<<tab<<tab<<"Enter 1 To proces..."<<endl;
            cin>>x;
            if(x==1)
            {


                ifstream user_info("Data/question3.txt");

                for(int i=1; i<6; i++)
                {
                    user_info>>f[i];
                    user_info.ignore();
                    getline(user_info,Q[i]);
                    getline(user_info,a[i]);
                    getline(user_info,b[i]);
                    getline(user_info,c[i]);
                    getline(user_info,d[i]);
                    user_info>>Correct_Answer[i];
                }
                user_info.close();

                for(int i=1; i<6; i++)
                {
                    cout<<tab<<Q[i]<<endl<<endl<<endl<<tab<<tab<<a[i]<<endl<<tab<<tab<<b[i]<<endl<<tab<<tab<<c[i]<<endl<<tab<<tab<<d[i]<<endl;

Ans :
                    cout<<endl;
                    cout<<"Give your answer(press 1/2/3/4)"<<endl;

                    cin>>ans;
                    if(ans==1 || ans==2 || ans==3 || ans==4)
                    {
                        if(ans == Correct_Answer[i])
                        {
                            cout<<"Your Answer is Correct."<<endl;
                            marks +=10;
                            marks3+=10;
                        }
                        else
                        {
                            cout<<"Sorry! your answer is wrong."<<endl;

                        }

                    }
                    else
                    {
                        cout<<"Invalid Option..."<<endl;
                        goto Ans;
                    }
                    cout<<endl;

                    /// cout<<"Press any key to next question...";
                    cout<<endl;
                    cout<<endl;

                    _getch();

                    cout<<endl;
                }
            }
        }
    }



};


int main()
{
    int choice;

    LOGIN object;
    QUESTION objectq;


    cout<<"                       **************************************************************"<<endl;
    cout<<"                       *                                                            *"<<endl;
    cout<<"                       *                                                            *"<<endl;
    cout<<"                       *              WELCOME TO DIGITAL EXAM SYSTEM..              *"<<endl;
    cout<<"                       *                                                            *"<<endl;
    cout<<"                       *                                                            *"<<endl;
    cout<<"                       **************************************************************"<<endl;


    cout<<endl<<endl<<endl;

    cout<<"                         ----------------Menu--------------------"<<endl;
    cout<<"                                    1.Regestation."<<endl;
    cout<<"                                    2.Login."<<endl;
    cout<<"                                    3.Recode."<<endl;
    cout<<"                         ----------------------------------------"<<endl;

    cout<<endl;
Back:
    cout<<"                         Enter Your choice(Press 1/2/3): ";
    cin>>choice;
    cout<<endl;

    switch(choice)
    {
    case 1:
        object.Registation();
        {
log :
            string logRegOption;
            cout<<"do you want to login now ? (yes/no) : ";
            cin>>logRegOption;

            if(logRegOption == "yes")
            {
                object.LogIn();
            }
            else if (logRegOption == "no")
            {
                return 0;
            }
            else
            {
                cout<<"Invalid Choice..."<<endl;
                goto log;
            }
        }

        break;

    case 2:
        object.LogIn();

        break;
    default:
        goto Back;
        cout<<"Your Choice is Wrong"<<endl;
    }

    objectq.question();



    if(marks>=30)
    {
        marks1=marks;
        cout<<endl<<endl<<tab<<tab<<"Congratulation..!!! you are promotted for the MEDIUM level"<<endl;
        objectq.questionMedium();
        if(marks>=40)
        {
            cout<<endl<<endl<<tab<<tab<<"Congratulation..!!! you are promotted for the HARD level"<<endl;
            objectq.questionHard();
            cout<<endl<<tab<<tab<<tab<<"Marks in first level : "<<marks1<<endl;
            cout<<endl<<tab<<tab<<tab<<"Marks in second level : "<<marks2<<endl;
            cout<<endl<<tab<<tab<<tab<<"Marks in third level : "<<marks3<<endl;

        }
        else
        {
            cout<<tab<<"Marks obtain in second level : "<<marks1<<endl;
            cout<<tab<<"Marks obtain in second level : "<<marks2<<endl;
        }

    }

    else
    {
        cout<<"Your Total Marks : "<<marks;
    }

    _getch();
    cout<<endl<<endl<<tab<<tab<<"Thank you!"<<endl;
    return 0;
}

