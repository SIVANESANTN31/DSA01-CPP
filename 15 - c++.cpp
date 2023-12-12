#include<iostream>
using namespace std;
int main()
{
	int m1,m2,m3;
	float total,avg;
	char name[100];
	int regno;
	for(int i=1;i<=3;i++)
	{
	cout<<"\nEnter "<<i<<" student marks:\n";
	cout<<"Name:";
	cin>>name;
    cout<<"Regno:";
    cin>>regno;
	cout<<"enter the marks in python "<<endl;
	cin>>m1;
	cout<<"enter the marks in c programming "<<endl;
	cin>>m2;
	cout<<"enter the marks in maths "<<endl;
	cin>>m3;
	total = m1+m2+m3;
	cout<<"total marks "<<total<<endl;
	avg=total/3;
	cout<<"average marks "<<avg<<endl;
		if(avg>90)
		{
			cout<<"Grade : S";
		}
		else if(avg<90&&avg>=80)
		{
			cout<<"Grade : A";
		}
		else if(avg<80&&avg>=70)
		{
			cout<<"Grade : C";
		}
		else if(avg<70&&avg>=60)
		{
			cout<<"Grade : D";
		}
		else if(avg<60&&avg>=50)
		{
			cout<<"Grade : E";
		}
		else
		{
			cout<<"Grade : F";
		}
	}
		return 0;
}
