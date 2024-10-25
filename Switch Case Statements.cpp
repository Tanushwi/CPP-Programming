// Q1. Make a color menu
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"COLOR MENU"<<endl;
//     cout<<"R for Red"<<endl;
//     cout<<"G for Green"<<endl;
//     cout<<"B for Blue"<<endl;
//     cout<<"Enter choice:";
//     cin>>ch;
//     switch(ch)
//     {
//         case 'r':case 'R':
//             cout<<"Roses are red";
//             break;
//         case 'G':case 'g':
//             cout<<"grasses are green";
//             break;
//         case 'b':case 'B':
//             cout<<"Sky is blue";
//             break;
//         default:
//             cout<<"Invalid choice";
//     }
//     return 0;
// }

//Q2. Make a math calculator
/*#include<iostream>
using namespace std;
int main()
{
    char ch;
    float a,b;
    cout<<"MATH CALCULATOR"<<endl;
    cout<<"+ Add"<<endl;
    cout<<"- Subtract"<<endl;
    cout<<"* Multiply"<<endl;
    cout<<"/ Divide"<<endl;
    cout<<"Enter choice:";
    cin>>ch;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    switch(ch)
    {
        case '+':
            cout<<"Sum is:"<<a+b;
            break;
        case '-':
            cout<<"Difference is:"<<a-b;
            break;
        case '*':
            cout<<"Product is:"<<a*b;
            break;
        case '/':
            cout<<"Quotient is:"<<a/b;
            break;
        default:
            cout<<"Invalid Choice";
    }
    return 0;
}*/

//Q3. Make a math menu
/*#include<iostream>
using namespace std;
int main()
{
    int ch,a,b;
    cout<<"Enter 2 numbers:";
    cin>>a>>b;
    cout<<"MATH MENU"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"Enter choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Sum is:"<<a+b;
            break;
        case 2:
            cout<<"Difference is:"<<a-b;
            break;
        default:
            cout<<"Invalid Choice";
    }
    return 0;
}*/

//Q4. Make area menu
/*#include<iostream>
using namespace std;
int main()
{
    int l,b,r,ch;
    cout<<"AREA MENU"<<endl;
    cout<<"1. Rectangle"<<endl;
    cout<<"2. Circle"<<endl;
    cout<<"Enter choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"Enter length and breadth:";
            cin>>l>>b;
            cout<<"Area of rectangle is:"<<l*b;
            break;
        case 2:
            cout<<"Enter radius:";
            cin>>r;
            cout<<"Area of circle is:"<<3.14*r*r;
            break;
        default:
            cout<<"Invalid Choice";
    }
    return 0;
}*/

//Q5. Input any alphabet and check whether it is vowel or consonant
// #include<iostream>
// using namespace std;
// int main()
// {
//     char ch;
//     cout<<"Enter alphabet:";
//     cin>>ch;
//     switch(ch)
//     {
//         case 'a':case 'e':case 'i':case 'o':case 'u':
//         case 'A':case 'E':case 'I':case 'O':case 'U':
//             cout<<"Vowel";
//             break;
//         default:
//             cout<<"Consonant";
//     }
// }

//Q6. Input any month number and tell season
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m;
//     cout<<"Enter month number:";
//     cin>>m;
//     switch(m)
//     {
//         case 12:case 1:case 2:
//             cout<<"Winter";
//             break;
//         case 3:case 4:case 5:
//             cout<<"Spring";
//             break;
//         case 6:case 7:case 8:
//             cout<<"summer";
//             break;
//         case 9:case 10:case 11:
//             cout<<"autumn";
//             break;
//         default:
//             cout<<"invalid month";
//     }
//     return 0;
// }

//Q7. Input any month and year and find no of days
// #include<iostream>
// using namespace std;
// int main()
// {
//     int m,y;
//     cout<<"Enter month number:";
//     cin>>m;
//     switch(m)
//     {
//         case 4:case 6:case 9:case 11:
//             cout<<"30 days";
//             break;
//         case 2:
//             cout<<"Enter year:";
//             cin>>y;
//             switch(y%4)
//             {
//                 case 0:
//                     cout<<"29 days";
//                     break;
//                 default:
//                     cout<<"28 days";
//                     break;
//             }
//             break;
//         default:
//             cout<<"31 days";
//     }
//     return 0;
// }

//Q8. Make a main menu
// #include<iostream>
// using namespace std;
// int main()
// {
//     int o,ch,l,b,r;
//     cout<<"MAIN MENU"<<endl;
//     cout<<"1. Rectangle"<<endl;
//     cout<<"2. Circle"<<endl;
//     cout<<"Enter option:";
//     cin>>o;
//     switch(o)
//     {
//         case 1:
//             cout<<"Enter length and breadth:";
//             cin>>l>>b;
//             cout<<"RECTANGLE MENU"<<endl;
//             cout<<"1. Area"<<endl;
//             cout<<"2. Perimeter"<<endl;
//             cout<<"Enter choice:";
//             cin>>ch;
//             switch(ch)
//             {
//                 case 1:
//                     cout<<"Area of rectangle is:"<<l*b;
//                     break;
//                 case 2:
//                     cout<<"Perimeter of rectangle is:"<<2*(l+b);
//                     break;
//                 default:
//                     cout<<"Invalid Choice";
//                     break;
//             }
//             break;
//         case 2:
//             cout<<"Enter radius:";
//             cin>>r;
//             cout<<"CIRCLE MENU"<<endl;
//             cout<<"1. Area"<<endl;
//             cout<<"2. Circumference"<<endl;
//             cout<<"Enter choice:";
//             cin>>ch;
//             switch(ch)
//             {
//                 case 1:
//                     cout<<"Area of circle is:"<<3.14*r*r;
//                     break;
//                 case 2:
//                     cout<<"Circumference of circle is:"<<2*3.14*r;
//                     break;
//                 default:
//                     cout<<"Invalid Choice";
//                     break;
//             }
//             break;
//         default:
//             cout<<"Invalid Option";
//     }
//     return 0;
// }
