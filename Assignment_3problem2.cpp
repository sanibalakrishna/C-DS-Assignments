#include<bits\stdc++.h>
using namespace std;
bool find3Numbers(int A[], int arr_size, int sum) 
{ 
    for (int i = 0; i < arr_size - 2; i++) { 
        unordered_set<int> s; 
        int curr_sum = sum - A[i]; 
        for (int j = i + 1; j < arr_size; j++) { 
            if (s.find(curr_sum - A[j]) != s.end()) { 
                return true; 
            } 
            s.insert(A[j]); 
        } 
    } 
    return false; 
}
int main()
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    bool x=find3Numbers(a,n,s);
	    if(x)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
