//Q.    class:student  having dm: rollno,name,marks of 3 subjects
//		student(),student(int,string),student(int,string,float,float,float)
//		void setdata(int,string,float,float,float)
//		void setmarks(float,float,float)
//		void display()

//#include<iostream>
//using namespace std;
//class student
//{
//    int roll;
//    string name;
//    float m,e,h;
//public:
//    student()
//    {
//        roll=1;
//        name="Tanushwi";
//        m=95;
//        e=95;
//        h=95;
//        setdata(roll,name,m,e,h);
//    }
//    student(int r,string n)
//    {
//        roll=r;
//        name=n;
//        m=85;
//        e=85;
//        h=85;
//        setmarks(m,e,h);
//    }
//    student(int r,string n,float ma,float en,float hi)
//    {
//        roll=r;
//        name=n;
//        m=ma;
//        e=en;
//        h=hi;
//    }
//    void setdata(int r=1,string n="Tanushwi",float ma=95,float en=95,float hi=95)
//    {
//        roll=r;
//        name=n;
//        m=ma;
//        e=en;
//        h=hi;
//    }
//    void setmarks(float ma=85,float en=85,float hi=85)
//    {
//        m=ma;
//        e=en;
//        h=hi;
//    }
//    void display()
//    {
//        cout<<"\nRollno:"<<roll<<endl;
//        cout<<"Name:"<<name<<endl;
//        cout<<"Marks 1:"<<m<<endl;
//        cout<<"Marks 2:"<<e<<endl;
//        cout<<"Marks 3:"<<h<<endl;
//    }
//};
//int main()
//{
//    student s1;
//    s1.display();
//    student s2(2,"Yashika");
//    s2.display();
//    student s3(3,"Ramneet",80,80,80);
//    s3.display();
//    return 0;
//}
