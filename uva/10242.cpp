#include <iostream>
#include <iomanip>
//20
using namespace std;

//�D�رN���w����|��Ϊ��۾F���䪺���I�y�СA�ھڤw�������I�D�ĥ|�ӳ��I���y�СC
//���R�G�u�﨤�u���I�y�ЩM�n�ۦP�v
int main()
{
	double x1, x2, x3, x4, y1, y2, y3, y4;
	double rx,ry;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
	{ 
		//��﨤
		double ax1, ay1, ax2, ay2, ox, oy;
		if(x1==x3&&y1==y3)
		{
			ax1=x2;
			ax2=x4;
			ay1=y2;
			ay2=y4;
			ox=x1;
			oy=y1;
		}
		else if(x1==x4&&y1==y4)
		{
			ax1=x2;
			ax2=x3;
			ay1=y2;
			ay2=y3;
			ox=x1;
			oy=y1;
		}
		else if(x2==x4&&y2==y4)
		{
			ax1=x1;
			ax2=x3;
			ay1=y1;
			ay2=y3;
			ox=x2;
			oy=y2;
		}
		else
		{
			ax1=x1;
			ax2=x4;
			ay1=y1;
			ay2=y4;
			ox=x3;
			oy=y3;
		}
		rx=ax1+ax2-ox;
		ry=ay1+ay2-oy;
		cout<<fixed<<setprecision(3)<<rx<<" "<<ry<<endl; 
	} 
}
