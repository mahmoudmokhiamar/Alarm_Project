#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int compare(int num, int x)
{

    return (num ^ x);
}

int main()
{
    FIO
    int t; cin >> t;
    int num1,num2;
    while(t--){
        cin >> num1 >> num2;
        int x = (num1 & num2);
        int result = (num1 ^ x) + (num2 ^ x);
        cout << result << el;

    }

}
