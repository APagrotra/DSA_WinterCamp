#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 5;

    for (int k = 0; k < t; k++)
    {
        int temp = arr[n - 1];
        for (int i = n; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;

        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << "temp" << temp <<endl;
        cout << endl;

    }

    return 0;
}