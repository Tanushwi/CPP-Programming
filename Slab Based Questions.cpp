//Q1. WAP to input electricity unit charges and calculate total electricity bill acc to given condition
/*#include<iostream>
using namespace std;
int main()
{
    double u,a,t;
    cout<<"Enter units:";
    cin>>u;
    if(u<=50)
        a=0.50*u;
    else if(u>50 && u<=150)
        a=50*0.50+(u-50)*0.75;
    else if(u>150 && u<=250)
        a=50*0.50+100*0.75+(u-150)*1.20;
    else
        a=50*0.50+100*0.75+100*1.20+(u-250)*1.50;
    t=20*a/100;
    cout<<"Total amount to be paid is:"<<a+t;
    return 0;
}
*/

//Q2. WAP to calculate tax the person has to pay,based on their income
// #include<iostream>
// using namespace std;
// int main()
// {
//     int income,t;
//     cout<<"Enter income:";
//     cin>>income;
//     if(income<=250000)
//         t=0;
//     else if(income>250000 && income<=500000)
//         t=(income-250000)*5/100;
//     else if(income>500000 && income<=1000000)
//         t=250000*5/100+(income-500000)*10/100;
//     else
//         t=250000*5/100+500000*10/100+(income-1000000)*15/100;
//     cout<<"Taxto be paid is:"<<t;
//     return 0;
// }
