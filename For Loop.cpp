// Q1. Squares and cubes of first n natural numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<"\t"<<i*i<<"\t"<<i*i*i<<endl;
//     }
//     return 0;
// }

// Q2. Sum of first n natural numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,sum=0;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+i;
//     }
//     cout<<"Sum is:"<<sum;
//     return 0;
// }

//Q3. Factorial of number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,fact=1;
//     cout<<"Enter number:";
//     cin>>num;
//     for(int i=num;i>=1;i--)
//     {
//         fact=fact*i;
//     }
//     cout<<"Factorial is:"<<fact;
//     return 0;
// }

//Q4. Table of a number
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     for(int i=1;i<=10;i++)
//     {
//         cout<<n<<"\t*\t"<<i<<"\t=\t"<<n*i<<endl;
//     }
//     return 0;
// }

//Q5. Power of a number
/*#include<iostream>
using namespace std;
int main()
{
    int x,y,prod=1;
    cout<<"Enter base and exponent:";
    cin>>x>>y;
    for(int i=1;i<=y;i++)
    {
        prod=prod*x;
    }
    cout<<"Power is:"<<prod;
    return 0;
}
*/

//Q6. Sum of factors of a numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,sum=0;
//     cout<<"Enter number:";
//     cin>>num;
//     for(int i=1;i<=num;i++)
//     {
//         if(num%i==0)
//         {
//             sum=sum+i;
//         }
//     }
//     cout<<"Sum is:"<<sum;
//     return 0;
// }

//Q7. Print A-Z
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=65;i<=90;i++)
//         cout<<char(i)<<endl;
//     return 0;
// }

//Q8. Print a-z
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=97;i<=122;i++)
//         cout<<char(i)<<endl;
//     return 0;
// }

//Q9. Check whether the number is perfect number or not
/*#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter number:";
    cin>>num;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
        cout<<"PERFECT NUMBER";
    else
        cout<<"NOT PERFECT NUMBER";
    return 0;
}*/

//Q10. Print Fibonacci Series
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=0,b=1,c,n;
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

//Q11. Sum and average of n numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,num,sum=0;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<"Enter number:";
//         cin>>num;
//         sum=sum+num;
//     }
//     float avg=(float)sum/n;
//     cout<<"Sum is:"<<sum<<endl;
//     cout<<"Average is:"<<avg;
//     return 0;
// }

//Q12. Out of n numbers count odd and even
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,num,o=0,e=0;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cout<<"Enter number:";
//         cin>>num;
//         if(num%2==0)
//             e++;
//         else
//             o++;
//     }
//     cout<<"Total evens:"<<e<<endl;
//     cout<<"Total odds:"<<o;
//     return 0;
// }

//Q13. Check whether number is prime or not
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,ctr=0;
//     cout<<"Enter number:";
//     cin>>num;
//     for(int i=2;i<=num/2;i++)
//     {
//         if(num%i==0)
//         {
//             ctr=1;
//             break;
//         }
//     }
//     if(ctr==0)
//         cout<<"PRIME";
//     else
//         cout<<"NOT PRIME";
//     return 0;
// }

//Q14. Print armstrong number from 1-100
/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;;
    for(int i=1;i<=n;i++)
    {
        int temp=i;
        int ctr=0;
        while(i!=0)
        {
            ctr+=1;
            i=i/10;
        }
        i=temp;
        int sum=0;
        while(temp!=0)
        {
            int digit=temp%10;
            sum=sum+pow(digit,ctr);
            temp=temp/10;
        }
        if(sum==i)
            cout<<i<<endl;
    }
    return 0;
}*/

//Q15. Print first 20 armstrong numbers
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n,i=1,count=0;
//     cout<<"Enter n:";
//     cin>>n;;
//     while(count<=n)
//     {
//         int temp=i;
//         int ctr=0;
//         while(temp!=0)
//         {
//             ctr+=1;
//             temp=temp/10;
//         }
//         temp=i;
//         int sum=0;
//         while(temp!=0)
//         {
//             int digit=temp%10;
//             sum=sum+pow(digit,ctr);
//             temp=temp/10;
//         }
//         if(sum==i)
//         {
//             cout<<i<<endl;
//             count++;
//         }
//         i++;
//     }
//     return 0;
// }

//Q16. Print prime numbers between 1-20
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int ctr=0;
//         for(int j=2;j<=i/2;j++)
//         {
//             if(i%j==0)
//             {
//                 ctr=1;
//                 break;
//             }
//         }
//         if(ctr==0 && i!=1)
//             cout<<i<<endl;
//     }
//     return 0;
// }

//Q17. Print first 20 prime numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i=1,count=0;
//     cout<<"Enter n:";
//     cin>>n;
//     while(count<n)
//     {
//         int ctr=0;
//         for(int j=2;j<=i/2;j++)
//         {
//             if(i%j==0)
//             {
//                 ctr=1;
//                 break;
//             }
//         }
//         if(ctr==0 && i!=1){
//             cout<<i<<endl;
//             count++;
//         }
//         i++;
//     }
//     return 0;
// }

//Q18. Check whether number is strong number or not
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
//         int fact=1;
//         for(int i=digit;i>=1;i--)
//         {
//             fact=fact*i;
//         }
//         sum=sum+fact;
//         num=num/10;
//     }
//     if(sum==temp)
//         cout<<"STRONG NUMBER";
//     else
//         cout<<"NOT STRONG NUMBER";
//     return 0;
// }

//Q19. LCM of 2 numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,hcf=1,lcm;
//     cout<<"Enter two numbers:";
//     cin>>a>>b;
//     for(int i=2;i<=a || i<=b;i++)
//     {
//         if(a%i==0 && b%i==0){
//             hcf=i;
//         }
//     }
//     lcm=(a*b)/hcf;
//     cout<<"LCM IS:"<<lcm;
//     return 0;
// }

//Q20. HCF of 2 numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,hcf=1;
//     cout<<"Enter two numbers:";
//     cin>>a>>b;
//     for(int i=2;i<=a || i<=b;i++)
//     {
//         if(a%i==0 && b%i==0)
//             hcf=i;
//     }
//     cout<<"HCF IS:"<<hcf;
//     return 0;
// }
