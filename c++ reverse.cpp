#include <iostream>
using namespace std;
void revereseArrayIt(int arr[], int start, int end){
   while (start < end){
      int temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }
}
int main() {
	int s;
   int arr[50];
   cout<<"enter the size of value:";
   cin>>s;
   cout<<"Enter the value:";
   for(int i=0;i<=s;i++)
{
	cin>>arr[i];
}
   int n = sizeof(arr) / sizeof(arr[0]);

   cout<<"Orignal Array : ";
   for (int i = 0; i < n; i++)
      cout<<arr[i]<<" ";
   cout<<endl;
      revereseArrayIt(arr, 0, n-1);
         if(isdigit(s)){
      cout << "Reversed array : ";
      for (int i = 0; i < n; i++)
         cout<<arr[i]<<" ";
   cout<<endl;
}
   return 0;
}
