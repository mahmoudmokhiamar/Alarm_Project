#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{
    int n; cin >>n;

    int xors[n];
    for(int i=0; i<n; i++){
        cin >> xors[i];
    }
    int result = xors[0];

    for(int i=1; i < n; i++){
        result ^= xors[i];
    }
    for(int i=0; i<n; i++){
        int ans = result ^ xors[i];
        cout << ans << ' ';
    }
}
