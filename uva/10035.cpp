////58 腦子撞到 stack法 
//#include <iostream> 
//#include <stack>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//stack<int> n1;
//stack<int> n2;
//int main()
//{
//	int cnt=0;
//	int carry=0;
//	string s1, s2;
//	int temp=0;
//	while(cin>>s1>>s2)
//	{
//		if(s1=="0" && s2=="0") break;
//		
//		carry=0;
//		cnt=0;
//		
//		for(int i=0; i<s1.length(); i++)
//			n1.push((int)s1[i]-(int)'0');
//		for(int i=0; i<s2.length(); i++)
//			n2.push((int)s2[i]-(int)'0');
//		
//		while(!n1.empty()||!n2.empty())
//		{
//			
//			if(n1.empty())
//			{
//				temp=n2.top();
//				n2.pop();
//				carry=(temp+carry)/10;
//				if(carry>0) cnt++;
//			}
//			else if(n2.empty())
//			{
//				temp=n1.top();
//				n1.pop();
//				carry=(temp+carry)/10;
//				if(carry>0) cnt++;
//			}
//			else
//			{
//				temp=n1.top()+n2.top();
//				n1.pop();
//				n2.pop();
//				carry=(temp+carry)/10;
//				if(carry>0) cnt++;
//			}
//		}
//		
//		if(cnt==0) cout<<"No carry operation."<<endl;
//		else if(cnt==1) cout<<"1 carry operation."<<endl;
//		else cout<<cnt<<" carry operations."<<endl;
//	}
//	return 0;
//}

//取餘法 11
#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	while(cin>>n1>>n2)
	{
		int carry=0;
		int cnt=0;
		if(n1==0&&n2==0) break;
		while(n2>0 || n1>0)
		{
			if(n2<=0)
			{
				if(n1%10+carry>=10)
				{
					cnt++;
					carry=1;
				}
				else carry=0;
				n1/=10;
			}
			else if(n1<=0)
			{
				if(n2%10+carry>=10)
				{
					cnt++;
					carry=1;
				}
				else carry=0;
				n2/=10;
			}
			else
			{
				if((n1%10+n2%10+carry)>=10)
				{
					cnt++;
					carry=1;
				}
				else carry=0;
				n1/=10;
				n2/=10;
			}
		}
		if(cnt==0) cout<<"No carry operation."<<endl;
		else if(cnt==1) cout<<"1 carry operation."<<endl;
		else cout<<cnt<<" carry operations."<<endl;
	}
	return 0;
} 
