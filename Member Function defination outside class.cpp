//Q1. Find the area of rectangle
// #include<iostream>
// using namespace std;
// class rectangle
// {
//     int l,b;
// public:
//     void getdata()
//     {
//         cout<<"Enter length and breadth:";
//         cin>>l>>b;
//     }
//     void area();
// };
// void rectangle::area()
// {
//     cout<<"Area of rectangle is:"<<l*b;
// }
// int main()
// {
//     rectangle r;
//     r.getdata();
//     r.area();
//     return 0;
// }

//Q2. Find the area of rectangle by returning the value
// #include<iostream>
// using namespace std;
// class rectangle
// {
//     int l,b;
// public:
//     void getdata()
//     {
//         cout<<"Enter length and breadth:";
//         cin>>l>>b;
//     }
//     int area();
// };
// int rectangle::area()
// {
//     return l*b;
// }
// int main()
// {
//     rectangle r;
//     r.getdata();
//     int res=r.area();
//     cout<<"Area of rectangle is:"<<res;
//     return 0;
// }

//Q3. class:bank
//    dm:int accno,char name[30],float balance
//    mf: void getdata(),void display(), [void deposit(),void         withdraw()] these 2 functions should be outside the class
// #include<iostream>
// using namespace std;
// class bank
// {
//     int accno;
//     char name[30];
//     float balance;
// public:
//     void getdata()
//     {
//         cout<<"Enter account no,name and balance:";
//         cin>>accno>>name>>balance;
//     }
//     void display()
//     {
//         cout<<"Account no is:"<<accno<<endl;
//         cout<<"Name is:"<<name<<endl;
//         cout<<"Balance is:"<<balance<<endl;
//     }
//     void withdraw();
//     void deposit();
// };
// void bank::deposit()
// {
//     int amt;
//     cout<<"Enter amount to be deposit:";
//     cin>>amt;
//     balance=balance+amt;
// }
// void bank::withdraw()
// {
//     int amt;
//     cout<<"Enter amount to be withdraw:";
//     cin>>amt;
//     if(amt>balance)
//         cout<<"Amount can't be wthdrawn...";
//     else
//         balance=balance-amt;
// }
// int main()
// {
//     bank b;
//     b.getdata();
//     cout<<endl;
//     b.display();
//     cout<<endl;
//     b.deposit();
//     cout<<endl;
//     b.display();
//     cout<<endl;
//     b.withdraw();
//     cout<<endl;
//     b.display();
//     return 0;
// }
