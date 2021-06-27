#include<bits\stdc++.h>
using namespace std;
 
int SubArrayMaxSum(int arr[], int size)
{
    int maxfar = INT_MIN, maxendinghere = 0;
 
    for (int i = 0; i < size; i++)
    {
        maxendinghere = maxendinghere + arr[i];
        if (maxfar < maxendinghere)
            maxfar = maxendinghere;
 
        if (maxendinghere < 0)
            maxendinghere = 0;
    }
    return maxfar;
}
 

int main()
{   int N = 5;
    int arr[] = {1,2,3,-2,5};
  
    int maxsum = SubArrayMaxSum(arr, N);
    cout << maxsum<<endl;
    return 0;
}