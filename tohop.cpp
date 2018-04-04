#include <iostream>
#include <cmath>
using namespace std;
int n;
void tohop (int *pA, int t)
{
    if (t < n + 1)
    {
        int i;
        for (i = t; i < n; ++i)
        {
            if (*(pA + i) != t)
            {
                cout << t << "\t" << *(pA + i) << endl;
            }
        }
        tohop (pA, t + 1);
    }
}
int main ()
{
    cout << "Impost n : ";
    cin >> n;
    int arrayA[n];
    int i;
    for (i = 0; i < n; ++i)
    {
        arrayA[i] = i + 1;
    }
    tohop (&arrayA[0], 1);
    return 0;
}
