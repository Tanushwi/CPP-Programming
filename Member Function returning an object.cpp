//--> Target: c=a+b
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
//	void display()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b<<endl;
//	}
//	number sum(number p)
//	{
//		number temp;
//		temp.a=a+p.a;
//		temp.b=b+p.b;
//		return temp;
//	}
//};
//int main()
//{
//	number a,b,c;
//	a.getdata();
//	b.getdata();
//	c=a.sum(b);
//	c.display();
//	c=b.sum(a);
//	c.display();
//	return 0;
//}

//Q. Add the time dm:hrs mins  mf:getdata(),display(),sum()
// --> METHOD-1  t1=t1+t2
//#include<iostream>
//using namespace std;
//class number
//{
//	int t1,t2;
//public:
//	void getdata()
//	{
//		cout<<"Enter hours and minutes:";
//		cin>>t1>>t2;
//	}
//	void display()
//	{
//		cout<<"\nValue of hrs:"<<t1<<endl;
//		cout<<"Value of minutes:"<<t2;
//	}
//	void sum(number p)
//	{
//		t1=t1+p.t1;
//		t2=t2+p.t2;
//		if(t2>=60)
//		{
//			t1+=t2/60;
//			t2%=60;
//		}
//	}
//};
//int main()
//{
//	number a,b;
//	a.getdata();
//	b.getdata();
//	a.sum(b);
//	a.display();
//	return 0;
//} 

// --> METHOD-3  t3=t1+t2
//#include<iostream>
//using namespace std;
//class number
//{
//	int a,b,c;
//public:
//	void getdata()
//	{
//		cout<<"Enter value of a and b:";
//		cin>>a>>b;	
//	}	
//	void display()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	number sum(number p)
//	{
//		number temp;
//		temp.a=a+p.a;
//		temp.b=b+p.b;
//		if(temp.b>=60)
//		{
//			temp.a=temp.a+temp.b/60;
//			temp.b=temp.b%60;
//		}
//		return temp;
//	}
//};
//int main()
//{
//	number a,b,c;
//	a.getdata();
//	b.getdata();
//	c=a.sum(b);
//	c.display();
//	return 0;
//}


//--->  CHECK RESULTS
//1.  -->AIM: t3=t3.sum(t1,t2)
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
//	void display()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	number sum(number p,number q)
//	{
//		number temp;
//		temp.a=p.a+q.a;
//		temp.b=p.b+q.b;
//		return temp;
//	}
//};
//int main()
//{
//	number t1,t2,t3;
//	t1.getdata();
//	t2.getdata();
//	t3=t3.sum(t1,t2);
//	t3.display();
//	return 0;
//}

//2.  -->AIM: t3=t1.sum(t1,t2)
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
//	void display()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	number sum(number p,number q)
//	{
//		number temp;
//		temp.a=p.a+q.a;
//		temp.b=p.b+q.b;
//		return temp;
//	}
//};
//int main()
//{
//	number t1,t2,t3;
//	t1.getdata();
//	t2.getdata();
//	t3=t1.sum(t1,t2);
//	t1.display();
//	t2.display();
//	t3.display();
//	return 0;
//}

//3.  -->AIM: t3=t2.sum(t1,t2)
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
//	void display()
//	{
//		cout<<"\nValue of a:"<<a<<endl;
//		cout<<"Value of b:"<<b;
//	}
//	number sum(number p,number q)
//	{
//		number temp;
//		temp.a=p.a+q.a;
//		temp.b=p.b+q.b;
//		return temp;
//	}
//};
//int main()
//{
//	number t1,t2,t3;
//	t1.getdata();
//	t2.getdata();
//	t3=t2.sum(t1,t2);
//	t1.display();
//	t2.display();
//	t3.display();
//	return 0;
//}

