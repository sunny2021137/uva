//5 92
//bfs
#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;


int l, r, c;
int dir[6][3]={{0,0,1},{0,0,-1},{0,1,0},{0,-1,0},{1,0,0},{-1,0,0}};


void bfs(int& cnt, vector<vector<vector<char> > > &graph, map<vector<int>, int> &level, queue<vector<int> > &q, map<vector<int>, int>& mark)
{
	vector<int> cur(3);	//�s��e��m�y�� 
	vector<int> next(3);	//�s�l��h���y�� 
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		if(graph[cur[0]][cur[1]][cur[2]]=='E')	//����E 
		{
			cnt=level[cur];
			return;
		}
		else if(graph[cur[0]][cur[1]][cur[2]]=='#')continue;	//���i�� 
		
		for(int i=0; i<6; i++)
		{
			for(int j=0; j<3; j++)
			{
				next[j]=cur[j]+dir[i][j];	
			}
			if(mark[next]==1) continue;	//�w�X�� 
			else mark[next]=1;	//�аO 
			
			if(next[0]<0||next[0]>=l) continue;	//�W�X�d�� 
			if(next[1]<0||next[1]>=r) continue;
			if(next[2]<0||next[2]>=c) continue;
			
			level[next]=level[cur]+1;	//�����h�� 
			q.push(next);	//�[�Jqueue 
		}	
	}
	return;
}
int main()
{
	
	while(cin>>l>>r>>c)
	{
		vector<int> s(3, -1);
		map<vector<int>, int> level;	//�O���b�ĴX�h 
		map<vector<int>, int> mark;	//�����O�_�X�ݹL�A���C�ɶ������� 
		queue<vector<int> > q;	//bfs��queue 
		int cnt=-1;	//�s���� 
		if(l==0 &&r==0 && c==0) break;
		vector<vector<vector<char> > > graph(l, vector<vector<char> >(r, vector<char>(c)));
		for(int i=0; i<l; i++)
		{
			for(int j=0; j<r; j++)
			{
				for(int k=0; k<c; k++)
				{
					cin>>graph[i][j][k];
					if(graph[i][j][k]=='S')	//���s���y�� 
					{
						s[0]=i;
						s[1]=j;
						s[2]=k;
					}
				}				
			}	
		}
		if(s[0]==-1)	//�Ss
		{
			cout<<"Trapped!"<<endl;
			continue; 
		}
		//��J�_�l�I�A�]s��level=0�A�μХܤw�X�� 
		q.push(s);	
		level[s]=0;
		mark[s]=1;
		bfs(cnt,graph, level, q, mark);	//bfs
		
		
		if(cnt==-1)	//������e 
		{
			cout<<"Trapped!"<<endl;
		}
		else
		{
			cout<<"Escaped in "<<cnt<<" minute(s)."<<endl;
		}
	}
	return 0;
} 

