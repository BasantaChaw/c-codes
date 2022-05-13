#include <iostream>
//The Program Is Coded BY Basanta Chaudhary
//The Programs Is Most powerfull
using namespace std;
#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstring>
class LargeAmong_n
{
private:
    int num[100],n,i,Large=0;
public:
    void ge_Data()
    {
        cout<<"\t\t\t\t\t   How Many Numbers are there.....? ";
        cin>>n;
        cout<<"\t\t\t\t\t   There are  "<<n<<"  Numbers ! ";
        for(i=0; i<n; i++)
        {
            cin>>num[i];
            if(num[i]>Large)
            {
                Large=num[i];
            }
        }
        cout<<endl<<"\t\t\t\t\t   The Largest Number Among "<<n<<" Is :"<<Large;
    }

};
class largestBtwn2
{
private:
    int num1,num2;
public:
    void Get_DatA2()
    {
        cout<<"\t\t\t\t\t   Enter First  Number : ";
        cin>>num1;
        cout<<"\t\t\t\t\t   Enter Last   Number : ";
        cin>>num2;
        if(num1>num2)
        {
            cout<<"\t\t\t\t  The Largest Number Is :"<<num1;
        }
        else
        {
            cout<<endl<<"\t\t\t\t\t   The Largest Number Is :"<<num2;

        }

    }
};
class Conditional_OperatorFind_Largest_Between3_Number
{
private:
    int a,b,c;
public:
    void Get_Data3()
    {
        cout<<"\t\t\t\t\t   Enter First   Number : ";
        cin>>a;
        cout<<"\t\t\t\t\t   Enter Second  Number : ";
        cin>>b;
        cout<<"\t\t\t\t\t   Enter Third   Number : ";
        cin>>c;
        int k;
        k=(a>b&&a>c)?a:(b>c)?b:c;
        cout<<endl<<"\t\t\t\t\t   The Largest Number Is :"<<k;
    }
    void Get_Data3_Middle()
    {
        cout<<"\t\t\t\t\t   Enter First   Number : ";
        cin>>a;
        cout<<"\t\t\t\t\t   Enter Second  Number : ";
        cin>>b;
        cout<<"\t\t\t\t\t   Enter Third   Number : ";
        cin>>c;
        cout<<endl;
        cout<<"\t\t\t\t\t   -------------------------------------\n";
        if(a>b&&a<c)
        {
            cout<<"\t\t\t\t\t   The Middle Number Is :"<<a;
        }
        else if(b>a&&b<c)
        {
            cout<<"\t\t\t\t\t   The Middle Number Is :"<<b;
        }
        else
        {
            cout<<"\t\t\t\t\t   The Middle Number Is :"<<c;
        }
    }
    void Get_Data_Lowest3()
    {
        cout<<"\t\t\t\t\t   Enter First   Number : ";
        cin>>a;
        cout<<"\t\t\t\t\t   Enter Second  Number : ";
        cin>>b;
        cout<<"\t\t\t\t\t   Enter Third   Number : ";
        cin>>c;
        cout<<endl;
        cout<<"\t\t\t\t\t   -------------------------------------\n";
        if(a<b&&a<c)
        {
            cout<<"\t\t\t\t\t   The Smallest Number Is :"<<a;
        }
        else if(b<a&&b<c)
        {
            cout<<"\t\t\t\t\t   The Smallest Number Is :"<<b;
        }
        else
        {
            cout<<"\t\t\t\t\t   The Smallest Number Is :"<<c;
        }
    }
};
int main()
{
    string User_name,User_password,Re_Password;
    cout<<endl<<endl;
    int ok;
    char  NextTime='y';
    cout<<"\t\t\t\t\t----------------------------------------------\n";
    cout<<"\t\t\t\t\t|            WelCome To DreamCode             |\n";
    cout<<"\t\t\t\t--------------------------------------------------------------\n";
    cout<<"\t\t\t\t|              ResponSive Scientific CalCulator              |\n";
    cout<<"\t\t\t\t--------------------------------------------------------------\n";
    cout<<"\t\t\t------------------------------------------------------------------------------\n";
    cout<<"\t\t\t|                  The Program Is Coded By Basanta Chaudhary                 |\n";
    cout<<"\t\t\t------------------------------------------------------------------------------\n";
    cout<<endl;
    cout<<"\t\t\t\t\t\t           Loging !                  \n"<<endl;
    do
    {
        cout<<"\t\t\t\t\t\t    User-Name   : ";
        cin>>User_name;
        cout<<endl;
        cout<<"\t\t\t\t\t\t  User-Password : ";
        cin>>User_password;
        cout<<endl;
        cout<<"\t\t\t\t\t\t   Re_Password  : ";
        cin>>Re_Password;
        if(User_name=="a"&&User_password=="a"&&Re_Password=="a")
        {
            while(NextTime=='y')
            {
                cout<<endl;
                cout<<"\t\t\t\t\t        You Have successfully login !\n";
                cout<<"\t\t\t\t\t  ------------------------------------------\n";
                cout<<endl<<endl;
                cout<<"\t\t\t\t\t                 Cho0se              \n";
                cout<<endl;
                cout<<"\t\t\t\t\t   1.)Do You Want Find Largest Numbers !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   2.)Do You Want Find Factorial Number!\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   3.)Do You Want Reset Your Pc !\n";
                cout<<endl;
                cout<<"\t\t\t\t\t   15.)Do You Want Log-out !  ";
                cin>>ok;
                cout<<endl;
                cout<<"\t\t\t\t\t   -------------------------------------"<<endl;
                switch(ok)
                {
                case 1:
                    cout<<"\t\t\t\t\t  [1] Between 2 Number  [2] Between 3 Number [3] Among them 'n' Number";
                    cout<<endl;
                    cout<<endl<<"\t\t\t\t\t  [4] Middle-Between 3 Number  [5] Lowest-Between 3 Number  ";
                    cin>>ok;
                    if(ok==1)
                    {
                        largestBtwn2 l;
                        l.Get_DatA2();
                    }
                    else if(ok==2)
                    {
                        Conditional_OperatorFind_Largest_Between3_Number c;
                        c.Get_Data3();
                    }
                    else if(ok==3)
                    {
                        LargeAmong_n n;
                        n.ge_Data();
                    }
                    else if(ok==4)
                    {
                        Conditional_OperatorFind_Largest_Between3_Number c;
                        c.Get_Data3_Middle();
                    }else if(ok==5){
                    Conditional_OperatorFind_Largest_Between3_Number c;
                    c.Get_Data_Lowest3();
                    }
                    else
                    {
                        cout<<endl;
                        cout<<"\t\t\t\t\t\t     You Have Invalid Choose !\n";
                        cout<<"\t\t\t\t\t     -----------------------------------------\n";
                    }
                    break;

                }
                cout<<endl<<endl;
                cout<<"\t\t\t\t\t   ===============================================\n";
                cout<<"\t\t\t\t\t   | DoYou Want Run this program again  ![Y]/[N] |\n";
                cout<<"\t\t\t\t\t   ===============================================\t";
                cin>>NextTime;

            }
        }
        else
        {
            cout<<endl;
            cout<<"\t\t\t\t\tYou Have Entered InValid passWord & UserName  !\n";
            cout<<"\t\t\t\t\t-----------------------------------------------\n";
            cout<<endl;
            cout<<"\t\t\t\t\t\t       Please Try Again !           \n";
            cout<<"\t\t\t\t\t\t-----------------------------\n";
        }

    }
    while(ok=='1k');

    return 0;
}
