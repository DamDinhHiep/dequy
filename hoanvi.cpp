#include <iostream>
#include <cmath>
using namespace std;
int n;
void hoanVi (int *pA, int *pB, int t)
{
    if (t > n)
    {
        for (int t = 0; t < n; ++t)
        {
            cout << *(pA + t) << "\t";
        }
        cout << endl;
    }
    for (int i = 1; i < n + 1; ++i)
    {
        if (*(pB + i - 1) == 0)
        {
            *(pA + t - 1) = i;
            *(pB + i - 1) = 1;
            hoanVi (pA, pB, t + 1);
            *(pB + i - 1) = 0;
        } 
    }
}
int main ()
{
    cout << "Impost n : ";
    cin >> n;
    int arrayA[n], test[n];
    for (int i = 0; i < n; ++i)
    {
        arrayA[i] = i + 1;
        test[i] = 0;
    }
    hoanVi (arrayA, test, 1);
    return 0;
}