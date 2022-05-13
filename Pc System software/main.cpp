#include <iostream>
#include<stdlib.h>
//#include<life.h>
#include<fstream>//The Program Is Coded By Basanta chaudhary
#include<cmath>
//#include"Date.cpp"
#include<cstring>
#include<windows.h>
class Software
{
public:
    void Shut_Down_Pc()
    {
        system("shutdown/s");
    }
    void Shut_Down_Restart_Pc()
    {
        system("shutdown/r");
    }
};
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
    string UserName,UserPassWord;
    char NexTime;

    char nextTime='y';
    Software s1;
    int num;
    cout<<"\t\t\t\t----------------------------------------------------------\n";
    cout<<"\t\t\t\t|            WelCome To My Mini System Project            |\n";
    cout<<"\t\t\t\t|---------------------------------------------------------|\n";
    cout<<"\t\t\t\t|        The Program Is Coded By Basanta Chaudhary        |\n";
    cout<<"\t\t\t\t|---------------------------------------------------------|\n";
    cout<<"\t\t\t\t|  C++ is a powerful general-purpose programming language |\n";
    cout<<"\t\t\t\t----------------------------------------------------------\n";
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t   -------------------------------------\n";
    cout<<"\t\t\t\t\t   |              Login !              |\n";
    cout<<"\t\t\t\t\t   -------------------------------------\n";
    cout<<endl<<endl;
    do
    {

        cout<<"\t\t\t\t\t   UserName:  ";
        cin>>UserName;
        cout<<endl;
        cout<<"\t\t\t\t\t   Password:  ";
        cin>>UserPassWord;
        cout<<endl;
        cout<<"\t\t\t\t\t   -------------------------------------";
        if(UserName=="Dream"&&UserPassWord=="Dream")
        {
            while(nextTime=='y')
            {
                cout<<endl<<endl;
                cout<<"\t\t\t\t\t       You Have Successfully Login !   \n";
                cout<<endl<<endl;
                cout<<"\t\t\t\t\t                 Cho0se              \n";
                cout<<endl<<endl;
                cout<<"\t\t\t\t\t   1.)Do You Want ShutDown Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   2.)Do You Want Restart Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   3.)Do You Want Reset Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   4.)Do You Want Show Time in Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   5.)Do You Want Show Date in Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   6.)Do You Want Find IP Adress Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   7.)Do You Want Show Details Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   8.)Do You Want show File using Detailes !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   9.)Do You Want Account of Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   10.)Do You Want change Your console Background Color !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   11.)Do You Want show Performance Monitor of Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   12.)Do You Want Open Disk Managment !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   13.)Do You Want Show Task List Of Run programs of Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   14.)Do You Want CalculaTor \n";
                cout<<endl;
                cout<<"\t\t\t\t\t   15.)Do You Want Log-out !  ";
                cin>>num;
                cout<<endl;
                cout<<"\t\t\t\t\t   -------------------------------------";

                switch(num)
                {
                case 1:

                    s1.Shut_Down_Pc();

                    break;
                case 2:
                    s1.Shut_Down_Restart_Pc();
                    break;
                case 3:
                    system("systemreset");
                    break;
                case 4:
                    system("Time");
                    break;
                case 5:
                    system("Date");
                    break;
                case 6:
                    system("ipconfig");
                    break;
                case 7:
                    system("systeminfo");
                    break;
                case 8:
                    system("dir");
                    break;
                case 9:
                    system("net user");
                    break;
                case 10:
                    cout<<endl<<endl;
                    cout<<"\t\t\t\t\t\t\tCho0se Colors    \n";
                    cout<<endl;
                    cout<<"\t\t\t\t\t1.Green   2.Red   3.White   4.Purple   5.Yellow   6.Aqua   7.Blue   ";
                    cin>>num;
                    switch(num)
                    {
                    case 1:
                        system("color 2");
                        break;
                    case 2:
                        system("color 4");
                        break;
                    case 3:
                        system("color 7");
                        break;
                    case 4:
                        system("color 5");
                        break;
                    case 5:
                        system("color 6");
                        break;
                    case 6:
                        system("color 3");
                        break;
                    case 7:
                        system("color 1");
                        break;
                    default:
                        cout<<"\t\t\t\t\t   -------------------------------------------\n";
                        cout<<"\t\t\t\t\t\t\tInvalid Choice Plz Try again !\n";


                    }

                    break;
                case 11:
                    system("perfmon");
                    break;
                case 12:
                    system("diskmgmt");
                    break;
                case 13:
                    system("tasklist");
                    break;
                case 14:

                    break;
                case 15:
                    system("cls");
                    do
                    {

                        cout<<"\t\t\t\t\t   UserName:  ";
                        cin>>UserName;
                        cout<<endl;
                        cout<<"\t\t\t\t\t   Password:  ";
                        cin>>UserPassWord;
                        cout<<endl;
                        cout<<"\t\t\t\t\t   -------------------------------------";
                        if(UserName=="Dream"&&UserPassWord=="Dream")
                        {
                            while(nextTime=='y')
                            {
                                cout<<endl<<endl;
                                cout<<"\t\t\t\t\t       You Have Successfully Login !   \n";
                                cout<<endl<<endl;
                                cout<<"\t\t\t\t\t                 Cho0se              \n";
                                cout<<endl<<endl;
                                cout<<"\t\t\t\t\t   1.)Do You Want ShutDown Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   2.)Do You Want Restart Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   3.)Do You Want Reset Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   4.)Do You Want Show Time in Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   5.)Do You Want Show Date in Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   6.)Do You Want Find IP Adress Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   7.)Do You Want Show Details Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   8.)Do You Want show File using Detailes !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   9.)Do You Want Account of Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   10.)Do You Want change Your console Background Color !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   11.)Do You Want show Performance Monitor of Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   12.)Do You Want Open Disk Managment !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   13.)Do You Want Show Task List Of Run programs of Your Pc !\n";
                                cout<<endl;
                                cout<<"\t\t\t\t\t   14.)Do You Want Log-out !  ";
                                cin>>num;
                                cout<<endl;
                                cout<<"\t\t\t\t\t   -------------------------------------";

                                switch(num)
                                {
                                case 1:

                                    s1.Shut_Down_Pc();

                                    break;
                                case 2:
                                    s1.Shut_Down_Restart_Pc();
                                    break;
                                case 3:
                                    system("systemreset");
                                    break;
                                case 4:
                                    system("Time");
                                    break;
                                case 5:
                                    system("Date");
                                    break;
                                case 6:
                                    system("ipconfig");
                                    break;
                                case 7:
                                    system("systeminfo");
                                    break;
                                case 8:
                                    system("dir");
                                    break;
                                case 9:
                                    system("net user");
                                    break;
                                case 10:
                                    cout<<endl<<endl;
                                    cout<<"\t\t\t\t\t\t\tCho0se Colors    \n";
                                    cout<<endl;
                                    cout<<"\t\t\t\t\t1.Green   2.Red   3.White   4.Purple   5.Yellow   6.Aqua   7.Blue   ";
                                    cin>>num;
                                    switch(num)
                                    {
                                    case 1:
                                        system("color 2");
                                        break;
                                    case 2:
                                        system("color 4");
                                        break;
                                    case 3:
                                        system("color 7");
                                        break;
                                    case 4:
                                        system("color 5");
                                        break;
                                    case 5:
                                        system("color 6");
                                        break;
                                    case 6:
                                        system("color 3");
                                        break;
                                    case 7:
                                        system("color 1");

                                        break;
                                    default:
                                        cout<<"\t\t\t\t\t\tInvalid Choice Plz Try again !\n";


                                    }

                                    break;
                                case 11:
                                    system("perfmon");
                                    break;
                                case 12:
                                    system("diskmgmt");
                                    break;
                                case 13:
                                    system("tasklist");
                                    break;
                                case 14:

                                    break;
                                case 15:
                                    system("cls");

                                    break;
                                default:
                                    cout<<"\t\t\t\t\t\t\t\t\t \tInvalid Choice Plz Try again !\n";

                                }
                                cout<<endl;
                                cout<<"\t\t\t\t\t   ===============================================\n";
                                cout<<"\t\t\t\t\t   | DoYou Want Run this program again  ![Y]/[N] |\n";
                                cout<<"\t\t\t\t\t   ===============================================\t";
                                cin>>nextTime;
                            }

                        }

                        else
                        {
                            cout<<"\t\t\t\t\t\t\t\t\t\t\t\tInvalid Password Or UserName !\n";
                        }


                    }

                    while(NexTime=='n');
                    break;
                default:
                    cout<<"\t\t\t\t\t\t\t\t\t \tInvalid Choice Plz Try again !\n";

                }
                cout<<endl;
                cout<<"\t\t\t\t\t   ===============================================\n";
                cout<<"\t\t\t\t\t   | DoYou Want Run this program again  ![Y]/[N] |\n";
                cout<<"\t\t\t\t\t   ===============================================\t";
                cin>>nextTime;
            }

        }

        else
        {
            cout<<"\t\t\t\t\t\t\t\t\t\tInvalid Password Or UserName !\n";
        }


    }

    while(NexTime=='n');
    return 0;
}
