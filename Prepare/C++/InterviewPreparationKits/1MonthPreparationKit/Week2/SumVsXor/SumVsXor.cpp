#include <iostream>
#include <math.h>
using namespace std;

long sumXor(long n) {
    int ans = 0;
    while(n > 0) {
        if( n %  2 == 0) ans++;
        n /= 2;
    }
    return pow(2, ans);
}

int main()
{
    long n;
    cin >> n;
    long result = sumXor(n);
    cout << result;
	return 0 ; }
