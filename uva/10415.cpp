#include <iostream>
#include <map>
//67
using namespace std;

int main()
{
	int n=0;
	//指法 
	map<char, string> need;
	need['c']="0111001111";
	need['d']="0111001110";
	need['e']="0111001100";
	need['f']="0111001000";
	need['g']="0111000000";
	need['a']="0110000000";
	need['b']="0100000000";
	need['C']="0010000000";
	need['D']="1111001110";
	need['E']="1111001100";
	need['F']="1111001000";
	need['G']="1111000000";
	need['A']="1110000000";
	need['B']="1100000000";
	string s;	 
	//有空輸入用getline()!! 
	while(cin>>n)
	{
		cin.ignore();//清\n
		for(int i=0; i<n; i++)
		{
			getline(cin, s);
			int cnt[10]={0};
			int pressed[10]={0}; //按著的情況 
			for(int i=0; i<s.length(); i++)
			{
				if(i==0)
				{
					for(int j=0; j<10; j++)
						if(need[s[i]][j]=='1')
						{
							cnt[j]++;
							pressed[j]=true;
						}
						else pressed[j]=false;
				}
				else
				{
					//比對上次 
					for(int j=0; j<10; j++)
						if(need[s[i]][j]=='1')
						{
							if(!pressed[j]) cnt[j]++;
							pressed[j]=true;
						}
						else pressed[j]=false;
				}
			}
			for(int i=0; i<10; i++)
			{
				if(i!=0)cout<<" ";
				cout<<cnt[i];
			}
			cout<<endl;	
		}
	}
}
