//Q1. Calculate area of rectangle
//#include<iostream>
//using namespace std;
//class rectangle
//{
//	static int l,b;
//public:
//	void setdata(int x,int y)
//	{
//		l=x;
//		b=y;
//	}
//	void area()
//	{
//		cout<<"Area of rectangle is:"<<l*b;
//	}
//};
//int rectangle::l=0;
//int rectangle::b=0;
//int main()
//{
//	rectangle r1;
//	r1.setdata(2,4);
//	r1.area();
//	return 0;
//}

//Q2. class:math
//	  static dm:a,b,c
//	  static mf:void getdata(),void add(),void sub()
//#include<iostream>
//using namespace std;
//class math
//{
//	static int a,b,c;
//public:
//	static void getdata()
//	{
//		cout<<"Enter value of a and b:";
//		cin>>a>>b;
//	}
//	static void add()
//	{
//		c=a+b;
//		cout<<"\nSum is:"<<c<<endl;
//	}
//	static void sub()
//	{
//		c=a-b;
//		cout<<"\nDifference is:"<<a-b;
//	}
//};
//int math::a=0;
//int math::b=0;
//int math::c=0;
//int main()
//{
//	math m;
//	m.getdata();
//	m.add();
//	m.sub();
//	return 0;
//}

//Q3. class:math
//	  static dm:a,b,c
//	  mf:void getdata(),int add(),int sub()
//#include<iostream>
//using namespace std;
//class math
//{
//	static int a,b,c;
//public:
//	void getdata()
//	{
//		cout<<"Enter value of a and b:";
//		cin>>a>>b;
//	}
//	int add()
//	{
//		c=a+b;
//		return c;
//	}
//	int sub()
//	{
//		c=a-b;
//		return c;
//	}
//};
//int math::a=0;
//int math::b=0;
//int math::c=0;
//int main()
//{
//	math m;
//	m.getdata();
//	int a=m.add();
//	cout<<"Sum is:"<<a<<endl;
//	int b=m.sub();
//	cout<<"Difference is:"<<b;
//	return 0;
//}

//Q4. bank balance:static
//	  accno,name,customer balance:individual
//	  mf:void getdata(),void display(),void withdrawal,void deposit() for 2 customers
//Q1. Calculate area of rectangle
//#include<iostream>
//using namespace std;
//class rectangle
//{
//	static int l,b;
//public:
//	void setdata(int x,int y)
//	{
//		l=x;
//		b=y;
//	}
//	void area()
//	{
//		cout<<"Area of rectangle is:"<<l*b;
//	}
//};
//int rectangle::l=0;
//int rectangle::b=0;
//int main()
//{
//	rectangle r1;
//	r1.setdata(2,4);
//	r1.area();
//	return 0;
//}

//Q2. class:math
//	  static dm:a,b,c
//	  static mf:void getdata(),void add(),void sub()
//#include<iostream>
//using namespace std;
//class math
//{
//	static int a,b,c;
//public:
//	static void getdata()
//	{
//		cout<<"Enter value of a and b:";
//		cin>>a>>b;
//	}
//	static void add()
//	{
//		c=a+b;
//		cout<<"\nSum is:"<<c<<endl;
//	}
//	static void sub()
//	{
//		c=a-b;
//		cout<<"\nDifference is:"<<a-b;
//	}
//};
//int math::a=0;
//int math::b=0;
//int math::c=0;
//int main()
//{
//	math m;
//	m.getdata();
//	m.add();
//	m.sub();
//	return 0;
//}

//Q3. class:math
//	  static dm:a,b,c
//	  mf:void getdata(),int add(),int sub()
//#include<iostream>
//using namespace std;
//class math
//{
//	static int a,b,c;
//public:
//	void getdata()
//	{
//		cout<<"Enter value of a and b:";
//		cin>>a>>b;
//	}
//	int add()
//	{
//		c=a+b;
//		return c;
//	}
//	int sub()
//	{
//		c=a-b;
//		return c;
//	}
//};
//int math::a=0;
//int math::b=0;
//int math::c=0;
//int main()
//{
//	math m;
//	m.getdata();
//	int a=m.add();
//	cout<<"Sum is:"<<a<<endl;
//	int b=m.sub();
//	cout<<"Difference is:"<<b;
//	return 0;
//}

//Q4. bank balance:static
//	  accno,name,customer balance:individual
//	  mf:void getdata(),void display(),void withdrawal,void deposit() for 2 customers
//#include<iostream>
//using namespace std;
//class bank
//{
//	static int bbal;
//	int acc;
//	string name;
//	int bal;
//public:
//	void getdata()
//	{
//		cout<<"Enter account no,name and balance:";
//		cin>>acc>>name>>bal;
//	}
//	void display()
//	{
//		cout<<"\nAccount No:"<<acc<<endl;
//		cout<<"Name:"<<name<<endl;
//		cout<<"Balance:"<<bal<<endl;
//		cout<<"Bank Balance:"<<bbal<<endl;
//	}
//	void deposit()
//	{
//		int amt;
//		cout<<"Enter amount to deposit:";
//		cin>>amt;
//		bbal=bbal+amt;
//		bal=bal+amt;
//	}
//	void withdrawal()
//	{
//		int amt;
//		cout<<"Enter amount for withdrawal:";
//		cin>>amt;
//		if(amt>bal)
//		{
//			cout<<"Amount can't be withdrawal....";
//		}
//		else
//		{
//			bbal=bbal-amt;
//			bal=bal-amt;
//		}
//	}
//	static void getbal()
//	{
//	    cout<<"Enter bank balance:";
//		cin>>bbal;
//	}
//};
//int bank::bbal=0;
//int main()
//{
//	bank b[2];
//	int choice[2];
//	for(int i=0;i<2;i++)
//	{
//		b[i].getdata();
//	}
//	bank::getbal();
//	for(int i=0;i<2;i++)
//	{
//		b[i].display();
//	}
//	for(int i=0;i<2;i++)
//	{
//		cout<<"\n1. Deposit"<<endl;
//		cout<<"2. Withdrawal"<<endl;
//		cout<<"Enter choice:";
//		cin>>choice[i];
//		switch(choice[i])
//		{
//			case 1:
//				b[i].deposit();
//				break;
//			case 2:
//				b[i].withdrawal();
//				break;
//			default:
//				cout<<"Invalid Choice";
//		}
//	}
//	for(int i=0;i<2;i++)
//	{
//		b[i].display();
//	}
//	return 0;
//}

//Q5. class:employ
//	  individual:empcode,empname,empsal
//    static:comp bon
//	  Find total salary,static function change bon% then find total

//#include<iostream>
//using namespace std;
//class employ
//{
//    int empcode;
//    string empname;
//    int empsal;
//    static int compbon;
//public:
//    void getdata()
//    {
//        cout<<"Enter employee code,name and salary:";
//        cin>>empcode>>empname>>empsal;
//    }
//    void putdata()
//    {
//        cout<<"\nEmployee Code:"<<empcode<<endl;
//        cout<<"Employee Name:"<<empname<<endl;
//        cout<<"Employee Salary:"<<empsal<<endl;
//        cout<<"Company Bonus:"<<compbon;
//    }
//    static void getcompbon()
//    {
//        cout<<"Enter bonus of company:";
//        cin>>compbon;
//    }
//    void bonus(int b)
//    {
//        int bon=b*empsal/100;
//        empsal=empsal+bon;
//        compbon=compbon-bon;
//    }
//};
//int employ::compbon=0;
//int main()
//{
//    employ e[2];
//    for(int i=0;i<2;i++)
//    {
//        e[i].getdata();
//    }
//    employ::getcompbon();
//    for(int i=0;i<2;i++)
//    {
//        e[i].putdata();
//    }
//    int bon[2];
//    for(int i=0;i<2;i++)
//    {
//        cout<<"\nEnter bonus to give to employee"<<i+1<<":";
//        cin>>bon[i];
//        e[i].bonus(bon[i]);
//    }
//    for(int i=0;i<2;i++)
//    {
//        e[i].putdata();
//    }
//    return 0;
//}
