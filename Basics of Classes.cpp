//Q1. Find the area and perimeter of rectangle using class
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
//     void area()
//     {
//         cout<<"Area of rectangle is:"<<l*b<<endl;
//     }
//     void per()
//     {
//         cout<<"Perimeter of rectangle is:"<<2*(l+b);
//     }
// };
// int main()
// {
//     rectangle r;
//     r.getdata();
//     r.area();
//     r.per();
//     return 0;
// }

//Q2. Find volume of rectangle using class
// #include<iostream>
// using namespace std;
// class rectangle
// {
//     int l,b,h;
// public:
//     void getdata()
//     {
//         cout<<"Enter length,breadth and height:";
//         cin>>l>>b>>h;
//     }
//     void volume()
//     {
//         cout<<"Volume of rectangle is:"<<l*b*h;
//     }
// };
// int main()
// {
//     rectangle r;
//     r.getdata();
//     r.volume();
//     return 0;
// }

//Q3. class name: bank
//    dm:int account no,string name,float balance
//    mf:void getdata(),void deposit(),void withdraw(),void display   ()
// #include<iostream>
// using namespace std;
// class bank
// {
//     int no;
//     string name;
//     float balance;
// public:
//     void getdata()
//     {
//         cout<<"Enter account no,name and balance:";
//         cin>>no>>name>>balance;
//     }
//     void display()
//     {
//         cout<<"Account No:"<<no<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Balance:"<<balance<<endl;
//     }
//     void deposit()
//     {
//         int amt;
//         cout<<"Enter amount to deposit:";
//         cin>>amt;
//         balance=balance+amt;
//     }
//     void withdraw()
//     {
//         int amt;
//         cout<<"Enter amount to withdraw:";
//         cin>>amt;
//         if(amt>balance){
//             cout<<amt<<" can't be withdrawed"<<endl;
//             balance=balance;
//         }
//         else
//             balance=balance-amt;
//     }
// };
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
