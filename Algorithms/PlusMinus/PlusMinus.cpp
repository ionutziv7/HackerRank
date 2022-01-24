#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    double pos, neg, zeros;
    int size = arr.size();
    pos = neg = zeros = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zeros++;
    }
    cout << setprecision(6) << fixed << pos / size << endl;
    cout << neg / size << endl;
    cout << zeros / size << endl;

    return 0;

}
