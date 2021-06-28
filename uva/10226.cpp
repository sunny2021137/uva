#include <iostream>
#include <iomanip>
#include <map> 
//56 
using namespace std;

int main()
{
	string tree;
	map<string, int> cnt;
	int total=0;
	int n;
	while(cin>>n)
	{
		cin.ignore();//'\n'
		cin.get();//�ťզ� 
		for(int i=0; i<n; i++)
		{
			if(i!=0) cout<<endl; 
			cnt.clear();
			total=0;
			//�Y���ťզ�AgetlineŪ�쪺�|�O""! 
			while(getline(cin, tree) && tree!="")
			{
				//cnt
				cnt[tree]++;
				//total
				total++;
			}
			//fractional
			map<string, int>::iterator it;
			for(it=cnt.begin(); it!=cnt.end(); it++)
			{
				cout<<it->first;
				//�p��4�� 
				cout<<fixed<<setprecision(4)<<" "<<(double)(it->second)/(double)total*100.0<<endl;
			}
		}
	}
}
