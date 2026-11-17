#include <iostream>
#include <iomanip>
#include <cstdlib>
#define SIZE 10
using namespace std;

int main()
{
    int n[SIZE] = { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int i;
    int j;

    cout << "Element" << setw(13) << "Value" << setw(17) << "Histogram" << endl;

    for (i = 0; i < SIZE; i++)
    {
        cout << setw(7) << i << setw(13) << n[i] << "        ";

        for (j = 1; j <= n[i]; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    system("pause");
    return 0;
}