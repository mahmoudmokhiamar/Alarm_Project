#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
int mid = 0;

int main(){


    int arr[]= {2,5,8,12,16,23,38,56,72,91};
    int low = 0;
    int high = 9;
    bool found = false;
    int tar = 38;
    while(low<=high){
        mid = low + (high-low)/2;
        if(arr[mid] == tar){
            found = true;
            cout << mid << el;
            break;
        }
        else{
            if(arr[mid]<tar){
                low = mid + 1;
            }
            else if (arr[mid]>tar){
                high = mid - 1;
            }
        }
    }

}
