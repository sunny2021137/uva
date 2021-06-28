//9 .21 
//癵碽肈...璝计玡Τ00眔ㄓ;璝Τ玥ぃ 
//11计衡猭(计㎝-案计㎝)荡癸11计 

//1计ヴ计1计
//2计计案计(0)
//3计计㎝3计
//4计ソ计4计
//5计计5┪0
//6计计㎝6计(琌2㎝3计)
//7计パ计癬–计竊计竊㎝ 籔 案计竊㎝ 搭ㄤ畉琌7计
//8计ソ计8计
//9计计㎝9计
//10计计0
//11计计计㎝籔案计计㎝畉11计
//12计琌3㎝4计
//13计パ计癬–计竊计竊㎝ 籔 案计竊㎝搭ㄤ畉琌13计


#include<iostream>

using namespace std;

int main()
{
	string s;
	long long int sum;
	while(cin>>s)
	{
		sum=0;
		for(int i=0; i<s.length(); i++)
		{
			if(i%2==0) sum+=(int)(s[i]-'0');	//计
			else  sum-=(int)(s[i]-'0');
		}
		if(s=="0") break; //癘眔璶ノ﹃ㄓ耞磷'000000000'いゎ 
		if(sum%11==0)
		{
			cout<<s<<" is a multiple of 11."<<endl;
		}
		else
		{
			cout<<s<<" is not a multiple of 11."<<endl;
		}
	}
}
