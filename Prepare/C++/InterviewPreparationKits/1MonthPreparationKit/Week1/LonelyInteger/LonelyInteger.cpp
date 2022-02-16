#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, f =0, temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        f ^= temp;
    }
    cout<<f;
	return 0;
}
