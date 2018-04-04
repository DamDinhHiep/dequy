#include <iostream>
#include <cmath>
using namespace std;
int n;
void chinhhop (int t)
{
    if (t < n + 1)
    {
        int i;
        for (i = 0; i < n; ++i)
        {
            if (i + 1 != t)
            {
                cout << t << "\t" << i + 1 << endl;
            }
        }
        chinhhop (t + 1);
    }
}
int main ()
{
    cout << "Impost n : ";
    cin >> n;
    chinhhop (1);
    return 0;
}
