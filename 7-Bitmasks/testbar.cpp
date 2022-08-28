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


    int n = 5;
    int arr[n] = {113,35,126,157,113};
    int tar_sum = 544;
    int sum;
    bool flag = false;
        for(int msk=1; msk<(1<<n); msk++){
            sum = 0;
            for(int i=n; i>=0; i--)
            {
                if((msk>>i)&1){
                    sum += arr[i];
                    if(sum == tar_sum){
                        flag = true;
                        break;
                    }
                    cout << sum << el;
                }
            }
        }
        if(flag){cout << "YES" << el;}
        else{cout << "NO" << el;}

}
