#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;  
int main()
{
   int len,i,s,x;
   char a[20];
   cout<<"enter the size of value:";
   cin>>s;
   cout<<"Enter the value:";
   for(int i=0;i<=s;i++)
   {
	cin>>a[i];
   }
   for(int i=0;i<=s;i++)
   {
	x = a[i];
   }
if(isdigit(x))
{  
   len = strlen(a);
   
   for(i=len-1;i>=0;i--)
   {
 	cout<<a[i];
   }
}
else
{
	cout<<"invalid input";
}
    return 0;
}
