#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[3][3] = {4, 2, 7, 8, 3, 6, 7, 23, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int count = 0;
            for (int k = i; k < 3; k++)
            {
                for (int l = j; l < 3; l++)
                {
                    if (arr1[i][j] < arr1[k][l])
                    {
                        count++;
                    }
                }
            }
            arr2[i][j] = count;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}