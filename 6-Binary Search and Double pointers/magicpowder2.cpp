#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define el '\n'
using namespace std;
const int N = 1e5+5;
const int M = 2e9+5;
long long A[N]; long long B[N];
long long n, k;

bool ok(int c){
    long long temp_k = k;
    for(int i=0; i< n; i++){
        long long diff =c *A[i] - B[i];
        if (diff > 0){
            temp_k -= diff;
        }
        if(temp_k < 0){
            return false;
        }
    }
    return true;

}
int main(){
    FIO
    cin >> n >> k;
    for(int i = 0; i< n; i++){
        cin  >> A[i];
    }for(int i = 0; i< n; i++){
        cin  >> B[i];
    }
    long long lo = 0; long long h = 2e9+5;
    long long ans; long long mid;
    while(lo<=h){
        mid = lo + (h-lo)/2;
        if(ok(mid)){
            lo = mid + 1;
            ans = mid;
        }
        else{
            h = mid - 1;
        }
    }
    cout << ans << el;
}

