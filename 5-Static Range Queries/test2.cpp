#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    FIO

    int arr[7] = {0,6,4,2,7,2,7};
    int pref1[7] = {0};
    for(int i = 1;i <= 6; i++)
        pref1[i] = pref1[i-1] + arr[i];
    int l , r;
    for(auto i: pref1)
        cout << i << " ";
    cout << '\n';
    cin >> l >> r;
    cout << l << " " << r << '\n';
    cout << pref1[r] << " " << pref1[l-1] << '\n';
    cout << pref1[r] << " " << pref1[l] <<'\n';
    cout << pref1[r] - pref1[l-1] << "\n";



}

