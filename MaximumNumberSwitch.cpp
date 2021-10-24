#include <iostream>
using namespace std;

//find the maximum between three numbers. Using the switch statement..

int main()
{
    int num1, num2, num3;
    cout << " Enter any three Numbers " << endl;
    cin >> num1 >> num2 >> num3;

    switch (num1 > num2 && num1 > num3)
    {
    case 1:
        cout << "You Entered Maximum Number is " << num1;
        break;
    case 0:
        switch (num2 > num1 && num2 > num3)
        {
        case 1:
            cout << "You entered Maximum number is " << num2;
            break;
        case 0:
            switch (num3 > num1 && num3 > num2)
            {
            case 1:
                cout << "You Entered Maximum Number is " << num3;
                break;
            case 0:
                cout << "Invalid Number";
            }
        }
    }
    return 0;
}
