#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    int swap = 0;
    for(int i = 0; i<n;i++) {
        for(int j=0;j<n-1;j++) {
            if(a[j] > a[j+1] ) {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swap++;
            } 
        }
    }
    cout<<"Array is sorted in "<<swap<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
	return 0;
}
