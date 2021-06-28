#include <iostream>
#include <cmath>	//M_PI
#include <iomanip>	//setprecision

using namespace std;
//27

/*
Degrees (�X), minutes (��), seconds (��)
1�X = 60��
1�� = 60��
*/
//���� arc = 2 * PI * R * a / 360  (deg>180, a=360-deg; deg<180, a=deg)
//���� chord = 2* R * cos((90 �V a / 2) / 180 * PI)

int main()
{
	string str;
//	�Ҧ�������duble�s�A�A��setprecision�]��� 
	double s, a, r=6440.0;
	while(cin>>s>>a>>str)
	{
		//��a 
		if(str=="min") a/=60.0;
		//a<=180
		if(a>180) a=360.0-a;
		
		//arc
		double arc=(2.0)*M_PI*(r+s)*(a/360.0);
		//chord
		double chord=(2.0)*(r+s)*cos((90.0 - a/2.0)/180.0*M_PI);
		
		cout <<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
	}
} 
