#include<iostream>
using namespace std;
int main() {
   int a[20], i, n,s = 0;
   int *ptr;
   cout<<"enter size of array:";
   cin>>n;
   cout << "Enter the Numbers: ";
   for (i = 0; i < n; i++) {
      cin >> a[i];
   }
   ptr = a;
   for (i = 0; i < n; i++) {
      s = s + *(ptr + i);
   }
cout << "\nSum of Elements of Array: " << s;
}
