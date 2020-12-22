#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\nPola Ke 1\n"<< endl;

    for (int i = 0; i < 6; i++)
    {
        for (int v = 0; v < 6; v++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 2\n"<< endl;

    for (int i = 1; i <= 6; i++)
    {
        for (int v = 1; v <= 6; v++)
        {
            if (i == 1 || i == 6 || v == 1 || v == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\nPola 3\n"<< endl;
    for (int i = 1; i <= 6; i++)
    {

        for (int b = 1; b <= i; b++)
        {

            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 4\n"<< endl;

    for (int i = 1; i <= 6; i++)
    {
        for (int z = 1; z < i; z++)
        {
            cout << " ";
        }
        for (int o = 6; o >= i; o--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
