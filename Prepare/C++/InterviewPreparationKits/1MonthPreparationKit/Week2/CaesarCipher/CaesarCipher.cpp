#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;

    k = k % 26;
    for(char c : s)
    {
        if( isalpha(c) == 0)
            cout << c;
        else 
        {
            unsigned  char en = c + k;
            if(isupper(c) && en > 90)
                en = en - 26;
            else if(islower(c) && en > 122)
                en = en - 26;
            cout << en;
        }
    }
	return 0;
}
