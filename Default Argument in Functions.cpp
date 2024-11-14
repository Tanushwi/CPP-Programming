// Q1. Sum of numbers 
// #include<iostream>
// using namespace std;
// int sum(int x=10,int y=20)
// {
//     return x+y;
// }
// int main()
// {
//     int a,b;
//     cout<<"Enter 2 numbers:";
//     cin>>a>>b;
//     cout<<"Sum without passing values is:"<<sum()<<endl;
//     cout<<"Sum by passing only value of a is:"<<sum(a)<<endl;
//     cout<<"Sum by passing only value of b is:"<<sum(b)<<endl;
//     cout<<"Sum by passing both values of a and b is:"<<sum(a,b)<<endl;
//     return 0;
// }

// Q2. Calculate simple interest by default r=2% if we pass parameter then find acc to that otherwise 2%
// #include<iostream>
// using namespace std;
// void soi(float p,float r,float t)
// {
//     cout<<"Simple interest is:"<<p*r*t/100<<endl;
// }
// int main()
// {
//     float p,r,t;
//     char reply;
//     cout<<"Enter principal,time:";
//     cin>>p>>t;
//     cout<<"Enter reply:";
//     cin>>reply;
//     while(reply=='y')
//     {
//         cout<<"Enter rate of interest:";
//         cin>>r;
//         soi(p,r,t);
//         return 0;
//     }
//     soi(p,2,t);
//     return 0;
// }
