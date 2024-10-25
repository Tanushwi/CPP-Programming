// Q1.
// 12345
// 12345
// 12345
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=5;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q2.
// 1
// 12
// 123
// 1234
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<i+1;j++)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q3.
// 1234
// 123
// 12
// 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=4;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q4.
// 54321
// 5432
// 543
// 54
// 5
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q5.
// 5
// 54
// 543
// 5432
// 54321
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=5;j>=i;j--)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q6.
// 1
// 21
// 321
// 4321
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=i;j>=1;j--)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q7.
// 54321
// 4321
// 321
// 21
// 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=i;j>=1;j--)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q8.
// 12345
// 1234
// 123
// 12
// 1
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q9.
// 5
// 45
// 345
// 2345
// 12345
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=i;j<=5;j++)
//             cout<<j;
//         cout<<endl;
//     }
//     return 0;
// }

// Q10.
// *
// ***
// *****
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=2*i-1;j++)
//             cout<<"*";
//         cout<<endl;
//     }
//     return 0;
// }

// Q11.
// *
// ##
// ***
// ####
// *****
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=i;j++){
//             if(i%2==0)
//                 cout<<"#";
//             else
//                 cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q12.
// 1
// 23
// 456
// 78910
// #include<iostream>
// using namespace std;
// int main()
// {
//     int k=1;
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<i+1;j++)
//         {
//             cout<<k;
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q13.
// abcde
// abcd
// abc
// ab
// a
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=101;i>=97;i--)
//     {
//         for(int j=97;j<=i;j++)
//             cout<<char(j);
//         cout<<endl;
//     }
//     return 0;
// }

// Q14.
// a
// ab
// abc
// abcd
// abcde
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=97;i<=101;i++)
//     {
//         for(int j=97;j<=i;j++)
//             cout<<char(j);
//         cout<<endl;
//     }
//     return 0;
// }

// Q15.
// A
// ABC
// ABCDE
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=3;i++)
//     {
//         for(int j=1;j<=2*i-1;j++)
//             cout<<char(j+64);
//         cout<<endl;
//     }
//     return 0;
// }

// Q16.
// 0
// 01
// 011
// 0112
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         int a=0,b=1,c;
//         for(int j=1;j<=i;j++)
//         {
//             cout<<a;
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Q17.
// 1
// 11
// 121
// 1331
// #include<iostream>
// using namespace std;
// int main()
// {
    
//     return 0;
// }

// Q18.
// 1
// 01
// 101
// 0101
// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=1;i<=4;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             if((i%2==0 && j%2!=0)||(j%2==0 && i%2!=0))
//                 cout<<"0";
//             else
//                 cout<<"1";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


