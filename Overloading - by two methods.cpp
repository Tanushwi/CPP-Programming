//--> Aim: m=-m
//--> METHOD-1 using operator member function
//#include<iostream>
//using namespace std;
//class number
//{
//	int a,b;
//public:
//	void getdata()
//	{
//		cout<<"Enter 2 numbers:";
//		cin>>a>>b;
//	}
//	void putdata()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	void operator -()
//	{
//		a=-a;
//		b=-b;
//	}
//};
//int main()
//{
//	number n;
//	n.getdata();
//	n.putdata();
//	-n;
//	n.putdata();
//	return 0;
//}

//--> METHOD-2 using operator friend function
//#include<iostream>
//using namespace std;
//class number
//{
//	int a,b;
//public:
//	void getdata()
//	{
//		cout<<"Enter 2 numbers:";
//		cin>>a>>b;
//	}
//	void putdata()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	friend void operator -(number &);
//};
//void operator -(number &p)
//{
//	p.a=-p.a;
//	p.b=-p.b;
//}
//int main()
//{
//	number n;
//	n.getdata();
//	n.putdata();
//	-n;
//	n.putdata();
//	return 0;
//}

// --> AIM: m=-n
// --> METHOD-1 Operator member function
//#include<iostream>
//using namespace std;
//class number
//{
//	int a,b;
//public:
//	void getdata()
//	{
//		cout<<"Enter value of a and b:";
//		cin>>a>>b;
//	}
//	void putdata()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	number operator -()
//	{
//		number temp;
//		temp.a=-a;
//		temp.b=-b;
//		return temp;
//	}
//};
//int main()
//{
//	number n,m;
//	n.getdata();
//	n.putdata();
//	m=-n;
//	m.putdata();
//	return 0;
//}

// --> Method-2 Operator friend function
//#include<iostream>
//using namespace std;
//class number
//{
//	int a,b;
//public:
//	void getdata()
//	{
//		cout<<"Enter 2 numbers:";
//		cin>>a>>b;
//	}
//	void putdata()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	friend number operator -(number);
//};
//number operator -(number p)
//{
//	number temp;
//	temp.a=-p.a;
//	temp.b=-p.b;
//	return temp;
//}
//int main()
//{
//	number n,m;
//	n.getdata();
//	n.putdata();
//	m=-n;
//	m.putdata();
//	return 0;
//}
