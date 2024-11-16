//Q1. Write a C++ program to find the largest element of a given array   of integers.
//#include<iostream>
//using namespace std;
//int main()
//{
//    int n;
//    cin>>n;
//    int a[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>a[i];
//    }
//    int max=a[0];
//    for(int i=0;i<n;i++)
//    {
//    	if(a[i]>=max)
//        {
//            max=a[i];
//        }
//	}
//    cout<<"Largest element is:"<<max;
//    return 0;
//}

//Q2. Write a C++ program to find the largest three elements in an array.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter n:";
//	cin>>n;
//	int a[n];
//	cout<<"Enter "<<n<<" elements:";
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=0;i<=n/2;i++)
//	{
//		for(int j=0;j<n-1-i;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				int temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
//	cout<<"First largest element is:"<<a[n-1]<<endl;
//	cout<<"Second largest element is:"<<a[n-2]<<endl;
//	cout<<"Third largest element is:"<<a[n-3]<<endl;
//	return 0;
//}

//Q3. Write a C++ program to find the second largest element in an array of integers.
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"Enter n:";
//	cin>>n;
//	int a[n];
//	cout<<"Enter "<<n<<" elements:";
//	for(int i=0;i<n;i++)
//	{
//		cin>>a[i];
//	}
//	int max1=a[0];
//	int max2=a[1];
//	for(int i=0;i<n;i++)
//	{
//		if(a[i]>=max1)
//			max1=a[i];
//		if(a[i]>=max2 && a[i]<max1)
//			max2=a[i];
//	}
//	cout<<"Second largest element is:"<<max2;
//	return 0;
//}

//Q4. Write a C++ program to find the k largest elements in a given array of integers.
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n,k;
// 	cout<<"Enter n:";
// 	cin>>n;
// 	int a[n];
// 	cout<<"Enter "<<n<<" elements:";
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	cout<<"Enter k:";
// 	cin>>k;
// 	for(int i=0;i<=n/2;i++)
// 	{
// 		for(int j=0;j<=n-1-i;j++)
// 		{
// 			if(a[j]>a[j+1])
// 			{
// 				int temp=a[j];
// 				a[j]=a[j+1];
// 				a[j+1]=temp;
// 			}
// 		}
// 	}
// 	cout<<"Largest "<<k<<" elements:";
// 	for(int i=n-k;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// 	return 0;
// }

//Q5. Write a C++ program to find the second smallest elements in a given array of integers.
// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n,k;
// 	cout<<"Enter n:";
// 	cin>>n;
// 	int a[n];
// 	cout<<"Enter "<<n<<" elements:";
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>a[i];
// 	}
// 	int min1=123;
// 	int min2=234;
// 	for(int i=0;i<n;i++)
// 	{
// 	    if(a[i]<=min1)
// 	        min1=a[i];
// 	    if(a[i]<=min2 && a[i]>min1)
// 	        min2=a[i];
// 	}
// 	cout<<"Second largest element is:"<<min2;
// 	return 0;
// }

//Q9. Column with maximum sum
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m,n;
//	cin>>m>>n;
//	int a[m][n];
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	int max=-12,pos=0;
//	for(int i=0;i<m;i++)
//	{
//		int sum=0;
//		for(int j=0;j<n;j++)
//		{
//			sum=sum+a[j][i];
//			if(sum>=max)
//			{
//				max=sum;
//				pos=j;
//			}
//		}
//	}
//	cout<<pos<<" "<<max;
//	return 0;
//}

//Q10. Arrays-Wave Print Row Wise
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m,n;
//	cin>>m>>n;
//	int a[m][n];
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	int left=0,right=n-1;
//	int count=0;
//	for(int i=0;i<m;i++)
//	{
//		if(i%2==0)
//		{
//			for(int j=left;j<=right;j++)
//			{
//				if(count>0)
//				{
//					cout<<", ";
//				}
//				cout<<a[i][j];
//				count++;
//			}
//		}
//		else
//		{
//			for(int j=right;j>=left;j--)
//			{
//				if(count>0)
//				{
//					cout<<", ";
//				}
//				cout<<a[i][j];
//				count++;
//			}
//		}
//	}
//	cout<<", END";
//	return 0;
//}

//Q11. Arrays-Wave Print Column Wise
//#include<iostream>
//using namespace std;
//int main()
//{
//	int m,n;
//	cin>>m>>n;
//	int a[m][n];
//	for(int i=0;i<m;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cin>>a[i][j];
//		}
//	}
//	int top=0,bottom=m-1;
//	int count=0;
//	for(int j=0;j<n;j++)
//	{
//		if(j%2==0)
//		{
//			for(int i=top;i<=bottom;i++)
//			{
//				if(count>0)
//				{
//					cout<<", ";
//				}
//				cout<<a[i][j];
//				count++;
//			}
//		}
//		else
//		{
//			for(int i=bottom;i>=top;i--)
//			{
//				if(count>0)
//				{
//					cout<<", ";
//				}
//				cout<<a[i][j];
//				count++;
//			}
//		}
//	}
//	cout<<", END";
//	return 0;
//}

//Q12. Arrays-Spiral Print Anticlockwise
//#include<iostream>
//using namespace std;
//int main()
//{
//    int m,n;
//    cin>>m>>n;
//    int a[m][n];
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cin>>a[i][j];
//        }
//    }
//    int left=0,right=n-1,top=0,bottom=n-1,count=0;
//    for(int i=0;i<m;i++)
//    {
//        for(int j=right;j>=left;j--)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[top][j];
//            count++;
//        }
//        top++;
//        for(int j=top;j<=bottom;j++)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[j][left];
//            count++;
//        }
//        left++;
//        for(int j=left;j<=right;j++)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[bottom][j];
//            count++;
//        }
//        bottom--;
//        for(int j=bottom;j>=top;j--)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[j][right];
//        }
//        right--;
//    }
//    cout<<", END";
//    return 0;
//}

//Q13. Arrays-Spiral Print Clockwise
//#include<iostream>
//using namespace std;
//int main()
//{
//    int m,n;
//    cin>>m>>n;
//    int a[m][n];
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cin>>a[i][j];
//        }
//    }
//    int total=m*n,left=0,right=n-1,top=0,bottom=n-1,count=0;
//    while(top<=bottom && left<=right)
//    {
//        for(int j=left;j<=right && count<total;j++)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[top][j];
//            count++;
//        }
//        top++;
//        for(int j=top;j<=bottom && count<total;j++)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[j][right];
//            count++;
//        }
//        right--;
//        for(int j=right;j>=left && count<total;j--)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[bottom][j];
//            count++;
//        }
//        bottom--;
//        for(int j=bottom;j>=top && count<total;j--)
//        {
//        	if(count>0)
//        	{
//        		cout<<", ";
//			}
//            cout<<a[j][left];
//        }
//        left++;
//    }
//    cout<<", END";
//    return 0;
//}
