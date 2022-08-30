#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main()
{
    FIO
    int t; cin >> t;
    while (t--){
    ll l; ll r;
    cin >> l >> r;
    ll ans = l;
    for (ll i = 0; ans < r; i++){
        ans |= (1LL<<i);
        if((ans | (1LL<<(i+1))) > r)
        {
           break;
        }
    }
    cout << ans << el;
    }
}
