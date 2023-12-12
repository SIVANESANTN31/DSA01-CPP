#include<cmath>
#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Enter your age: ";
cin>>age;
if(isdigit(age))
{
cout<<"Invalid input, enter a integer value.";
}
else
{
if(age>=13 && age<=19)
{
cout<<"Person is Teenager"<<endl;
}
else
{
cout<<"Person is not a Teenager"<<endl;
}
}
if(age>=18)
{
cout<<"Person is eligible for voting"<<endl;
}
else
{
cout<<"Person is not eligible for voating"<<endl;
}
return 0;
}
