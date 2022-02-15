#include <bits/stdc++.h>
#include<vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
 {
     int n,c1 = 0, c2 = 0, c3=0;
     cin>>n;
     vector<int>arr(n);
     for(int i = 0; i < n; i++)
    {
         cin>>arr[i];
         if(arr[i] > 0)
        {
             c1++;
        }
        if(arr[i] < 0)
        {
            c2++;
        }
        if(arr[i] == 0)
        {
            c3++;
        }
    }
    cout<<setprecision(6)<<(float) c1/n<<endl;
    cout<<setprecision(6)<<(float) c2/n<<endl;
    cout<<setprecision(6)<<(float)c3/n<<endl;
    
     return 0;
 }
