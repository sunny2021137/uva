//36
//�`�N�o�D �u�n�r��x�i"�ƦC"�� s1, s2���l�r��N��A���ΦҼ{x�Ʀ���s1�l�r�� �O�_�Ms2�Ʀ����l�r�궶�ǬۦP
//x�r�ꤤ���r���i������
 
#include <iostream>

using namespace std;

int main()
{
	string s1, s2;
	while(getline(cin, s1))	//*�o�̨ϥ�getline�O�]����J�]�t"�Ŧr��"!!! 
	{
		getline(cin, s2);
		int c1[26]={0};	//s1���U�r���X�{���� 
		int c2[26]={0}; //s1���U�r���X�{����
		
		//�X�{���Ʋέp��		
		for(int i=0; i<s1.length(); i++)
		{
			s1[i]=tolower(s1[i]);
			c1[s1[i]-'a']++;
		}
		for(int i=0; i<s2.length(); i++)
		{
			s2[i]=tolower(s2[i]);
			c2[s2[i]-'a']++;
		}
		
		//�̦r�����ǿ�X 
		for(int i=0; i<26; i++)
		{
			int num=c1[i]>c2[i]?c2[i]:c1[i];	//���U�r�� �X�{���Ƹ�"��"�� 
			for(int j=0; j<num; j++)
				cout<<(char)(i+'a');	//��X�r��
		}
		cout<<endl;	
	}	
} 
