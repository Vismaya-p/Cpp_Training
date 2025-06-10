
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for (int i = 0;i < q;++i)
    {
        int query;
        cin >> query;

        auto it = lower_bound(arr.begin(), arr.end(), query);
        int index = it - arr.begin();
        if (it != arr.end() && *it == query)
        {
            cout << "Yes " << index + 1 << endl;
        }
        else {
            cout << "No " << index + 1 << endl;
        }
    }
    return 0;
}
