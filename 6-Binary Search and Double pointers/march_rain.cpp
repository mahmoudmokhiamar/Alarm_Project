    #include <bits/stdc++.h>
    #pragma GCC optimize "trapv"
    #define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    #define ll long long
    #define el '\n'
    using namespace std;
    const int N = 1e5+5;
    bool OK(int l,int arr[] ,int n, int k){
        int nxt = 0;
        for(int i=0; i<k; i++){
            nxt = upper_bound(arr, arr+n, arr[nxt]+l-1) - arr;
            if(nxt == n){
                 return 1;
            }
        }
        return 0;
    }

    int main(){
        FIO
        int t; cin >> t;
        while(t--){
            int n,k; cin >> n >> k;
            int arr[n];
            for(int i=0; i < n; i++){
                cin >> arr[i];
            }
            int low = 0; int high = 1e9; int mid;
            int ans;

            while(low<= high){
                mid = low + (high - low)/2;
                if (OK(mid, arr, n, k)){
                    ans = mid;
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            cout << ans << el;
        }
    }
