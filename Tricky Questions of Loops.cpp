// Q1. Input any number and check whether it is divisible by 7
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     if(num%7==0)
//         cout<<"DIVISIBLE";
//     else
//         cout<<"NOT DIVISIBLE";
//     return 0;
// }

// Q2. Input any number and check whether it is ends with 7
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     if(num%10==7)
//         cout<<"ENDS";
//     else
//         cout<<"DOESN'T ENDS";
//     return 0;
// }

// Q3. From you number count odd and even
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     int o=0,e=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         if(digit%2==0)
//             e++;
//         else
//             o++;
//         num=num/10;
//     }
//     cout<<"Total evens:"<<e<<endl;
//     cout<<"Total odds:"<<o;
//     return 0;
// }

// Q4. From your number print squares and cubes of even
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     int temp=num;
//     int sum=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         sum=sum*10+digit;
//         num=num/10;
//     }
//     temp=sum;
//     while(temp!=0)
//     {
//         int digit=temp%10;
//         if(digit%2==0)
//             cout<<digit*digit*digit<<endl;
//         else
//             cout<<digit*digit<<endl;
//         temp=temp/10;
//     }
//     return 0;
// }

// Q5. From your number check number is prime or not if it is odd         number and find factorial if it is even number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     int temp=num;
//     int sum=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         sum=sum*10+digit;
//         num=num/10;
//     }
//     temp=sum;
//     while(temp!=0)
//     {
//         int digit=temp%10;
//         if(digit%2==0)
//         {
//             int fact=1;
//             for(int i=1;i<=digit;i++)
//                 fact=fact*i;
//             cout<<"Factorial of "<<digit<<" is:"<<fact<<endl;
//         }
//         else
//         {
//             int ctr=0;
//             for(int i=2;i<=digit/2;i++)
//             {
//                 if(digit%i==0)
//                 {
//                     ctr=1;
//                     break;
//                 }
//             }
//             if(ctr==0 && digit!=1)
//                 cout<<digit<<" is prime"<<endl;
//             else if(digit==1)
//                 cout<<digit<<" is neither prime nor not prime"<<endl;
//             else
//                 cout<<digit<<" is not prime"<<endl;
//         }
//         temp=temp/10;
//     }
//     return 0;
// }

// Q6. Print n fibonna numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,a=0,b=1,c;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<a<<endl;
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     return 0;
// }

// Q7. Print up to n fibonna numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;int i=1;
//     cout<<"Enter n:";
//     cin>>n;
//     int a=0,b=1,c;
//     while(a<=n)
//     {
//         cout<<a<<endl;
//         c=a+b;
//         a=b;
//         b=c;
//         i++;
//     }
//     return 0;
// }
