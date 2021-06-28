//10 一次過開心:) 
#include <iostream>

using namespace std;

int main()
{
	string s;
	int cnt=0;
	while(getline(cin,s))
	{
		for(int i=0; i<s.length(); i++)
		{
			if(s[i]=='"')
			{
				//奇數 
				if(cnt==0)
				{
					cout<<"``";
					cnt=1;
				}
				else
				{
					cout<<"''";
					cnt=0;
				}
			}
			else
				cout<<s[i];
		}
		cout<<endl;
	}
 } 
