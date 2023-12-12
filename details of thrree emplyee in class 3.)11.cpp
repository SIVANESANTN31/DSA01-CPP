#include<iostream>
using namespace std;
class Employee
{
        char name[10];
        int year;
        char address[20];
public:
    void initialize()
    {
        cout<<"Enter name,year and address"<<endl;
        cin>>name>>year>>address;
    }
       void display();
};
 void Employee:: display()
{

    cout<<name<<"\t"<<year<<"\t"<<address<<endl;
}

int main()
{
    int i;
    Employee e[3];
    for(i=1;i<4;i++)
    {
        e[i].initialize();
    }
     cout<<"Name"<<"\t"<<"Year of Joining"<<"\t"<<"Adress"<<endl;
      for(int j=1;j<4;j++)
    {
        e[j].display();
    }

}
