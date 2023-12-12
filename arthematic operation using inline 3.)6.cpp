#include<iostream>
using namespace std ;

inline int sum(int a,int b)
 {
  return(a+b);
 }
inline int sub(int a,int b)
 {
  return(a-b);
 }
inline int mul(int a,int b)
 {
  return(a*b);
 }
inline float div(float a,float b)
 {
  return(a/b);
 }

int main()
{
 int x,y;
 char n;
 cout<<"Enter values to process \n X=";
 cin>>x;
 cout<<"\n Y=";
 cin>>y ;
 cout<<"Press '+' for Addition \nPress '-' for Substraction \nPress '*' for multiplication \nPress '/' for Division \n Choise Is :"; 
 cin>>n ;
 if(n=='+')
   cout<<"Addition Is :"<<sum(x,y);
  else if(n=='-')
   cout<<"Substraction Is :"<<sub(x,y);
  else if(n=='*')
   cout<<"Multiplication Is :"<<mul(x,y);
  else if(n=='/')
   cout<<"Division Is :"<<div(x,y);
  else
   cout<<"Wrong Input";
 return 0;
}
