#include<iostream>
using namespace std;
 
// Returns true if n is perfect
bool isPerfect(long long int n)
{
    // To store sum of divisors
    long long int sum = 1;
  
    // Find all divisors and add them
    for (long long int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
     if (sum == n && n != 1)
          return true;
  
     return false;
}
  
// Driver program
int main()
{
	int n,i=1,a[20],x;
    cout << "Enter the no of terms to print the prefect number:";
    cin>>x;
    for (n =2; n<=100000; n++)
        if (isPerfect(n))
            {
            a[i]=n;
            i++;
        }
        if(n>=1)
        cout<<"First"<<x<<" prefect numbers are :";
        for(i=1;i<=x;i++){
        cout<<a[i]<<",";
    }
  
    return 0;
}

