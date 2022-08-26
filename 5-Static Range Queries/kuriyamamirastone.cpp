
#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    FIO
    int n;
    cin >> n;
    long long arr[n+1]={0};
    for(int i=1;i<=n;i++){
        cin >> arr[i];
    }
    long long pref1[n+1] = {0};
    long long pref2[n+1] = {0};
    for(int i = 1; i <=n; i++){
            pref1[i] = pref1[i-1] + arr[i];
    }
    sort(arr+1,arr+n+1);
    for(int i = 1; i <= n; i++){
            pref2[i] = pref2[i-1] + arr[i];
    }
    for(int i : pref1)
        cout << i <<  " ";
        cout << '\n';
    int q;cin >> q;
    while(q--){
        int choice,l,r;cin >> choice >> l >> r;
        if (choice == 1){
            cout << pref1[r] - pref1[l-1] << '\n';
            cout << pref1[r]  << " " << pref1[l-1] << "\n";
        }
        else if (choice == 2){
            cout << pref2[r] - pref2[l-1] << '\n';
        }
    }
}

