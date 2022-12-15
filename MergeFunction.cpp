#include <bits/stdc++.h>
using namespace std;

 void merge(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    int left[n1];
    int right[n2];
    int i=0;
    int j=0;
    int k=l;

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m+1+i];
    }
    

    while((i<n1)&&(j<n2)){
        if(left[i]<right[j]){
            arr[k] = left[i];
            i++;
        }else{
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = left[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = right[j];
        k++;
        j++;
    }    
}

void mergeSort(int arr[], int l, int r){
    if(l<r){
        int m = (l+r)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l , m, r);
    }

}

int main()
{
    int arr[] = {1,4,7,2,6,5,4,9};
    int n= sizeof(arr)/ sizeof(arr[0]);
    
    mergeSort(arr,0,n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}