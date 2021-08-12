#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream archivo;
    int piramides;
    archivo.open ("pyramid.txt", ios::app);

    int cant, a, b;

    cout << "Ingrese los niveles que tendrá la piramide: ";
    cin >> cant;
    archivo << cant; 
    for (a = 1; a <= cant; a++)
    {
        for (b = 1; b <= cant - a + 1; b++)
        {
            if (a % 2 == 0)
        {
            cout << "- ";
        }
        else 
        {
            cout << "* ";
        }
        }
        cout << "\n";
    }

    archivo.close();

    cout << "\n\tVuelva pronto ☺\t";
    return 0;
}