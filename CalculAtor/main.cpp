#include<iostream>
#include<stdio.h>
#include<math.h>
#define PI 3.14
using namespace std;
class AreaOfcircle
{
    int r;
    float area;
public:
    void get_data()
    {
        cout<<"\t\t\t\tEnter Radius Of Circle:";
        cin>>r;
    }
    void  Display_data();
};
class Largest1
{
    int a,b,c;
public:
    void get_data1();
    void Display_data1();
};
class Largest2
{
    int a1,a2;
public:
    void get_data3()
    {
        cout<<"\t\t\tEnter The Any Two Numbers:";
        cin>>a1>>a2;
    }
    void Display_data3();
};
class Largest3
{
    int numm[100],n,i;
    int largesst=0;
public:
    void get_data4()
    {
        cout<<"\t\t\t\tHow Many Numbers Are There ??\n";
        cin>>n;
        cout<<"\t\t\t\tThere Are "<<n<<" Numbers !\n";
    }
    void Display_data4()
    {
        for(i=0; i<n; i++)
        {
            cin>>numm[i];
            if(numm[i]>largesst)
            {
                largesst=numm[i];
            }
        }
        cout<<"\t\t\t\tThe Largest Number Among them "<<n<<" Numbers Is :"<<largesst;
        cout<<endl;
    }
};
class EvenOrodd
{
    int num1;
public:
    void get_data2()
    {
        cout<<"\t\t\tEnter Any a Numbers:";
        cin>>num1;
    }
    void Display_data2();
};
class Factorial
{
    int n,i;
    long fact=1;
public:
    void get_data5()
    {
        cout<<"\t\t\t\tEnter a Number :";
        cin>>n;
        for(i=1; i<=n; i++)
        {
            fact*=i;

        }
        cout<<"\t\t\tThe Number Of Factorial Of "<<n<<" Is :"<<fact<<endl;
    }
};
class Convert
{
    float centi,fha;
public:
    void get_dataTemperature()
    {
        cout<<"\t\t\tEnter CentigradeTemperature:";
        cin>>centi;
        fha=9.0/5*centi+32;
        cout<<"\t\t\tThe Temperature In Fharenheit Is :"<<fha<<endl;
    }
};
class Percent
{
    int roll,i,n7,age,num4[20];
    string name;
    static int Count;
    float per,sum=0;
    char gender;
public:
    void get_student_info()
    {
        cout<<"\t\t\t---------------Student_Information---------------\n\n";
        cout<<"\t\t\tEnter Student Name:";
        cin>>name;
        cout<<"\t\t\tEnter Student Roll_No:\n";
        cin>>roll;
        cout<<"\t\t\tEnter Student Age:\n";
        cin>>age;
        cout<<"\t\t\tEnter Male /Female [M]/[N]:\n";
        cin>>gender;
        cout<<"\t\t\tHow many Subjects Are there ??\n";
        cin>>n7;
        cout<<"\t\t\tThere are "<<n7<<" Subjects !\n";
        Count++;

    }
    void Display_student_info()
    {
        for(i=0; i<n7; i++)
        {
            cin>>num4[i];
            sum+=num4[i];
            per=sum/n7;

        }
        cout<<"\t\t\tS.N     Name      Roll_No    Gender    Age    Percent %\n";
        cout<<"\t\t\t--------------------------------------------------------\n\n";
        cout<<"\t\t\t"<<Count<<"  \t"<<name<<"   \t"<<roll<<"     \t"<<gender<<"     \t"<<age<<"    \t"<<per<<endl<<endl;

    }
};
int main()
{
    AreaOfcircle c1;
    Largest1 l1;
    EvenOrodd eo;
    Largest2 l2;
    Largest3 l3;
    int num;
    char nextTime='y';
    string nextName="admin";
    string nextPass="admin";
    cout<<"\n\n\n";
    cout<<"\t\t\t\t<!-----------------WelCome To Dream Tech69 !!------------------\n\n";
    cout<<"\t\t\t\t\t\t\tLoging..................\t\t\t\t\t\t\n\n\n\n";
    cout<<"\t\t\t\tUser-Name:";
    cin>>nextName;
    cout<<"\t\t\t\t-----------------\n\n";
    cout<<"\t\t\t\tPassword:";
    cin>>nextPass;
    cout<<"\t\t\t\t-----------------\n\n\n";
    if(nextName=="admin"&&nextPass=="admin")
    {
        cout<<"\t\t\t\t\t\t---Successfully-Login---\n\n\n";
        cout<<"\t\t\t\t\t\t\tWelCome\n";
        cout<<"\t\t\t\t\t\t\t--To--\n";
        cout<<"\t\t\t\t\t\t---Scientific-Calculator---\n\n";
        cout<<"\t\t\t\t[1].Find Area Of Circle !\n";
        cout<<"\t\t\t\t[2].Find Even OR Odd Number !\n";
        cout<<"\t\t\t\t[3].Find The Largest Number of (Tw0,Three,Ten )!\n";
        cout<<"\t\t\t\t[4].Find The Factorial Of Number !\n";
        cout<<"\t\t\t\t[5].Convert Centigrade Temperature Into Pharenheit Temperature !\n";

        cin>>num;
        while(nextTime=='y')
        {
            switch(num)
            {
            case 1:
                c1.get_data();//Area of circle
                c1.Display_data();
                cout<<"\t\t\t\tDo You Want Again Run This Program !\n";
                cout<<"\t\t\t\tPress [Y]/[N]:[";
                cin>>nextTime;
                break;
            case 2://Even or odd
                eo.get_data2();
                eo.Display_data2();
                cout<<"\t\t\t\tDo You Want Again Run This Program !\n";
                cout<<"\t\t\t\tPress [Y]/[N]:[";
                cin>>nextTime;
                break;
            case 3://find largest among them 3
                int b1;
                cout<<"\t\t\t\t\tLargest Area\n";
                cout<<"\t\t\t\t[1].Larest Between Two Numbers !\n";
                cout<<"\t\t\t\t[2].Largest among them three numbers !\n";
                cout<<"\t\t\t\t[3].largest among them 'n' Numbers !\n";
                cout<<"\t\t\t\t[4].Find percentage of Student in Different Subjects !\n";
                cin>>b1;

                switch(b1)
                {
                case 1:
                    l2.get_data3();
                    l2.Display_data3();
                    cout<<"\t\t\t\tDo You Want Again Run This Program !\n";
                    cout<<"\t\t\t\tPress [Y]/[N]:[";
                    cin>>nextTime;

                case 2:
                    l1.get_data1();
                    l1.Display_data1();
                    cout<<"\t\t\t\tDo You Want Again Run This Program !\n";
                    cout<<"\t\t\t\tPress [Y]/[N]:[";
                    cin>>nextTime;
                    break;
                case 3:
                    l3.get_data4();
                    l3.Display_data4();
                    cout<<"\t\t\t\tDo You Want Again Run This Program !\n";
                    cout<<"\t\t\t\tPress [Y]/[N]:[";
                    cin>>nextTime;
                    break;
                case 4:
                    Percent p;
                    p.get_student_info();
                    p.Display_student_info();
                    cout<<"\t\t\t\tDo You Want Again Run This Program !\n";
                    cout<<"\t\t\t\tPress [Y]/[N]:[";
                    cin>>nextTime;
                    break;



                }
            case 4:
                Factorial f;
                f.get_data5();
                cout<<"\t\t\t\tDo You Want Again Run This Program !\n";
                cout<<"\t\t\t\tPress [Y]/[N]:[";
                cin>>nextTime;
                break;
            }

        }
    }
    else
    {
        cout<<"\t\t\t\t\t-------Invalid-passwords & User_Name------\n";

    }
    return 0;
}
void AreaOfcircle::Display_data()
{
    area=PI*r*r;
    cout<<"\t\t\t\tThe Area OF Circle Is:"<<area<<"cm^2"<<endl;
}
void Largest1::get_data1()
{
    cout<<"\t\t\tEnter Any Three Numbers:";
    cin>>a>>b>>c;
}
void Largest1::Display_data1()
{
    if(a>b)
    {
        if(a>c)
        {
            cout<<"\t\t\tThe Largest Number A :"<<a<<endl;
        }
        else
        {
            cout<<"\t\t\tThe Largest Number B :"<<b<<endl;
        }
    }
    else if(b>c)
    {
        cout<<"\t\t\tThe Largest Number B :"<<b<<endl;
    }
    else
    {
        cout<<"\t\t\tThe Largest Number C :"<<c<<endl;
    }

}
void EvenOrodd::Display_data2()
{
    if(num1%2==0)
    {
        cout<<"\t\t\tThe Number Is Even :"<<num1;
    }
    else
    {
        cout<<"\t\t\tThe Number Is Oddd :"<<num1;
    }
}
void Largest2::Display_data3()
{
    int nu=a1>a2;
    cout<<"\t\t\tThe Largest Number Is :\n"<<nu;
}
int Percent::Count;
