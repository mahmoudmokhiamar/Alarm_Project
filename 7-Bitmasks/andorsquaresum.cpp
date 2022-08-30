#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{
    int n; cin >> n;
    ll arr[n], freq[21] = {0};

    for(int i=0; i<n; i++){ //this gives us the numbers and the freq arr telling us how many bits we have.
        cin >> arr[i];
        for(int j=0; j<21; j++){
            if((arr[i]>>j)&1){
                freq[j]++;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<21; j++){
            if(freq[j]){
                arr[i] |= (1<<j);
                freq[j]--;
            }
            else if(((arr[i]>>j)&1) && !freq[j]){
                    arr[i] -= (1LL<<j);
           }
        }
    }
    ll sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i] * arr[i];
    }
    cout << sum << el;
}
