
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
    vector<ll> sup_luck_nums;
    for(int i=2; i<=10; i++){
    for(int msk=0; msk<(1<<i); msk++){
        int cnt = 0;
        string luck_num = "";
        for(int j = 0; j < i; j++){
            if((msk>>j)&1){luck_num +='4';cnt++;}
            else{luck_num+='7';cnt--;}
        }
        ll num = stoll(luck_num);
        if(!cnt){sup_luck_nums.push_back(num);}
      }
   }
   ll given_num = stoll(number);
   ll low = 0; ll high = sup_luck_nums.size()-1; ll mid;
   ll ans;
   while(low<=high){
        mid = low + (high - low)/2;

        if(sup_luck_nums[mid]>given_num){
            ans = sup_luck_nums[mid];
            high = mid - 1;
        }
        else if (sup_luck_nums[mid] < given_num){
                low = mid + 1;
        }
    }
    cout << ans << el;
}
