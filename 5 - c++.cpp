#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cout<<"enter the case:";
	cin>>a;
	switch(a)
	{
		case 1:
			{
			   int n, num, digit, rev = 0;

               cout << "Enter a positive number: ";
               cin >> num;
  
               n = num;

               do
               {
                 digit = num % 10;
                 rev = (rev * 10) + digit;
                 num = num / 10;
               } while (num != 0);
                cout << " The reverse of the number is: " << rev << endl;

                if (n == rev)
                   cout << " it is a palindrome.";
                else
                    cout << " it is not a palindrome.";
                return 0;			
			}
		case 2:
			{
				string S;
				cout<<"enter the string:";
				cin>>S;
			    string P = S;		
			    reverse(P.begin(), P.end());
				if(S==P)
				{
					cout<<"it is a palindrome";
				}
				else
				{
					cout<<"it is not a palindrome";
				}
				return 0;
			}
		case 3:
			{
				string A;
				cout<<"enter the value:";
				cin>>A;
				cout<<"given input is both number and string.";
				cout<<"invalid input";
				
			}
			return 0;
	}
}
