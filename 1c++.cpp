#include <iostream>
using namespace std;

int validates(string username)
{
    int special = 0, l = username.length();
    //check length is 0 or more than 30
    if (l == 0 || l > 30)
        return 0;

    for (int i = 0; i < l; i++)
    {
        char s = username.at(i);

        //no spaces allowed
        if (s == ' ')
            return 0;

        //characters other than alphabets and numbers
        if (isalnum(s))
            continue;
        else
        {
            //periods and underscore allowed but only one
            if (s == '_' || s == '.')
            {
                special++;
                if (special > 1)
                    return 0;
            }
            else
                return 0;
        }
    }
    return 1;
}

int main()
{   string name;
    cout << "Enter your name: ";
    cin >> name; 
    if (validates(name))
        cout << "Valid Username";
    else
        cout <<"Invalid Username";
    return 0;
}
