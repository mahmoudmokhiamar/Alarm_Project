#include <iostream>
#include <vector>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main()
{
    FIO
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll arr[n] = {0};
        vector<ll> freq(N);
        bool ans = true;
        for(int i = 0; i<n ; i++){
            cin >> arr[i];
            freq[arr[i]]++;
            if(freq.at(arr[i]) > 1){
                ans = false;
            }
        }
     if(ans)
        cout << "prekrasnyy"<<el;
     else if(ans == false)
        cout << "ne krasivo" << el;
    }
}
