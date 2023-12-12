#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a[100],b[100];
	cout<<"enter user name :";
	cin>>a;
	cout<<"reenter user name :";
	cin>>b;
	if(strcmp(a,b)==0)
	{
		cout<<"valid";
	}
	else
	{
		cout<<"invalid";
	}
}
