#include <iostream>
#include <vector>
#include <algorithm>	//���Fsort 
//34 
//�D����� 
using namespace std;

int main()
{
	vector<int> v;
	int n, tmp;
	while(cin>>n)
	{
		if(n!=0)
		{
			v.clear();
			for(int i=0; i<n; i++)
			{
				cin>>tmp;
				v.push_back(tmp);
			}
			//�ƧǡA���n�ۤv�gbubble sort�A�|�W�� 
			sort(v.begin(), v.end());
		
			//�T���סG 
			//ans1��J���̤p�������(���ƭӿ�J����Ӥ���ơA�D�p��)
			//ans2��J�����X�Ӥ����(�ȩM����ƬۦP��)
			//ans3�Ҧ���Ƥ��ŦXA��(�Y���ƭӿ�J�A�Ȥ���⤤��ƪ�;�Ω_�ƿ�J�A�Ȭ�����ƪ�) 
			int ans1, ans2, ans3; 
			if(n%2)	//�_ 
			{
				ans1=v[n/2];
				ans3=1;
				int cnt=0;
				for(int i=0; i<v.size(); i++)
				{
					if(v[i]==v[n/2])
					{
						cnt++;
					}
				}
				ans2=cnt;
			}
			else
			{
				ans1=v[n/2-1];
				ans3=v[n/2]-v[n/2-1]+1;
				int cnt=0;
				for(int i=0; i<v.size(); i++)
				{
					if(v[i]==v[n/2]||v[i]==v[n/2-1])
					{
						cnt++;
					}
				}
				ans2=cnt;
			}
			cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
		}
	}
}
