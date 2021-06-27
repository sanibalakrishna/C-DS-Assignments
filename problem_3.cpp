#include<bits\stdc++.h>
using namespace std;
int RemoveDuplicates(int arr[], int n)
{
    
    if (n==0 || n==1)
        return n;
 
    int temp[n];
 
    
    int j = 0;
    for (int i=0; i<n-1; i++)
 
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
 
    
    temp[j++] = arr[n-1];
 
   
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
}
 

int main()
{   int N = 5 ;
    int arr[] = {2,2,2,2,2};
    N = RemoveDuplicates(arr, N);
    for (int i=0; i<N; i++)
       cout << arr[i] << " ";
 
    return 0;
}
