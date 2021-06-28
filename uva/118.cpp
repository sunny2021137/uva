#include <iostream>
//.02
using namespace std;

//決定動向 
void recO(char oi, int o[], int &index)
{
	switch(oi)
	{
		case 'N':
			o[0]=0;
			o[1]=1;
			index=0;
			break;	
		case 'E':
			o[0]=1;
			o[1]=0;
			index=1;
			break;
		case 'S':
			o[0]=0;
			o[1]=-1;
			index=2;
			break;
		case 'W':
			o[0]=-1;
			o[1]=0;
			index=3;
			break;
	}	
}

int main()
{
	char orient[4]={'N', 'E', 'S', 'W'};
	int xm, ym;
	int x, y;
	char oi;
	string s;
	int o[2]={0,0};
	int index, flag;
	cin>>xm>>ym;
	//記掉落
	int fall[xm][ym]={0}; 
	while(cin>>x>>y>>oi)
	{
		index=0;
		flag=0;
		//初始方向
		recO(oi, o, index); 
		cin>>s;
		for(int i=0; i<s.length(); i++)
		{
			//三指令 
			switch(s[i])
			{
				case 'F':
					//移動 
					x+=o[0];
					y+=o[1];
					break;
				case 'R':
					index=(index+1)%4;
					//改方向 
					recO(orient[index], o, index);
					break;
				case 'L':
					if(index==0) index=3;
					else index--;
					//改方向 
					recO(orient[index], o, index);
					break;
			}
			if(x>xm|| x<0 || y<0 || y>ym)
			{
				//若是上一步有座標記，恢復原值，忽略此次移動 
				if(fall[x-o[0]][y-o[1]])
				{
					x=x-o[0];
					y=y-o[1];
					continue;
				}
				if(x>xm)x=xm;
				else if(x<0) x=0;
				if(y>ym) y=ym;
				else if(y<0) y=0;
				fall[x][y]=1;
				flag=1;
				break;	
			} 
		}
		cout<<x<<" "<<y<<" "<<orient[index];
		if(flag) cout<<" LOST";
		cout<<endl;
	}
}
