#include <bits/stdc++.h>
using namespace std;

void TwoDSort(char s[3][10])
{

    int k = 0;
    int j = 0;
    while(k<2)
    {
        if (s[k+1][j] == s[k][j])
        {
            j++;
            // cout << " j incresed in first to " << j << endl;
        }
        else if(s[k+1][j] > s[k][j]){
            k++;
            // cout << " K incresed in first to "  << k << endl;
        }
        else
        {
            // cout << " Swapping loop started" << endl;
            for (int i = 0; i < 10; i++)
            {
                char temp = s[k][i];
                s[k][i] = s[k+1][i];
                s[k+1][i] = temp;
                // cout << s[k][i] << " -> " << temp << endl;
            }
            // cout << " swapping done" << endl;
            k++;
            j=0;
            // cout << " k incresed in second " << k << endl;
            // cout << " k initialised to " << 0 << endl;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << s[i][j];
        }
        cout << endl;  
    }
    // cout << s[2][0];
}

int main()
{
    char s[3][10] = {{'k', 'a', 'r', 'm', 'a'}, 
                    {'k', 'a', 'r', 'a', 'n', 'a'}, 
                        {'k', 'a', 's', 'h', 'i', 's', 'h'}};
    TwoDSort(s);

    return 0;
}