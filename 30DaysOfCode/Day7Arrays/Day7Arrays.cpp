#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <limits>
#include <cstdio>
#include <algorithm>
using namespace std;

void versionOne()
{
     int n;
    cin>>n;
    int arr[n];
    
    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i = n - 1; i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void versionTwo()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
    {
            cin>>arr[i];
    }
    for(int i = n-1; i >= 0 ;i--)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    versionOne();
    versionTwo();
    
	return 0;
}
