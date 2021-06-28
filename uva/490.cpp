//50
//可以偷懶不用陣列存，直接輸出哈 
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[100];
	int index=0;
	int longest=0;
	while(getline(cin,s[index]))
	{
		if(s[index].length()>longest) longest=s[index].length();	
		index++;
		if(index>=100) break;	//記得要加這行，不然會runtime error!!! 
	}
	
	for(int i=0; i<longest; i++)
	{
		for(int j=index-1; j>=0; j--)
		{
			if(s[j].length()<=i)
			{
				cout<<" ";	//字串長度不足，輸出空格 
			}
			else
			{
				cout<<s[j][i];
			}
		}
		cout<<endl;
	}
}
