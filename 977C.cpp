#include <bits/stdc++.h>
using namespace std;

void merge(long long int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1 ;
    int n2 =  r - m ;
    int L[n1], R[n2] ;
    for (i = 0; i < n1; i++)
    { L[i] = arr[l+i] ; }
    for (j = 0; j < n2; j++)
    { R[j] = arr[m+1+j] ; }
    i=0, j=0, k=l ;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergeSort(long long int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int n ;
    cin >> n ;
    int k ;
    cin >> k ;
    long long int p[n],i ;
    for(i=0;i<n;i++)
    { cin >> p[i] ; }    
    mergeSort(p, 0, n-1);
    if(p[k]-p[k-1]<=1)
    { cout << -1 ; }
    else
    { cout << p[k-1]+1 ; }    
    return 0;
}
