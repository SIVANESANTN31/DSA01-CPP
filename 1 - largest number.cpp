#include <iostream>
using namespace std;

int main()
{
	double n,largestValue, currentValue;

    cout << "Enter the no element to be check :" << endl;
    cin >> n;
    cout << "Enter the "<<n<<"integers :\n";
    for (int i = 0; i < n; i++)
    {
        cin >> currentValue;

        if (i == 0 || currentValue > largestValue)
        {
            largestValue = currentValue;
        }
    }

    cout << "Largest number among "<<n<<" numbers : " << largestValue << endl;
    return 0;
}
