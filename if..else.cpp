//Q1. WAP to check whether number is odd or even
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     if(num%2==0)
//         cout<<"Even";
//     else
//         cout<<"Odd";
//     return 0;
// }

//Q2. WAP to check number is positive or negative
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin>>num;
//     if(num<0)
//         cout<<"Negative";
//     else
//         cout<<"Positive";
//     return 0;
// }

//Q3. WAP to check whether person can cast vote or not
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cin>>age;
//     if(age>=18)
//         cout<<"can vote";
//     else
//         cout<<"cannot vote";
//     return 0;
// }

//Q4. WAP to check maximum out of 2 numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     if(a>=b)
//         cout<<a<<" is maximum";
//     else
//         cout<<b<<" is maximum";
//     return 0;
// }

//Q5. WAP to check whether year is leap or not
// #include<iostream>
// using namespace std;
// int main()
// {
//     int y;
//     cin>>y;
//     if((y%100==0 && y%400==0)||(y%100!=0 && y%4==0))
//         cout<<"leap";
//     else
//         cout<<"not leap";
//     return 0;
// }

//Q6. Input CP and SP.Calculate profit or loss
// #include<iostream>
// using namespace std;
// int main()
// {
//     int cp,sp;
//     cin>>cp;
//     cin>>sp;
//     if(sp>=cp)
//         cout<<"Profit:"<<sp-cp;
//     else
//         cout<<"Loss:"<<cp-sp;
//     return 0;
// }

//Q7. Input gender and greet accordingly
// #include<iostream>
// using namespace std;
// int main()
// {
//     char g;
//     cin>>g;
//     if(g=='m')
//         cout<<"good morning sir!";
//     else
//         cout<<"good morning mam!";
//     return 0;
// }

//Q8. Input basic salary calculate bonus and total salary
// #include<iostream>
// using namespace std;
// int main()
// {
//     int basic,bonus;
//     cin>>basic;
//     if(basic>=10000)
//         bonus=0.10*basic;
//     else
//         bonus=0.05*basic;
//     cout<<"Bonus is:"<<bonus<<endl;
//     cout<<"Total Salary is:"<<basic+bonus;
//     return 0;
// }

//Q9. Input previous reading,new reading and meter type('D' or 'C')
//    calculate unit consumed and bill
// #include<iostream>
// using namespace std;
// int main()
// {
//     float p,n,r;
//     char m;
//     cin>>p>>n;
//     cin>>m;
//     float u=n-p;
//     if(m=='d'||m=='D')
//         r=5.50;
//     else
//         r=6.50;
//     cout<<"Unit consumed is:"<<u<<endl;
//     cout<<"Bill is:"<<u*r;
//     return 0;
// }
