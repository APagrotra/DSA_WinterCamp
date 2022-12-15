#include <bits/stdc++.h>
using namespace std;

int length(char arr[]){
    int i = 0;
    while(*(arr+i)!='\0'){
        i++;
    }
    return i;
}


void reverse(char str[], int l){
    char *a = str;
    char *b = str + (l-1);

    for (int i = 0; i < l/2; i++)
    {
        char temp = *a;
        *a = *b;
        *b = temp;
        *a++;
        *b--;
    }
     
    for (int j=0; j < l; j++)
    {
        cout << str[j] << " ";
    }
    
}


int main()
{
    char str[] = "Hello";
    int l = length(str);
    reverse(str, l);

    return 0;
}