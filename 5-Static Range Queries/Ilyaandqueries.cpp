#pragma GCC optimize "trapv"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <cstring>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
using namespace std;
int main()
{
    FIO
    string str;cin >> str;
    int size = str.size();
    int* pref = new int[size];
    memset(pref,0,sizeof pref);
    int q; 
    cin >>q; 
    while (q--)
    {
        int l,r;
        cin >> l >> r; 
        l--,r--;
        for (int i = 1; i < size; i++)
        {
            pref[i] = pref[i-1] + (str[i] == str[i-1]);
        }
        cout << pref[r] - pref[l] << el;       
    }
}