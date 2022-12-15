#include <bits/stdc++.h>
using namespace std;

int length(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

bool comp(string s1, string s2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}

void concat(string s1, string s2, int n)
{
    char s3[n * 2];
    for (int i = 0; i < n; i++)
    {
        s3[i] = s1[i];
    }
    for (int i = 0; i < n; i++)
    {
        s3[n + i] = s2[i];
    }
    for (int i = 0; i < n * 2; i++)
    {
        cout << s3[i];
    }
}

void bubbleSort(char s1[], int n)
{
    int j = 0;
    while (j < n)
    {
        j++;
        for (int i = 0; i < n - 1; i++)
        {
            if (s1[i] > s1[i + 1])
            {
                char temp = s1[i];
                s1[i] = s1[i + 1];
                s1[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s1[i];
    }
}

int main()
{
    char s1[] = {'m', 'a', 'n', 'a', 'v', '\0'};
    char s2[] = {'m', 'a', 'n', 'a', 'v', 'c', 'h', 'a', 'v', '\0'};
    int n = 4;
    int n1 = length(s1);

    // cout << comp(s1,s2,n) << endl;
    // concat(s1,s2,n);
    bubbleSort(s1, n1);

    return 0;
}