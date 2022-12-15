#include <bits/stdc++.h>
using namespace std;

int length(char arr[]){
    int i = 0;
    while(*(arr+i)!='\0'){
        i++;
    }
    return i;
}


int main()
{
    char str1[] = "Hello", str2[] = "World";
    cout << length(str1);
    return 0;
}