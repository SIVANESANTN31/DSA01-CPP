#include<iostream>
using namespace std;
#include<conio.h>
int main()  { 
    double income, taxable_income,tax; 
    cout<<" Enter the income: "; 
    cin>>income ; 
    taxable_income = income - 150000; 
    if(taxable_income <= 0)  { 
       cout<<"\n"<< " NO TAX "; 
   } 
   else if(taxable_income >= MIN_INCOME1 && taxable_income < MAX_INCOME1)  { 
       tax = (taxable_income - MIN_INCOME1) *TAX_RATE1; 
   } 
  else if(taxable_income >= MIN_INCOME2 && taxable_income < MAX_INCOME2) { 
    tax = (taxable_income - MIN_INCOME2) * TAX_RATE2; 
  } 
 else  { 
    tax = (taxable_income - MIN_INCOME3) * TAX_RATE3; 
    cout<<tax; 
  } 
  getch(); 
  return 0; 
 }
