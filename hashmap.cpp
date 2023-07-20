#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int, int> mp;
    vector<int> v(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    return 0;
}
