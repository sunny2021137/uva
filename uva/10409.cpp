#include <iostream>
using namespace std;

int main()
{
	string s;
	int n;
	//上下左右前後 
	int top=1;
	int bottom=6;
	int left=3;
	int right=4;
	int front=5;
	int back=2;
	while(cin>>n)
	{
		if(n==0) break;
		top=1;
		bottom=6;
		left=3;
		right=4;
		front=5;
		back=2;
		for(int i=0; i<n; i++)
		{
			cin>>s;
			if(s=="east")
			{
				int tmp=top;
				top=left;
				left=bottom;
				bottom=right;
				right=tmp;
			}
			else if(s=="west")
			{
				int tmp=top; 
				top=right;
				right=bottom;
				bottom=left;
				left=tmp;
			}
			else if(s=="south")
			{
				int tmp=top; 
				top=back;
				back=bottom;
				bottom=front;
				front=tmp;
			}
			else
			{
				int tmp=top; 
				top=front;
				front=bottom;
				bottom=back;
				back=tmp; 
			}
		}
		cout<<top<<endl;
	}
} 
