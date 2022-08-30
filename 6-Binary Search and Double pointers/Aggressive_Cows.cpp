#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main(){

    FIO

    int x; cin >> x;

    while(x--){
        int n,c; cin >> n >> c;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int low = 0; int high = 1e9+5;
        int mid; int ans;

        while(low<=high){
            mid = low + (high - low)/2;

            int nxt = - 1, num = 0;

            for(int i=0; i<n; i++){
                if(arr[i] >=nxt){
                    num++;
                    nxt = arr[i] + mid  ;
                }

            }
            if(num>=c){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }
        cout << ans << el;

    }



}
