#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;
ll calc(string number, string formula){
    int n = number.size();
    string ans = "";
    for(int i=0; i<n-1; i++){
        ans += number[i];
        ans += formula[i];
    }
    ans += number[n-1];
    ll sum = 0;
    string temp = "";
    for(char z : ans){
        if(z == '#'){continue;}
        else if (z == '+'){
            sum += stoll(temp);
            temp = "";
        }
        else
        {
            temp += z;
        }
    }
    sum += stoll(temp); //to add last part of the string curr.

    return sum ;
}

int main(){


    string num;cin >> num;

    int n = (int)num.size();
    string form(n-1,'#');
//    cout << num << " " << form << el;
    ll ans = 0;
    for(int msk = 0; msk < (1<<n - 1) ; msk++){
        string temp_form = form;
        for(int i = 0; i < n - 1 ; i++){
            if((msk>>i)&1){
                    temp_form[i] = '+';
            }
        }
        ans += calc(num, temp_form);
    }
    cout << ans << el;
}
