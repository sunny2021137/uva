//33 看題目到寫完太優秀了吧
//使用map紀錄組合 出現次數 

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	
	vector<int> num(5);
	while(cin>>n)
	{
		map<vector<int>, int> cnt;
		int max=0;
		if(n==0) break;
		for(int i=0; i<n; i++)
		{
			cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
			sort(num.begin(), num.end());
			cnt[num]++;
			if(cnt[num]>max) max=cnt[num];
		}
		int sum=0;
		map<vector<int>, int>::iterator it;
		for(it=cnt.begin(); it!=cnt.end(); it++)
		{
			if(it->second==max)
				sum+=max;
		}
		cout<<sum<<endl;
	}
	return 0;
}
