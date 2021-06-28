//.31

#include <iostream>
using namespace std;


void part(int, string&, int ,bool);

int main()
{
	string s;
	int cnt=0;
	int l, index=0;
	bool last=false;
	while(cin>>s)
	{
		last=false;
		index=0;
		l=s.length();
		cnt++;
		cout<<cnt<<". "; 
		while(index<s.length())
		{
			if(l%9!=0)
			{
				if(index+(l%9)==s.length()) last=true;
				part(l%9, s, index, last);
				l-=l%9-2;
				index+=l%9-2;
			}
			else
			{
				if(index+9==s.length()) last=true;
				part(9, s, index, last);
				l-=9;
				index+=7;
			}
			if(last==true) break;
		}
		cout<<endl;
	}
}
void part(int num, string& s, int i, bool last)
{
	if(num>=9) cout<<s[i++];
	if(num>=8) cout<<s[i++]<<" kuti ";
	if(num>=7) cout<<s[i++];
	if(num>=6) cout<<s[i++]<<" lakh ";
	if(num>=5) cout<<s[i++];
	if(num>=4) cout<<s[i++]<<" hajar ";
	if(num>=3) cout<<s[i++]<<" shata ";
	
	if(num>=2&&last) cout<<s[i++];
	if(num>=1&&last) cout<<s[i++];
	if(last==false)	cout<<" ";
	return;
}
	
