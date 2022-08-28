#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main(){
    FIO

    int n,l,r,tar_diff;
    cin >> n >> l >> r >> tar_diff;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++){cin >> arr[i];}
    for(int msk=0;msk<(1<<n);msk++){
        int sum = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        for(int i=0; i<n; i++){
            if((msk>>i)&1){
                sum += arr[i];
                mx = max(mx,arr[i]);
                mn = min(mn,arr[i]);
            }
        }
        if(sum>=l && sum<=r && (mx-mn)>=tar_diff){
            ans++;
        }
    }
    cout << ans << el;
}
