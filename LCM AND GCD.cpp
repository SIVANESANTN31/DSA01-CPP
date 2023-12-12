#include <iostream>
using namespace std;
int gcd(int m, int n) {
   int r = 0, a, b;
   a = (m > n) ? m : n;
   b = (m < n) ? m : n;
   r = b;
   while (a % b != 0) {
      r = a % b;
      a = b;
      b = r;
   }
   return r;
}
int lcm(int m, int n) {
   int a;
   a = (m > n) ? m: n;
   while (true) {
      if (a % m == 0 && a % n == 0)
         return a;
         ++a;
   }
}
int gcd (int a, int b, int c) 
{
  
  int maxi = 0;
  
  maxi = max(a, max(b, c));
  
  for(int i = maxi; i>1; i--)
  {
      if(( a%i == 0 ) and ( b%i == 0 ) and ( c%i == 0 ))
      {
          return i;
          break;
      }
  }
  
  return 1;
}
int lcm(int x,int y, int z)
{
        long max,lcom, count, flag=0;
        if(x>=y&&x>=z)
                max=x;
        else if(y>=x&&y>=z)
                max=y;
        else if(z>=x&&z>=y)
                max=z;
        for(count=1;flag==0;count++)
        {
                lcom=max*count;
                if(lcom%x==0 && lcom%y==0 && lcom%z==0)
                {
                        flag=1;
                }
        }
        return lcom;
}
int lcm(int, int, int);
int gcd(int, int, int);
int main()
{
	int n ;
	cout<<"please enter (1) for 2 input. \nplease enter (2) for 3 inputs:\n";
	cout<<"enter your choise : ";
	cin>>n;
	if(n==1)
	{
	cout << "Enter the two numbers: ";
   int m, n;
   cin >> m >> n;
   cout << "The GCD of two numbers is: " << gcd(m, n) << endl;
   cout << "The LCM of two numbers is: " << lcm(m, n) << endl;
   return 0;
	}
	else if(n==2)
	{
	int a, b, c;
  cout<<"Enter the numbers :";
  cin >> a >> b >> c;
  cout << "LCM of " << a << ", " << b << " and " << c << " is " << lcm (a, b, c)<<endl;
  cout << "GCD of " << a << ", " << b << " and " << c << " is " << gcd (a, b, c);
	}
	return 0;
	
}
