#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number :";
    cin>>n;
    for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++) 
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
    return 0;
}
