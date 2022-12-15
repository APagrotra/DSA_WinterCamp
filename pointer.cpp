#include <bits/stdc++.h>
using namespace std;

int sum(int &c, int &d){
    return c+d;
}

int main()
{
    int a = 10;
    int b = 20;
    int *c = &a;
    int *d = &b;

    // cout << "Value " << a << endl;
    // cout << "Address " << ++(*c)  << endl;
    cout << "Print Sum " << sum(a,b);

    return 0;
}