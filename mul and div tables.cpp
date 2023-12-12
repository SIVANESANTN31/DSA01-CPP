#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j,mul,div;
	cout<<"enter the number:";
	cin>>a;
	cout<<"enter the number:";
	cin>>b;
	cout<<"1)multiplication\n2)division\n enter the choice:";
	cin>>j;
	switch(j)
	{
	case 1:
	for(i=1;i<=a;i++)
	{
		cout<<i<<"X"<<b<<"="<<i*b<<"\n";
	}
	break;
	case 2:
		for(i=1;i<=a;i++)
	{
		cout<<i<<"/"<<b<<"="<<i/b<<"\n";
	}
	}

}
