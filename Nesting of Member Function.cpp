//Q1. Find the sum and average of 2 numbers
// #include<iostream>
// using namespace std;
// class number
// {
//     int a,b;
// public:
//     void getdata()
//     {
//         cout<<"Enter 2 numbers:";
//         cin>>a>>b;
//     }
//     int sum()
//     {
//         return a+b;
//     }
//     float average()
//     {
//         int s;
//         s=sum();
//         float avg=(float)s/2.0;
//         return avg;
//     }
// };
// int main()
// {
//     number n;
//     n.getdata();
//     cout<<"\n1. Sum"<<endl;
//     cout<<"2. Average"<<endl;
//     cout<<"\nEnter choice:";
//     int ch;
//     cin>>ch;
//     switch(ch)
//     {
//         case 1:
//             cout<<"Sum is:"<<n.sum();
//             break;
//         case 2:
//             cout<<"Average is:"<<n.average();
//             break;
//         default:
//             cout<<"Invalid Choice..";
//     }
//     return 0;
// }

//Q2. Find maximum out of 3 numbers using maximum out of 2 numbers
// #include<iostream>
// using namespace std;
// class number
// {
//     int a,b,c;
// public:
//     void getdata()
//     {
//         cout<<"Enter three numbers:";
//         cin>>a>>b>>c;
//     }
//     int max2()
//     {
//         if(a>=b)
//             return a;
//         else
//             return b;
//     }
//     int max3()
//     {
//         int m=max2();
//         if(m>=c)
//             return m;
//         else
//             return c;
//     }
// };
// int main()
// {
//     number n;
//     n.getdata();
//     cout<<"Maximum out of 3 numbers is:"<<n.max3();
//     return 0;
// }
