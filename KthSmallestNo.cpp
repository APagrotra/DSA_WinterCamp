#include <bits/stdc++.h>
using namespace std;

void party(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < n)
    {
        if (arr[i] < 0)
        {
            i++;
        }
        else
        {
            break;
        }
    }
    while (j > 0)
    {
        if (arr[j] > 0)
        {
            j--;
        }
        else
        {
            break;
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {10, 20, -10};
    int n = sizeof(arr) / sizeof(arr[1]);

    return 0;
}