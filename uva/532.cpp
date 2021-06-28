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
	vector<int> cur(3);	//存當前位置座標 
	vector<int> next(3);	//存子樹層的座標 
	while(!q.empty())
	{
		cur=q.front();
		q.pop();
		if(graph[cur[0]][cur[1]][cur[2]]=='E')	//走到E 
		{
			cnt=level[cur];
			return;
		}
		else if(graph[cur[0]][cur[1]][cur[2]]=='#')continue;	//不可走 
		
		for(int i=0; i<6; i++)
		{
			for(int j=0; j<3; j++)
			{
				next[j]=cur[j]+dir[i][j];	
			}
			if(mark[next]==1) continue;	//已訪問 
			else mark[next]=1;	//標記 
			
			if(next[0]<0||next[0]>=l) continue;	//超出範圍 
			if(next[1]<0||next[1]>=r) continue;
			if(next[2]<0||next[2]>=c) continue;
			
			level[next]=level[cur]+1;	//紀錄層數 
			q.push(next);	//加入queue 
		}	
	}
	return;
}
int main()
{
	
	while(cin>>l>>r>>c)
	{
		vector<int> s(3, -1);
		map<vector<int>, int> level;	//記錄在第幾層 
		map<vector<int>, int> mark;	//紀錄是否訪問過，降低時間複雜度 
		queue<vector<int> > q;	//bfs的queue 
		int cnt=-1;	//存答案 
		if(l==0 &&r==0 && c==0) break;
		vector<vector<vector<char> > > graph(l, vector<vector<char> >(r, vector<char>(c)));
		for(int i=0; i<l; i++)
		{
			for(int j=0; j<r; j++)
			{
				for(int k=0; k<c; k++)
				{
					cin>>graph[i][j][k];
					if(graph[i][j][k]=='S')	//找到s的座標 
					{
						s[0]=i;
						s[1]=j;
						s[2]=k;
					}
				}				
			}	
		}
		if(s[0]==-1)	//沒s
		{
			cout<<"Trapped!"<<endl;
			continue; 
		}
		//放入起始點，設s的level=0，及標示已訪問 
		q.push(s);	
		level[s]=0;
		mark[s]=1;
		bfs(cnt,graph, level, q, mark);	//bfs
		
		
		if(cnt==-1)	//走不到e 
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

