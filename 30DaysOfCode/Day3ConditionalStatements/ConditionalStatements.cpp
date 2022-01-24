#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <limits>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    char const* s{};
    if (n % 2) s = "Weird";
    else
    {
        if ((2 <= n && n <= 5) || n > 20) s = "Not Weird";
        if (6 <= n && n <= 20) s = "Weird";

    }
    cout << s << endl;

    return 0;
}
