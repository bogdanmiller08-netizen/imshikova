#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    const int n = 6;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                arr[i][j] =  0;
                //cout << "0" << " ";
            }
            {
                arr[i][j] = rand() % 10;
            }
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }
    cout << "главная диагональ и побочная:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << "0" << " ";
            }
        }
    }
    cin.get();
    return 0;
}