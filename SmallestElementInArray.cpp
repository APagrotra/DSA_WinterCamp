#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {4,2,7,8,5,2,10};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if(arr1[i]<arr1[j]){
                count++;
            }
        }
        arr2[i] = count;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    
    
    return 0;
}