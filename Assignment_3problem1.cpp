#include <bits/stdc++.h>
using namespace std;
bool isSubset(int m,int n,int arr1[],int arr2[])
{
    set<int> s;
    for(int i=0;i<m;i++)
    {
        s.insert(arr1[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(s.find(arr2[i])==s.end())
        {
            return false;
        }
    }
    return true;
}

int main() {
	int t,m,n;
	cin>>t;
	while(t--)
	{
	cin>>m>>n;
	int arr1[m],arr2[n];
	for(int i=0;i<m;i++)
	{
	    cin>>arr1[i];
	}
	for(int i=0;i<n;i++)
	{
	    cin>>arr2[i];
	}
	if(isSubset(m,n,arr1,arr2))
	{
	    cout<<"Yes"<<endl;
	}
	else
	cout<<"No"<<endl;
	}
	return 0;
	
}
