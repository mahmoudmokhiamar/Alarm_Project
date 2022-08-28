#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main()
{
//algorithm brute force every element in the array and see if its sum is going to be equal to
// desired sum.
    FIO
    int t; cin >> t;
    vector<string>ans;
    while (t--){
        ll tar_sum,sum;
        int n;
        cin >> tar_sum>>n;
        int arr[n];
        for(int &i:arr){cin >> i;}
        bool flag = false;
        for(int msk=0; msk<(1<<n); msk++){
            sum = 0;
            for(int i=n; i>=0; i--)
            {
                if((msk>>i)&1){
                    sum += arr[i];
                    if(tar_sum == 0 || sum == tar_sum){
                        flag = true;
                        break;
                    }
                }
            }
        }
        if(flag){cout << "YES" << el;}
        else{cout << "NO" << el;}
    }
}
