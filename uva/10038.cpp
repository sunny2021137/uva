#include <iostream>
#include <algorithm>
#include <map>
//jolly jumper�w�q:��n�ӼơA��n�Ӽƪ��t�Ȧb1~n-1�����A�B������
//��map�h�O�� 
using namespace std;

int main()
{
	string s;
	int pre=0, cur=0;
	int n;
	int num=0;
	while(cin>>n)
	{
		map<int, int> cnt;
		
		for(int i=0; i<n; i++)
		{
			cin>>cur;
			
			//���e�� ��t�� �t�ȹ���cnt++ 
			if(num!=0)
			{
				cnt[abs(pre-cur)]++;
			}

			//��s 
			pre=cur; 
			cur=0;
			num++;
		}
		//�P�_�t�Ƚd��O�_�ŦX 
		map<int, int>::iterator it;	
		for(it=cnt.begin(); it!=cnt.end(); it++)
		{			
			//�d��n�p�� n-1�i��<1		
			if((it->first)<1 && n-1>=1 || (it->first)>n-1 && n-1>=1 || (it->second)>1)
				break;
		}
		//��X
		//�r�����1�w�q��jolly
		if(n<=1)
			cout<<"Jolly"<<endl;
		else if(it==cnt.end())
			cout<<"Jolly"<<endl;
		else
			cout<<"Not jolly"<<endl;
	//�k�s		
		cur=0;
		pre=0;
		num=0;
	}
	
 } 
