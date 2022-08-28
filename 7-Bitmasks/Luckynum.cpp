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
    string number; cin >> number;
    int sz = (int)number.size();
    ll ans = 99999999999999999999;
    for(int i=sz; i<=10; i++){
    for(int msk=0; msk<(1<<i); msk++){
        int cnt = 0;
        string luck_num = "";
        for(int j = 0; j < i; j++){
            if((msk>>j)&1){luck_num +='4';cnt++;}
            else{luck_num+='7';cnt--;}
        }
        ll suplucknum = stoll(luck_num);
        ll giv_num = stoll(number);
        if(!cnt && suplucknum >= giv_num){
            ans = min(ans, suplucknum);
        }
        else{luck_num = "";} //continue looking.
    }
  }
  cout << ans << el;
}
