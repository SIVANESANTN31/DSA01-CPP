#include<iostream>
using namespace std;
int main()

{

int i,j,a,b;
cout<<"enter the value of starting number of a :";
cin>>a;
cout<<"enter the value of ending number of b :";
cin>>b;

for(i=a;i<=b;i++)

{

for(j=a;j<i;j++)

{

if(i%j==0)

{

cout<< " \n"<<j;

break;

}

}

}

return 0;

}
