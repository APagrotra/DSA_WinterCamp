#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    for (int i = k; i < n+k; i++)
    {
        cout << arr[i%n];
    }
    
    return 0;
}