#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        int result;
        result = n * i;
        cout<<n<<" x "<<i<<" = "<<result<<endl;
    }
    
    cout<<endl;
	return 0;
}
