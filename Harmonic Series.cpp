// Q1. Print series 1+1/2+1/3+1/4+......+1/n
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     float sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         sum=sum+1.0/i;    
//     }
//     cout<<"Sum is:"<<sum;
//     return 0;
// }

// Q2. Print series 1+2/2!+3/3!+4/4!+......+n/n!
//	#include<iostream>
//	using namespace std;
//	int main()
//	{
//		int n;
//		cout<<"Enter n:";
//		cin>>n;
//		double sum=0;
//		for(int i=1;i<=n;i++)
//		{
//			int num=i;
//			int fact=1;
//			for(int j=1;j<=num;j++)
//			{
//				fact=fact*j;
//			}
//			sum=sum+(float)i/fact;
//		}
//		cout<<"Sum is:"<<sum;
//		return 0;
//	}

// Q3. Print series 1+2/3!+3/5!+......
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,num;
//     double sum=1;
//     cout<<"Enter n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         num=2*i+1;
//         int fact=1;
//         for(int j=1;j<=num;j++)
//         {
//             fact=fact*j;   
//         }
//         sum=sum+(double)i/fact;
//     }
//     cout<<"Result is:"<<sum;
//     return 0;
// }

// Q4. Print series x+x^2/2!+x^3/3!+.......
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int x,n;
//     cout<<"Enter value of x:";
//     cin>>x;
//     cout<<"Enter value of n:";
//     cin>>n;
//     double sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         int fact=1;
//         for(int j=1;j<=i;j++)
//         {
//             fact=fact*j;
//         }
//         int power=pow(x,i);
//         sum=sum+(double)power/fact;
//     }
//     cout<<"Result is:"<<sum;
//     return 0;
// }

// Q5. Print series x-x^2/2!+x^3/3!-x^4/4!+.......
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int x,n;
//     cout<<"Enter value of x:";
//     cin>>x;
//     cout<<"Enter value of n:";
//     cin>>n;
//     double sum=0;
//     for(int i=1;i<=n;i++)
//     {
//         int fact=1;
//         for(int j=1;j<=i;j++)
//         {
//             fact=fact*j;
//         }
//         int power=pow(x,i);
//         if(i%2==0)
//             sum=sum-(double)power/fact;
//         else
//             sum=sum+(double)power/fact;
//     }
//     cout<<"Result is:"<<sum;
//     return 0;
// }
