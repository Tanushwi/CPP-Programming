//Q1. Find the sum of array elements and search the element
//#include<iostream>
//using namespace std;
//class array
//{
//    int a[5];
//public:
//    void getarr();
//    void sum();
//    void lsearch();
//};
//void array::getarr()
//{
//    for(int i=0;i<5;i++)
//    {
//        cin>>a[i];
//    }
//}
//void array::sum()
//{
//    int sum=0;
//    for(int i=0;i<5;i++)
//    {
//        sum=sum+a[i];
//    }
//    cout<<"Sum of array elements are:"<<sum<<endl;
//}
//void array::lsearch()
//{
//    int num,ctr=0;
//    cout<<"Enter element to search:";
//    cin>>num;
//    for(int i=0;i<5;i++)
//    {
//        if(a[i]==num)
//        {
//            cout<<"Element exist at index "<<i;
//            ctr=1;
//        }
//    }
//    if(ctr==0)
//        cout<<"Element doesn't exist....";
//}
//int main()
//{
//    array ar;
//    ar.getarr();
//    ar.sum();
//    ar.lsearch();
//    return 0;
//}

//Q2. Reverse an array
// #include<iostream>
// using namespace std;
// class arr
// {
//     int a[5];
// public:
//     void getarr()
//     {
//         cout<<"Enter 5 elements:";
//         for(int i=0;i<5;i++)
//         {
//             cin>>a[i];
//         }
//     }
//     void putarr()
//     {
//         for(int i=0;i<5;i++)
//         {
//             cout<<a[i]<<" ";
//         }
//     }
//     void revarr()
//     {
//         for(int i=0;i<5/2;i++)
//         {
//             int temp=a[i];
//             a[i]=a[4-i];
//             a[4-i]=temp;
//         }
//     }
// };
// int main()
// {
//     arr p;
//     p.getarr();
//     cout<<"Original array is:";
//     p.putarr();
//     p.revarr();
//     cout<<"\nReversed array is:";
//     p.putarr();
//     return 0;
// }

//Q3. Array is pallindrome or not
//#include<iostream>
//using namespace std;
//class arr
//{
//    int a[5];
//public:
//    void getarr();
//    void pall();
//};
//void arr::getarr()
//{
//    for(int i=0;i<5;i++){
//        cin>>a[i];
//    }
//}
//void arr::pall()
//{
//    for(int i=0;i<5/2;i++)
//    {
//    	if(a[i]!=a[4-i])
//    	{
//    		cout<<"NOT PALLINDROME";
//    		return;
//		}
//	}
//	cout<<"PALLINDROME";
//}
//int main()
//{
//    arr p;
//    p.getarr();
//    p.pall();
//    return 0;
//}

//Q4. class:person
//    dm:name,5 city name
//    mf:get(),sort(),display()
//#include<iostream>
//using namespace std;
//class person
//{
//    string name;
//    string city[5];
//public:
//    void getdata()
//    {
//        cout<<"Enter name:";
//        cin>>name;
//        cout<<"Enter 5 cities:";
//        for(int i=0;i<5;i++)
//        {
//            cin>>city[i];
//        }
//    }
//    void sortdata()
//    {
//        for(int i=0;i<5;i++)
//        {
//            for(int j=0;j<4-i;j++)
//            {
//                if(city[j]>city[j+1])
//                {
//                    string temp=city[j];
//                    city[j]=city[j+1];
//                    city[j+1]=temp;
//                }
//            }
//        }
//    }
//    void display()
//    {
//        cout<<"\nName is:"<<name<<endl;
//        cout<<"Cities are:";
//        for(int i=0;i<5;i++)
//        {
//            cout<<city[i]<<" ";
//        }
//    }
//};
//int main()
//{
//    person p;
//    p.getdata();
//    p.display();
//    p.sortdata();
//    p.display();
//    return 0;
//}


