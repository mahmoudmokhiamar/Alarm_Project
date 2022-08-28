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

    int n; cin >> n;
    int arr[n];
    int ans = INT_MIN;
    for(int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    for(int msk=1; msk < (1<<n); msk++){
            int prev = -1, cnt = 0;
        for(int i=0;i < n; i++){
            if((msk>>i)&1)
            {
                if(arr[i] > prev){prev = arr[i];cnt++;}
            }
        }
        ans = max(cnt,ans);
    }

    cout << ans << el;

}
