//Q. Find the sum of all array elements
//										OBJECT CREATED STATICALLY
//#include<iostream>
//using namespace std;
//class arr
//{
//	int *a,n;
//public:
//	arr(int);
//	~arr();
//	void getarr();
//	void sumarr();
//};
//arr::arr(int x)
//{
//	n=x;
//	a=new int[n];
//	cout<<"\nMemory allocated.......";
//}
//arr::~arr()
//{
//	delete[] a;
//	cout<<"\nMemory released.......";
//}
//void arr::getarr()
//{
//	cout<<"\nEnter "<<n<<" numbers:";
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//}
//void arr::sumarr()
//{
//	int sum=0;
//	for(int i=0;i<n;i++)
//	{
//		sum=sum+a[i];
//	}
//	cout<<"\nSum is:"<<sum;
//}
//int main()
//{
//	{
//		arr aa(5);
//		aa.getarr();
//		aa.sumarr();
//	}
//	{
//		arr bb(3);
//		bb.getarr();
//		bb.sumarr();
//	}
//	return 0;
//}

//										OBJECT CREATED DYNAMICALLY

//#include<iostream>
//using namespace std;
//class arr
//{
//	int *a,n;
//public:
//	arr(int);
//	~arr();
//	void getarr();
//	void sumarr();	
//};
//arr::arr(int x)
//{
//	n=x;
//	a=new int[n];
//	cout<<"\nMemory allocated succesfully....";
//}
//arr::~arr()
//{
//	delete[] a;
//	cout<<"\nMemory deallocated succesfully....";
//}
//void arr::getarr()
//{
//	cout<<"\nEnter "<<n<<" elements:";
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//}
//void arr::sumarr()
//{
//	int sum=0;
//	for(int i=0;i<n;i++)
//	{
//		sum=sum+a[i];
//	}
//	cout<<"Sum is:"<<sum;
//}
//int main()
//{
//	arr *aptr=new arr(5);
//	aptr->getarr();
//	aptr->sumarr();
//	delete aptr;
//	arr *bptr=new arr(3);
//	bptr->getarr();
//	bptr->sumarr();
//	delete bptr;
//	return 0;
//}
