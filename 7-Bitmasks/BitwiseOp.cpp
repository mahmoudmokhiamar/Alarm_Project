#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;



int main()

{
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a;
    int b;
    for(int msk = 0; msk<(1<<n); msk++){
        for(int i=n-1; i>=1; i--){
            if((msk>>i)&1)
            {
                if((i^n>=i) && (i^n)<=n){
                    a = i;
                    b = i ^ n;
                }

            }
        }
    }
    cout << b << " " << a << el;

    }
}
