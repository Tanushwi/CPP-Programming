//Q1. Input basic salary calculate bonus and total salary
// #include<iostream>
// using namespace std;
// int main()
// {
//     int basic;
//     cin>>basic;
//     int bonus=0.10*basic;
//     cout<<"Bonus is:"<<bonus<<endl;
//     cout<<"Total Salary is:"<<basic+bonus;
//     return 0;
// }

//Q2. Input basic,HRA,DA,PF.Calculate gross and net salary
// #include<iostream>
// using namespace std;
// int main()
// {
//     int basic,HRA,DA,PF;
//     cin>>basic>>HRA>>DA>>PF;
//     int gross=basic+HRA+DA;
//     cout<<"Gross Salary is:"<<gross<<endl;
//     cout<<"Net Salary is:"<<gross-PF;
//     return 0;
// }

//Q3. Input previous reading,new reading and rate per unit.Calculate unit consumed and bill
// #include<iostream>
// using namespace std;
// int main()
// {
//     int p,n,r;
//     cin>>p>>n>>r;
//     int u=n-p;
//     cout<<"Unit consumed is:"<<u<<endl;
//     cout<<"Bill is:"<<u*r;
//     return 0;
// }

//Q4. Calculate hypotenuse from perpendicular and base
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int h,p,b;
//     cin>>p>>b;
//     h=sqrt(p*p+b*b);
//     cout<<"Hypotenuse is:"<<h;
//     return 0;
// }

//Q5. Calculate amount and compound interest
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int p,r,t;
//     cin>>p>>r>>t;
//     int a=p*pow(1+r/100,t);
//     cout<<"Amount is:"<<a<<endl;
//     cout<<"Compound interest is:"<<a-p;
//     return 0;
// }

//Q6. Calculate area of triangle using heron's formula
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     float a,b,c;
//     cin>>a>>b>>c;
//     float s=(a+b+c)/2;
//     float ar=sqrt(s*(s-a)*(s-b)*(s-c));
//     cout<<"Area of triangle is:"<<ar;
//     return 0;
// }
