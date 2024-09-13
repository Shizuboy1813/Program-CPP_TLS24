#include <iostream>
#include <cmath>

#define PI 3.14159265

using namespace std;

int main()
{
    float a, b, c, angle;
    string n, loop;

    loop = "y";

    while (loop == "y" || loop == "Y")
    {
        
        cout << endl << endl;
        cout << "       This is a Resultant Vector Calculator       " << endl;
        cout << "======== Made by Muhammad Fachry Alfareeza ========" << endl << endl;

        cout << "Are Your Vectors Perpendicular to Each Other (Y/N) ?" << endl;
        cin >> n;
        cout << endl;

        if (n == "Y" || n == "y" || n == "n" || n == "N")
        {
            cout << "Please Enter the Magnitudes of Your Vectors!" << endl;
            cout << "Your First Vector's Magnitude is: ";
            cin >> a;
            cout << "Your Second Vector's Magnitude is: ";
            cin >> b;
            cout << endl;

            if (n == "Y" || n == "y")
            {
                c = sqrt((a*a)+(b*b));
            }
            else if (n == "N" || n == "n")
            {
                cout << "What is the Angle Between Your Vectors?" << endl;
                cin >> angle;
                cout << endl;
                c = sqrt((a*a)+(b*b)+(2*a*b*cos(angle*PI/180)));
            }

            cout << "The Magnitude of the Resultant Vector is " << c << endl <<endl;
        }

        else
        {
            cout << "Please insert answer the question with Y/N" << endl << endl;
        }

        cout << "do you want to restart (Y/N)?" << endl;
        cin >> loop;
        cout << endl;

    }
    
    cout << "Thanks for Using My Vector Calculator";

    return 0;
}