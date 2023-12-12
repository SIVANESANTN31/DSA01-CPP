#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],pos=0,neg=0;
	cout<<"enter the how many numbers :";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"enter the number ";
		cin>>arr[i];
	if(arr[i]==-1){
		break;
		}
	else if(arr[i]>0){
		pos += arr[i]/n;
    }
	else{
		neg += arr[i]/n;
	}
}
	cout<< "\n"<<"the sum of positive number is :"<<pos;
	cout<<"\n "<<"the sum of negative number is :"<<neg;
	return 0;
	
}
