#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
int main(){
    FIO
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++ ){cin >> arr[i];}
    sort(arr,arr+n);
    int size = n;
    int k = 0 ; int j = 0 + ((n-0)/2);
    for(int i = 0; i < n ; i++){
        if(j < n && k < n/2 && arr[j] >= 2*arr[k] ){
            size--;
            j++;
            k++;
        }
        else if(j < n && k < n/2 && 2*arr[k] > arr[j]){
            j++;
        }
    }
    cout << size << el;
}

