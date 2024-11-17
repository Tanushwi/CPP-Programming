//--> AIM: m=++m
//--> Method-1 Operator member function
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
//	void operator ++()
//	{
//		a=++a;
//		b=++b;
//	}
//	void operator ++(int)
//	{
//		a=a++;
//		b=b++;
//	}
//};
//int main()
//{
//	number n;
//	n.getdata();
//	n.putdata();
//	++n;
//	n.putdata();
//	n++;
//	n.putdata();
//	return 0;
//}

//--> Method-2 Operator friend function 
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
//	friend void operator ++(number &);
//	friend void operator ++(number &,int);
//};
//void operator ++(number &p)
//{
//	++p.a;
//	++p.b;
//}
//void operator ++(number &p,int)
//{
//	p.a++;
//	p.b++;
//}
//int main()
//{
//	number n;
//	n.getdata();
//	n.putdata();
//	++n;
//	n.putdata();
//	n++;
//	n.putdata();
//	return 0;
//}

//--> AIM: m=++n
//-->Method-1 Operator member function
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
//	number operator ++()
//	{
//		++a;
//		++b;		
//		number temp;
//		temp.a=a;
//		temp.b=b;
//		return temp;
//	}
//	number operator ++(int)
//	{
//		number temp;
//		temp.a=a;
//		temp.b=b;
//		a++;
//		b++;
//		return temp;
//	}
//};
//int main()
//{
//	number n;
//	n.getdata();
//	n.putdata();
//	++n;
//	n.putdata();
//	n++;
//	n.putdata();
//	return 0;
//}

//-->Method-2 Operator friend function
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
//	friend number operator ++(number &);
//	friend number operator ++(number &,int);
//};
//number operator ++(number &p)
//{
//	++p.a;
//	++p.b;		
//	number temp;
//	temp.a=p.a;
//	temp.b=p.b;
//	return temp;
//}
//number operator ++(number &p,int)
//{
//	number temp;
//	temp.a=p.a;
//	temp.b=p.b;
//	p.a++;
//	p.b++;
//	return temp;
//}
//int main()
//{
//	number n;
//	n.getdata();
//	n.putdata();
//	++n;
//	n.putdata();
//	n++;
//	n.putdata();
//	return 0;
//}
