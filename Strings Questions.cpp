//Q1. String Compression
//#include<iostream>
//using namespace std;
//int main()
//{
//    string a;
//    int l=0;
//    cin>>a;
//    l=a.length();
//    char ch;
//    for(int i=0;i<l;i++)
//    {
//    	int count=1;
//    	char c=a[i];
//        while(i<l-1 && a[i]==a[i+1])
//        {
//            count=count+1;
//            i++;
//        }
//        cout<<c<<count;
//    }
//    return 0;
//}

//Q2. String Toggle Case
//#include<iostream>
//using namespace std;
//int main()
//{
//	string a;
//	cin>>a;
//	int l=a.length();
//	for(int i=0;i<l;i++)
//	{
//		if(a[i]>=65 && a[i]<=90)
//			a[i]=a[i]+32;
//		else if(a[i]>=97 && a[i]<=122)
//			a[i]=a[i]-32;
//		else
//			a[i]=a[i];
//	}
//	cout<<a;
//	return 0;
//}

//Q3. Strings-Odd Even Character
//#include<iostream>
//using namespace std;
//int main()
//{
//	string a;
//	cin>>a;
//	int l=a.length();
//	for(int i=0;i<l;i++)
//	{
//		if(i%2==0)
//			a[i]=a[i]+1;
//		else
//			a[i]=a[i]-1;
//	}
//	cout<<a;
//}

//Q4. Strings-String Compression
//#include<iostream>
//using namespace std;
//int main()
//{
//	string a;
//	cin>>a;
//	int l=a.length();
//	for(int i=0;i<l;i++)
//	{
//		int count=1;
//		char c=a[i];
//		while(i<l-1 && a[i]==a[i+1])
//		{
//			count++;
//			i++;
//		}
//		if(count>1)
//			cout<<c<<count;
//		else
//			cout<<c;
//	}
//	return 0;
//}

//Q5. Strings-Difference in Ascii Codes
//#include<iostream>
//using namespace std;
//int main()
//{
//	string a;
//	cin>>a;
//	int l=a.length();
//	for(int i=0;i<l;i++)
//	{
//		char c=a[i];
//		int diff=a[i+1]-a[i];
//		if(i==l-1)
//			cout<<c;
//		else
//			cout<<c<<diff;
//	}
//	return 0;
//}

//Q6. Strings-isPalindrome
//#include<iostream>
//using namespace std;
//int main()
//{
//	string a,b;
//	cin>>a;
//	b=a;
//	int l=a.length();
//	int j=l-1;
//	for(int i=0;i<=l/2;i++)
//	{
//		char temp=a[i];
//		a[i]=a[j-i];
//		a[j-i]=temp;
//	}
//	if(a==b)
//		cout<<"true";
//	else
//		cout<<"false";
//	return 0;
//}

//Q7. Maximum frequency character
//#include<iostream>
//using namespace std;
//int main()
//{
//	string a;
//	cin>>a;
//	int max=0;
//	int l=a.length();
//	char s;
//	for(int i=0;i<l;i++)
//	{
//		int count=1;
//		while(i<l && a[i]==a[i+1])
//		{
//			count++;
//			i++;
//		}
//		if(count>=max)
//		{
//			max=count;
//			s=a[i];
//		}
//	}
//	cout<<s<<endl;
//	return 0;
//}

//Q8. Check two strings are anagram or not
//#include<iostream>
//using namespace std;
//bool isanagram(string a,string b)
//{
//	if(a.length()!=b.length())
//	{
//		return false;
//	}
//	int freq1[26]={0},freq2[26]={0};
//	for(int i=0;i<a.length();i++)
//	{
//		freq1[a[i]-'a']++;
//		freq2[b[i]-'a']++;
//	}
//	for(int i=0;i<a.length();i++)
//	{
//		if(freq1[i]!=freq2[i])
//		{
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	string s1,s2;
//	cin>>s1;
//	cin>>s2;
//	if(isanagram(s1,s2))
//		cout<<"true";
//	else
//		cout<<"false";
//	return 0;
//}
