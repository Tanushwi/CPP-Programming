//Q1. Maximum out of 3 numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter 3 numbers:";
//     cin>>a>>b>>c;
//     if(a>b)
//     {
//         if(a>c)
//             cout<<a<<" is maximum";
//         else
//             cout<<c<<" is maximum";
//     }
//     else
//     {
//         if(b>c)
//             cout<<b<<" is maximum";
//         else
//             cout<<c<<" is maximum";
//     }
// }

//Q2. Maximum out of 4 numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c,d;
//     cout<<"Enter 4 numbers:";
//     cin>>a>>b>>c>>d;
//     if(a>b)
//     {
//         if(a>c)
//         {
//             if(a>d)
//                 cout<<a<<" is maximum";
//             else
//                 cout<<d<<" is maximum";
//         }
//         else
//         {
//             if(c>d)
//                 cout<<c<<" is maximum";
//             else
//                 cout<<d<<" is maximum";
//         }
//     }
//     else
//     {
//         if(b>c)
//         {
//             if(b>d)
//                 cout<<b<<" is maximum";
//             else
//                 cout<<d<<" is maximum";
//         }
//         else
//         {
//             if(c>d)
//                 cout<<c<<" is maximum";
//             else
//                 cout<<d<<" is maximum";
//         }
//     }
//     return 0;
// }

//Q3. Input any month and year and find no. of days in given month
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m,y;
//     cout<<"Enter month:";
//     cin>>m;
//     if(m==4||m==6||m==9||m==11)
//         cout<<"30 days";
//     else if(m==2)
//     {
//         cout<<"Enter year:";
//         cin>>y;
//         if(y%4==0)
//             cout<<"29 days";
//         else
//             cout<<"28 days";
//     }
//     else
//         cout<<"31 days";
//     return 0;
// }

//Q4. Input marital status,gender and age and check whether the      driver can be insured or not
/*#include<iostream>
using namespace std;
int main()
{
    char m,g;
    int a;
    cout<<"Enter marital status:";
    cin>>m;
    if(m=='m')
        cout<<"can be insured";
    else
    {
        cout<<"Enter gender:";
        cin>>g;
        cout<<"Enter age:";
        cin>>a;
        if(g=='m')
        {
            if(a>25)
                cout<<"can be insured";
            else
                cout<<"cannot be insured";
        }
        else
        {
            if(a>35)
                cout<<"can be insured";
            else
                cout<<"cannot be insured";
        }
    }
    return 0;
}*/
