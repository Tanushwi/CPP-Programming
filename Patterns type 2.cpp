// Q1.
//   *
//  ***
// *****
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=3;
//     int sp=n-1;
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=sp;j++)
//             cout<<" ";
//         for(int j=1;j<=2*i-1;j++)
//             cout<<"*";
//         sp=sp-1;
//         cout<<endl;
//     }
//     return 0;
// }

// Q2.
//    1
//   121
//  12321
// 1234321
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sp=3;
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=sp;j++)
//             cout<<" ";
//         for(int j=1;j<=i;j++)
//             cout<<j;
//         for(int j=i-1;j>=1;j--)
//             cout<<j;
//         sp--;
//         cout<<endl;
//     }
//     return 0;
// }

// Q3.
//   1
//  212
// 32123
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sp=2;
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=sp;j++)
//             cout<<" ";
//         for(int j=i;j>=1;j--)
//             cout<<j;
//         for(int j=2;j<=i;j++)
//             cout<<j;
//         sp--;
//         cout<<endl;
//     }
//     return 0;
// }

// Q4.
//    1
//   232
//  34543
// 4567654
//  34543
//   232
//    1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=7;
//     int sp=n-1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=sp;j++)
//             cout<<" ";
//         for(int j=i;j<=2*i-1;j++)
//             cout<<j;
//         for(int j=2*i-2;j>=i;j--)
//             cout<<j;
//         sp--;
//         cout<<endl;
//     }
//     return 0;
// }

// Q5.
// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sp=0;
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//             cout<<j;
//         for(int j=1;j<=sp;j++)
//             cout<<" ";
//         for(int j=i;j>=1;j--)
//             cout<<j;
//         sp=sp+2;
//         cout<<endl;
//     }
//     return 0;
// }

// Q6.
// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sp=0;
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//             cout<<j;
//         for(int j=1;j<=sp;j++)
//             cout<<" ";
//         for(int j=i;j>=1;j--)
//             cout<<j;
//         sp=sp+2;
//         cout<<endl;
//     }
//     int space=6;
//     for(int i=2;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++)
//             cout<<j;
//         for(int j=1;j<=space;j++)
//             cout<<" ";
//         for(int j=i;j>=1;j--)
//             cout<<j;
//         space=space-2;
//         cout<<endl;
//     }
//     return 0;
// }
