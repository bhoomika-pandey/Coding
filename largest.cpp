#include <iostream>
using namespace std;
int main()
{
    int t, n, largest;
    cin >> t;
    int num[t];
    for (int i = 0; i < t; i++)
    {
        cin >> num[i];
    }
    largest = num[0];
    for (int i = 1; i < t; i++)
    {
        if (largest < num[i])
            largest = num[i];
    }
    cout << largest << endl;
    return 0;
}