#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int ops[m] = {0};
    int arr[n+1]; //1 based array elements.
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    //insert something to save operation details.
    map<int,vector<int>> op_details; //saving operations.
    for(int i=1; i<=m; i++){
        int l,r,d;
        cin >> l >> r >> d;
        vector<int> temp(3);
        temp.push_back(l);
        temp.push_back(r);
        temp.push_back(d);
        op_details.insert({i,temp});
    }
    for(int i=0; i<k ; i++){
        int l,r;
        cin >> l >> r;
        l--,r--;
        ops[l]++;
        ops[r+1]--;
    }
    for(int i = 1; i< k; i++){ //prefix sum on operation array.
        ops[i] = ops[i-1] + ops[i];
    }
    int size_mp = (int)op_details.size();
    while(size_mp--){
        int l = op_details[size_mp][0];
        int r = op_details[size_mp][1];
        int d = op_details[size_mp][2];
        arr[l] += d;
        arr[r+1] -= d;
    }
    for(int i=1; i<=n ; i++){
        arr[i] = arr[i-1] + arr[i]; //prefix sum on array.
    }
    for(int i: arr){
        cout << i << " ";
    }
    cout << el;
}
