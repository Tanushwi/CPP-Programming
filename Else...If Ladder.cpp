//Q1. Input marks of 3 subjects calculate % and final result
// #include<iostream>
// using namespace std;
// int main()
// {
//     float a,b,c,per;
//     cin>>a>>b>>c;
//     per=(a+b+c)*100/300;
//     if(per>=75)
//         cout<<"Distinction";
//     else if(per>=60 && per<75)
//         cout<<"First Division";
//     else if(per>=50 && per<60)
//         cout<<"Second Division";
//     else
//         cout<<"Fail";
//     return 0;
// }

//Q2. Input age and give remarks
// #include<iostream>
// using namespace std;
// int main()
// {
//     int age;
//     cin>>age;
//     if(age>=1 && age<=12)
//         cout<<"child";
//     else if(age>=13 && age<=19)
//         cout<<"teenager";
//     else if(age>=20 && age<=50)
//         cout<<"mature";
//     else
//         cout<<"old";
//     return 0;
// }

//Q3. Input any character and check whether it is uppercase,lowercase,number otherwise special character
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter character:";
//     cin>>ch;
//     if(ch>=65 && ch<=90)
//         cout<<"uppercase";
//     else if(ch>=97 && ch<=122)
//         cout<<"lowercase";
//     else if(ch>=48 && ch<=57)
//         cout<<"number";
//     else
//         cout<<"special character";
//     return 0;
// }

//Q4. Input any alphabet and check whether it is vowel or consonant
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter character:";
//     cin>>ch;
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||
//     ch=='E'||ch=='I'||ch=='O'||ch=='U')
//         cout<<"vowel";
//     else
//         cout<<"Consonant";
//     return 0;
// }

//Q5. Input any month and find season
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout<<"Enter month:";
//     cin>>m;
//     if(m==12||m==1||m==2)
//         cout<<"winter";
//     else if(m==3||m==4||m==5)
//         cout<<"spring";
//     else if(m==6||m==7||m==8)
//         cout<<"summer";
//     else if(m==9||m==10||m==11)
//         cout<<"autumn";
//     else
//         cout<<"invalid month";
//     return 0;
// }

//Q6. Maximum out of 3 numbers
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter 3 numbers:";
//     cin>>a>>b>>c;
//     if(a>=b && a>=c)    
//         cout<<a<<" is maximum";
//     else if(b>=a && b>=c)
//         cout<<b<<" is maximum";
//     else
//         cout<<c<<" is maximum";
//     return 0;
// }

//Q7. Input any month and year and find no. of days in given month
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m,y;
//     cout<<"Enter month:";
//     cin>>m;
//     if(m==4||m==6||m==9||m==11)
//         cout<<"30 days";
//     else if(m==2)
//     {
//         cout<<"Enter year:";
//         cin>>y;
//         if(y%4==0)
//             cout<<"29 days";
//         else
//             cout<<"28 days";
//     }
//     else
//         cout<<"31 days";
//     return 0;
// }

//Q8. Input marital status,gender and age and check whether the driver can be insured or not
/*#include<iostream>
using namespace std;
int main()
{
    char m,g;
    int a;
    cout<<"Enter marital status:";
    cin>>m;
    cout<<"Enter gender:";
    cin>>g;
    cout<<"Enter age:";
    cin>>a;
    if(m=='m')
        cout<<"can be insured";
    else if(m=='u'||g=='m'||a>25)
        cout<<"can be insured";
    else if(m=='u'||g=='u'||a>35)
        cout<<"can be insured";
    else
        cout<<"cannot be insured";
    return 0;
}*/
