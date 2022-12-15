#include <bits/stdc++.h>
using namespace std;

int func(int a, int n){
    static int sum = 0;

    if(n<1){ 
        return sum;
    }else{
        sum = sum + a%10;
        a = a/10;
        func(a,--n);
    }
}

int main()
{
    int a = 1234;
    int n = 4;

    cout << "sum is " << func(a, n);
    return 0;
}