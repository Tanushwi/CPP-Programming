// Q1. Sum of numbers
// #include<iostream>
// using namespace std;
// int sum()
// {
//     return 0;
// }
// int sum(int x)
// {
//     return x;
// }
// int sum(int x,int y)
// {
//     return x+y;
// }
// int sum(int x,int y,int z)
// {
//     return x+y+z;
// }
// int main()
// {
//     int a,b,c;
//     cout<<"Enter 3 numbers:";
//     cin>>a>>b>>c;
//     cout<<"Sum of 0 number is:"<<sum()<<endl;
//     cout<<"Sum of 1 number is:"<<sum(a)<<endl;
//     cout<<"Sum of 2 number is:"<<sum(a,b)<<endl;
//     cout<<"Sum of 3 number is:"<<sum(a,b,c)<<endl;
//     return 0;
// }

// Q2. Find area of circle,rectangle and triangle
// #include<iostream>
// using namespace std;
// float area(float r)
// {
//     return 3.14*r*r;
// }
// float area(float l,float b)
// {
//     return l*b;
// }
// float area(float l,float b,float h)
// {
//     return 0.5*l*b*h;
// }
// int main()
// {
//     float r,l,b,h;
//     cout<<"Enter radius,length,breadth,height:";
//     cin>>r>>l>>b>>h;
//     cout<<"Area of circle is:"<<area(r)<<endl;
//     cout<<"Area of rectangle is:"<<area(l,b)<<endl;
//     cout<<"Area of triangle is:"<<area(l,b,h)<<endl;
// }

// Q3. Maximum out of 2 and 3 numbers
// #include<iostream>
// using namespace std;
// void max(int x,int y)
// {
//     if(x>=y)
//         cout<<x<<" is maximum"<<endl;
//     else
//         cout<<y<<" is maximum"<<endl;
// }
// void max(int x,int y,int z)
// {
//     if(x>=y && x>=z)
//         cout<<x<<" is maximum"<<endl;
//     else if(y>=x && y>=z)
//         cout<<y<<" is maximum"<<endl;
//     else
//         cout<<z<<" is maximum"<<endl;
// }
// int main()
// {
//     int a,b,c;
//     cout<<"Enter three numbers:";
//     cin>>a>>b>>c;
//     max(a,b);
//     max(a,b,c);
//     return 0;
// }

// Q4. Adding 2 strings and numbers
// #include<iostream>
// using namespace std;
// void add(int x,int y)
// {
//     cout<<"Sum is:"<<x+y<<endl;
// }
// void add(char a[10],char b[10])
// {
//     int i,j;
//     char c[20];
//     for(i=0;a[i]!='\0';i++)
//     {
//         c[i]=a[i];
//     }
//     for(j=0;b[j]!='\0';j++)
//     {
//         c[i+j]=b[j];
//     }
//     c[i+j]='\0';
//     cout<<"Concatenated string is:"<<c;
// }
// int main()
// {
//     int a,b;
//     char s1[10],s2[10];
//     cout<<"Enter 2 numbers:";
//     cin>>a>>b;
//     cout<<"Enter 2 strings:";
//     cin>>s1>>s2;
//     add(a,b);
//     add(s1,s2);
//     return 0;
// }

// Q5. Check number and string is pallindrome or not
// #include<iostream>
// using namespace std;
// void pall(int num)
// {
//     int temp=num;
//     int sum=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         sum=sum*10+digit;
//         num=num/10;
//     }
//     if(temp==sum)
//         cout<<temp<<" is pallindrome"<<endl;
//     else
//         cout<<temp<<" is not pallindrome"<<endl;
// }
// void pall(string a)
// {
//     string b=a;
//     int i,j,l=0;
//     for(int i=0;a[i]!='\0';i++)
//         l++;
//     j=l-1;
//     for(int i=0;i<l/2;i++)
//     {
//         char temp=a[i];
//         a[i]=a[j-i];
//         a[j-i]=temp;
//     }
//     if(a==b)
//         cout<<b<<" is pallindrome";
//     else
//         cout<<b<<" is not pallindrome";
// }
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     string s;
//     cout<<"Enter string:";
//     cin>>s;
//     pall(num);
//     pall(s);
//     return 0;
// }

// Q6. Print reverse of number and string
// #include<iostream>
// using namespace std;
// void rev(int num)
// {
//     int temp=num;
//     int sum=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         sum=sum*10+digit;
//         num=num/10;
//     }
//     cout<<"Reverse of number is:"<<sum<<endl;
// }
// void rev(string a)
// {
//     string b=a;
//     int i,j,l=0;
//     for(int i=0;a[i]!='\0';i++)
//         l++;
//     j=l-1;
//     for(int i=0;i<l/2;i++)
//     {
//         char temp=a[i];
//         a[i]=a[j-i];
//         a[j-i]=temp;
//     }
//     cout<<"Reverse of string is:"<<a;
// }
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     string s;
//     cout<<"Enter string:";
//     cin>>s;
//     rev(num);
//     rev(s);
//     return 0;
// }

// Q7. Print reverse of number and string by returning string
// #include<iostream>
// using namespace std;
// void rev(int num)
// {
//     int temp=num;
//     int sum=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         sum=sum*10+digit;
//         num=num/10;
//     }
//     cout<<"Reverse of number is:"<<sum<<endl;
// }
// string rev(string a)
// {
//     string b=a;
//     int i,j,l=0;
//     for(int i=0;a[i]!='\0';i++)
//         l++;
//     j=l-1;
//     for(int i=0;i<l/2;i++)
//     {
//         char temp=a[i];
//         a[i]=a[j-i];
//         a[j-i]=temp;
//     }
//     return a;
// }
// int main()
// {
//     int num;
//     cout<<"Enter number:";
//     cin>>num;
//     string s;
//     cout<<"Enter string:";
//     cin>>s;
//     rev(num);
//     cout<<"Reverse of string is:"<<rev(s);
//     return 0;
// }
