#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;
    char str[50], temp;
    int i, j;
    int palindrome;
    switch(palindrome)
    
    case 1:
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
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";
		 break;
    case 2 :
    cout << "Enter a string : ";
    gets(str);
    j = strlen(str) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "\nReverse string : " << str; 
}
    getch();
}
    
