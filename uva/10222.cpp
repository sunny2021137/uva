//52 
//使用陣列存鍵盤圖，find()去找
//注意: 此題須decode的部分只有字母部分，圖可以省去很多不必要的按鍵 
#include <iostream>
#include <vector>
#include <algorithm>	//為了find
 
using namespace std;

int main()
{
	vector<char> tmp;
	vector<vector<char> > v;
	char tmp1[12]={'q', 'w', 'e','r','t','y','u','i','o','p','[',']'};
	char tmp2[11]={'a','s','d','f','g','h','j','k','l',';','\''};
	char tmp3[9]={'z','x','c','v','b','n','m',',','.'};
	string s;
	
//	將值放入vector
	for(int i=0; i<12; i++)
	{
		tmp.push_back(tmp1[i]);
	}
	v.push_back(tmp);
	tmp.clear();
	
	for(int i=0; i<11; i++)
	{
		tmp.push_back(tmp2[i]);
	}
	v.push_back(tmp);
	tmp.clear();
	
	for(int i=0; i<9; i++)
	{
		tmp.push_back(tmp3[i]);
	}
	v.push_back(tmp);
	tmp.clear();
	
	
	vector<char>::iterator it;
	while(getline(cin, s))
	{
		for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);	//全轉小寫 
			int j;
			for(j=0; j<3; j++)
			{
				it=find(v[j].begin(), v[j].end(), s[i]);	//利用vector的find去找 
				if(it!=v[j].end())
				{
					cout<<*(it-2);	//左移2 
					break;
				} 
			}
			if(j>=3) cout<<s[i];	//沒找到，輸出原值 
		}
		cout<<endl;
	}
		
}

