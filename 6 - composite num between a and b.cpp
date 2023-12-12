#include<iostream>                                                               
using namespace std;                                                                                                                                                                                                                                                      
int main()                                                                     
{                                                                               
  int i, j, a,b;                                                              
  int count = 0;                                                            
  cout<<"enter the value of starting number of a :";
cin>>a;
cout<<"enter the value of ending number of b :";
cin>>b;                                                          
                                                                                
  cout<<"Composite Numbers between a and b : ";                             
   for(i=a; i<=b; i++)
 {
  if( % i == 0)
{
   count++;
}
cout<< count;
 }       
 return 0;                                                         
}     
