#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string permuting_two_arrays()
{
    int n, k;
    cin >> n >> k;
    vector<int> arrA, arrB;
    
    for(int i = 0; i< n;i++)
    {
        int temp;
        cin >> temp;
        arrA.push_back(temp);
    }
    
     for(int i = 0; i< n;i++)
    {
        int temp;
        cin >> temp;
        arrB.push_back(temp);
    }
    
    sort(arrA.begin(), arrA.end());
    sort(arrB.begin(), arrB.end(), greater<int>());
    
    for(int i = 0; i< n; i++)
    {
        if(arrA[i] + arrB[i] < k) 
            return "NO";
    }
    
    return "YES";
}

int main()
{  
    int q;
    cin >> q;
    while(q--)
    {
        cout<<permuting_two_arrays() << "\n";
    }
    return 0;
}
