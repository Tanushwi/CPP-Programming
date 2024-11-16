//Q1. Maximum out of 3 numbers using maximum out of 2 numbers
//#include<iostream>
//using namespace std;
//class number
//{
//	int a,b,c;
//public:
//	void getdata()
//	{
//		cout<<"Enter a,b and c:";
//		cin>>a>>b>>c;
//	}
//	int max2(int a,int b)
//	{
//		if(a>=b)
//			return a;
//		else
//			return b;
//	}
//	friend void max3(number t);
//};
//void max3(number t)
//{
//	int s=t.max2(t.a,t.b);
//	if(s>=t.c)
//		cout<<s<<" is largest";
//	else
//		cout<<t.c<<" is largest";
//}
//int main()
//{
//	number t;
//	t.getdata();
//	max3(t);
//	return 0;
//}

//Q2. class:alpha class:beta  make friend function(swap)
//#include<iostream>
//using namespace std;
//class beta;
//class alpha
//{
//	int a;
//public:
//	void geta()
//	{
//		cout<<"Enter value of a:";
//		cin>>a;
//	}
//	void puta()
//	{
//		cout<<"\nValue of a:"<<a;
//	}
//	friend void swap(alpha &,beta &);
//};
//class beta
//{
//	int b;
//public:
//	void getb()
//	{
//		cout<<"Enter value of b:";
//		cin>>b;
//	}
//	void putb()
//	{
//		cout<<"\nValue of b:"<<b;
//	}
//	friend void swap(alpha &,beta &);
//};
//void swap(alpha &aa,beta &bb)
//{
//	int temp;
//	temp=aa.a;
//	aa.a=bb.b;
//	bb.b=temp;
//}
//int main()
//{
//	alpha A;
//	beta B;
//	A.geta();
//	B.getb();
//	cout<<"Before Swap:";
//	A.puta();
//	B.putb();
//	swap(A,B);
//	cout<<"\nAfter Swap:";
//	A.puta();
//	B.putb();
//	return 0;
//}

//Q3. out of alpha,beta class find the maximum number
//#include<iostream>
//using namespace std;
//class beta;
//class alpha
//{
//	int a;	
//public:
//	void geta()
//	{
//		cout<<"Enter value of a:";
//		cin>>a;
//	}
//	friend int max(alpha,beta);
//};
//class beta
//{
//	int b;	
//public:
//	void getb()
//	{
//		cout<<"Enter value of b:";
//		cin>>b;
//	}
//	friend int max(alpha,beta);
//};
//int max(alpha aa,beta bb)
//{
//	if(aa.a>=bb.b)
//		return aa.a;
//	else
//		return bb.b;
//}
//int main()
//{
//	alpha A;
//	beta B;
//	A.geta();
//	B.getb();
//	cout<<"Largest number is:"<<max(A,B);
//	return 0;
//}
