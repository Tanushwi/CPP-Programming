// Q1. Print 5 even numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter n:";
//     cin>>n;
//     int i=2,count=0;
//     while(count<n)
//     {
//         cout<<i<<endl;
//         count++;
//         i+=2;
//     }
//     return 0;
// }

// Q2. Print even numbers if user wants to input otherwise no need     to print
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=2;
//     char reply='y';
//     while(reply=='y')
//     {
//         cout<<i<<endl;
//         i+=2;
//         cout<<"Do u want more evens y or n?";
//         cin>>reply;
//     }
//     return 0;
// }

// Q3. Sum of digits of a number
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
//         sum=sum+digit;
//         num=num/10;
//     }
//     cout<<"Sum of digits is:"<<sum;
//     return 0;
// }

// Q4. Reverse of a number
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
//     cout<<"Reverse of number is:"<<sum;
//     return 0;
// }

// Q5. Check number is pallindrome or not
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
//     if(sum==temp)
//         cout<<"PALLINDROME";
//     else
//         cout<<"NOT PALLINDROME";
//     return 0;
// }

// Q6. Check number is armstrong or not
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     int temp=num;
//     int sum=0,ctr=0;
//     while(num!=0)
//     {
//         ctr+=1;
//         num=num/10;
//     }
//     num=temp;
//     while(num!=0)
//     {
//         int digit=num%10;
//         sum=sum+pow(digit,ctr);
//         num=num/10;
//     }
//     if(temp==sum)
//         cout<<"ARMSTRONG";
//     else
//         cout<<"NOT ARMSTRONG";
//     return 0;
// }

// Q7. Count number of digits or not
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num,ctr=0;
//     cout<<"Enter number:";
//     cin>>num;
//     while(num!=0)
//     {
//         ctr+=1;
//         num=num/10;
//     }
//     cout<<"Total digits in the number is:"<<ctr;
//     return 0;
// }

// Q8. Binary to Decimal Conversion
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     int i=0;
//     int sum=0;
//     int temp=num;
//     while(num!=0)
//     {
//         int digit=num%10;
//         sum=sum+digit*pow(2,i);
//         num=num/10;
//         i++;
//     }
//     cout<<"Decimal value is:"<<sum;
//     return 0;
// }
