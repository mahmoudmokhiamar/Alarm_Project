#pragma GCC optimize "trapv"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
using namespace std;
int main()
{
    string st;
    cin >> st;
    vector<int> v;
    int size = (int)st.size();
    for (int i = 0; i < size; i++)
    {
        v.push_back(st[i] - '0');
    }
    auto it = find(v.begin(),v.end(),0);
    if (it != v.end())
        v.erase(it);
    else
        {
            it = v.end() - 2;
            v.erase(it);
        }
    for (auto i : v)
    {
        cout << i;
    }
    cout << el;
}
