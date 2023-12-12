#include<iostream>
using namespace std;
class bill
{
	int n,x,pmr,cmr,m;
	char name[40];
	public:
		void input();
		void display();
};
void bill::input()
{
	cout<<"enter the consume no ";
	cin>>n;
	cout<<"enter the pmr ";
	cin>>pmr;
	cout<<"enter the cmr ";
	cin>>cmr;
	cout<<"1.demostic"<<endl<<"2.commercial"<<endl<<"select the choice ";
	cin>>m;
}
void bill::display()
{
	x=cmr-pmr;
    if(m==1)
	{
		if(x<=100)
		{
		cout<<"bill is "<<x;
	    }
		if(x>100&&x<=200)
		{
		cout<<"bill is "<<x*2.5;
	    }
		if(x>200&&x<=500)
		{
		cout<<"bill is "<<x*4;
	    }
		if(x<501)
		{
		cout<<"bill is "<<x*6;
	    }
    }
	else if(m==2)
	{
		if(x<=100)
		{
		cout<<"bill is "<<x*2;
	    }
		if(x>100&&x<=200)
		{
		cout<<"bill is "<<x*4.5;
	    }
		if(x>200&&x<=500)
		{
		cout<<"bill is "<<x*6;
	    }
		if(x<501)
		{
		cout<<"bill is "<<x*7;
	    }
    }
}
int main()
{
 bill a;
 a.input();
 a.display();
}
