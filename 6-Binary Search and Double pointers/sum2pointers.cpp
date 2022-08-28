#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
int main(){
    int n,s; cin >> n >> s;
    int arr[n];
    for(int i = 0; i< n ; i++){
        cin >> arr[i];
    }
    int k, j;
    k = 0; j = n-1;
    for(int i = 0; i< n ; i++ ){
        if(k != j && arr[k] + arr[j] == s){
            cout << arr[k] << " " << arr[j] << el;
            i++;j--;
        }
        else if(arr[k] + arr[j] > s){
            j--;
        }
        else{
            k++;
        }
    }

    return 0;
}
