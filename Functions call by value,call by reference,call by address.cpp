//                      SWAPPING OF NUMBERS
// 1. call by value
// #include<iostream>
// using namespace std;
// void swap(int x,int y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<"Numbers after swap:"<<x<<" and "<<y;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<"Numbers before swap:"<<a<<" and "<<b<<endl;
//     swap(a,b);
//     return 0;
// }

// 2. call by address
// #include<iostream>
// using namespace std;
// void swap(int *x,int *y)
// {
//     int temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<"Numbers before swap:"<<a<<" and "<<b<<endl;
//     swap(&a,&b);
//     cout<<"Numbers after swap:"<<a<<" and "<<b;
//     return 0;
// }

// 3. Call by reference
// #include<iostream>
// using namespace std;
// void swap(int &x,int &y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<"Numbers before swap:"<<a<<" and "<<b<<endl;
//     swap(a,b);
//     cout<<"Numbers after swap:"<<a<<" and "<<b;
//     return 0;
// }
