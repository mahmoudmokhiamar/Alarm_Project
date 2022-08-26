#pragma GCC optimize "trapv"
#include <iostream>
#include <map>
#include <vector>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
int main()
{
    FIO
    int n,m,k;
    cin >> n >> m >> k;
    vector <int> ops(m+1);
    vector<int> arr(n+1); //1 based array elements.
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    map<int,vector<int>> op_details;
    for(int i=1; i<=m; i++){
        int l,r,d;
        cin >> l >> r >> d;
        vector<int> temp;
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
    for(int i=1; i<=size_mp; i++){    
        int l = op_details[i][0];
        int r = op_details[i][1];
        int d = op_details[i][2];
        int new_d = ops[i]*d;
        arr[l] += new_d;
        arr[r+1] -= new_d;
    }
    for(int i=1; i<=n ; i++){
        arr[i] = arr[i-1] + arr[i]; //prefix sum on array.
    }
}
