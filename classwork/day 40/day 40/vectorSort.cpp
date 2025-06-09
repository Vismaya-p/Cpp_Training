#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;
    vector<int>v(size);
    for (int i = 0;i <= size;i++)
    {
        cin >> v[i];
        //v.push_back(i);

    }
    sort(v.begin(), v.end());

    
    for (int i = 0;i < size;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
