//Q1. Total books in shop
// #include<iostream>
// using namespace std;
// class book
// {
//     int bcode;
//     char bname[20];
//     float rate;
//     int qoh;
// public:
//     void getdata()
//     {
//         cout<<"Enter bcode,bname,rate and qoh:";
//         cin>>bcode>>bname>>rate>>qoh;
//     }
//     void putdata()
//     {
//         cout<<"\nBcode:"<<bcode<<endl;
//         cout<<"Bname:"<<bname<<endl;
//         cout<<"Rate:"<<rate<<endl;
//         cout<<"QOH:"<<qoh<<endl;
//     }
//     int giveqoh()
//     {
//         return qoh;
//     }
// };
// int main()
// {
//     book b[5];
//     cout<<"Enter 5 books details:";
//     cout<<endl;
//     for(int i=0;i<5;i++)
//     {
//         b[i].getdata();
//     }
//     for(int i=0;i<5;i++)
//     {
//         b[i].putdata();
//     }
//     int sum=0;
//     for(int i=0;i<5;i++)
//     {
//         sum=sum+b[i].giveqoh();
//     }
//     cout<<"Total books in shop are:"<<sum<<endl;
//     return 0;
// }

//Q2. Enter 5 student details:rollno,name and height.Calculate the average height
// #include<iostream>
// using namespace std;
// class student
// {
//     int roll;
//     string name;
//     int height;
// public:
//     void getdata()
//     {
//         cout<<"Enter roll no,name and height:";
//         cin>>roll>>name>>height;
//     }
//     void putdata()
//     {
//         cout<<"\nRoll no:"<<roll<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Height:"<<height<<endl;
//     }
//     int giveheight()
//     {
//         return height;
//     }
// };
// int main()
// {
//     student s[5];
//     int sum=0;
//     for(int i=0;i<5;i++)
//     {
//         s[i].getdata();
//         sum=sum+s[i].giveheight();
//     }
//     for(int i=0;i<5;i++)
//     {
//         s[i].putdata();
//     }
//     float avg=(float)sum/5.0;
//     cout<<"Average height is:"<<avg;
//     return 0;
// }

//Q3. Enter 5 student details:rollno,name and height.Search record on the basis of rollno
// #include<iostream>
// using namespace std;
// class student
// {
//     int roll;
//     string name;
//     int height;
// public:
//     void getdata()
//     {
//         cout<<"Enter roll no,name and height:";
//         cin>>roll>>name>>height;
//     }
//     void putdata()
//     {
//         cout<<"\nRoll no:"<<roll<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Height:"<<height<<endl;
//     }
//     int giveroll()
//     {
//         return roll;
//     }
// };
// int main()
// {
//     student s[5];
//     for(int i=0;i<5;i++)
//     {
//         s[i].getdata();
//     }
//     for(int i=0;i<5;i++)
//     {
//         s[i].putdata();
//     }
//     int ctr=0,num;
//     cout<<"Enter roll no to search:";
//     cin>>num;
//     for(int i=0;i<5;i++)
//     {
//         if(num==s[i].giveroll())
//         {
//             ctr=1;
//             cout<<"Student found-"<<endl;
//             s[i].putdata();
//             ctr=1;
//             break;
//         }
//     }
//     if(ctr==0)
//         cout<<"Record doesn't exist..";
//     return 0;
// }

//Q4. Enter 5 student details:rollno,name and height.Search record on the basis of name
// #include<iostream>
// using namespace std;
// class student
// {
//     int roll;
//     string name;
//     int height;
// public:
//     void getdata()
//     {
//         cout<<"Enter roll no,name and height:";
//         cin>>roll>>name>>height;
//     }
//     void putdata()
//     {
//         cout<<"\nRoll no:"<<roll<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Height:"<<height<<endl;
//     }
//     string givename()
//     {
//         return name;
//     }
// };
// int main()
// {
//     student s[5];
//     for(int i=0;i<5;i++)
//     {
//         s[i].getdata();
//     }
//     for(int i=0;i<5;i++)
//     {
//         s[i].putdata();
//     }
//     int ctr=0;
//     string num;
//     cout<<"Enter name to search:";
//     cin>>num;
//     for(int i=0;i<5;i++)
//     {
//         if(num==s[i].givename())
//         {
//             ctr=1;
//             cout<<"Student found-"<<endl;
//             s[i].putdata();
//             ctr=1;
//             break;
//         }
//     }
//     if(ctr==0)
//         cout<<"Record doesn't exist..";
//     return 0;
// }

//Q5. Enter 5 student details:rollno,name and height.Do sorting on the basis of increasing height
// #include<iostream>
// using namespace std;
// class student
// {
//     int roll;
//     string name;
//     int height;
// public:
//     void getdata()
//     {
//         cout<<"Enter roll no,name and height:";
//         cin>>roll>>name>>height;
//     }
//     void putdata()
//     {
//         cout<<"\nRoll no:"<<roll<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Height:"<<height<<endl;
//     }
//     int giveheight()
//     {
//         return height;
//     }
// };
// int main()
// {
//     student s[5];
//     for(int i=0;i<5;i++)
//     {
//         s[i].getdata();
//     }
//     for(int i=0;i<5;i++)
//     {
//         s[i].putdata();
//     }
//     cout<<"****After sorting****"<<endl;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<4-i;j++)
//         {
//             student temp;
//             if(s[j].giveheight()>s[j+1].giveheight())
//             {
//                 temp=s[j];
//                 s[j]=s[j+1];
//                 s[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<5;i++)
//     {
//         s[i].putdata();
//     }
//     return 0;
// }

//Q6. Enter 5 student details:rollno,name and marks[3].Give result   of each student  if student marks>=150 then
//	  student is pass otherwise fail
//  #include<iostream>
//  using namespace std;
//  class student
// {
//     int roll;
//     string name;
//     int mark[3];
// public:
//     void getdata()
//     {
//         cout<<"Enter roll no and name:";
//         cin>>roll>>name;
//         cout<<"Enter 3 subjects marks:";
//         for(int i=0;i<3;i++)
//         {
//             cin>>mark[i];
//         }
//     }
//     void putdata()
//     {
//         cout<<"\nRoll no:"<<roll<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Marks:"<<endl;
//         for(int i=0;i<3;i++)
//         {
//             cout<<mark[i]<<" ";
//         }
//     }
//     int marks()
//     {
//         int sum=0;
//         for(int i=0;i<3;i++)
//         {
//             sum=sum+mark[i];
//         }
//         cout<<"Sum is:"<<sum;
//         return sum;
//     }
// };
//  int main()
//  {
//      student s[5];
//     for(int i=0;i<5;i++)
//     {
//         s[i].getdata();
//     }
//     for(int i=0;i<5;i++)
//     {
//         s[i].putdata();
//     }
//     for(int i=0;i<5;i++)
//     {
//         int sum=s[i].marks();
//         cout<<endl;
//         if(sum>=150)
//             cout<<"Student"<<i+1<<" "<<"Result:Pass"<<endl;
//         else
//             cout<<"Student"<<i+1<<" "<<"Result:Fail"<<endl;
//     }
//     return 0;
//  }
