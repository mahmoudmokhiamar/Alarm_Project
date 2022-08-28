#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{
    int t; cin >> t;
    ll low = -2e9, high = 2e9, mid;
    while(t--){
        string str;
        cin >> str;
        char choice; ll range;
        cin >> range >> choice;
        if((str == ">" && choice == 'Y') || (str == "<=" && choice == 'N'))
        {
            low = max(low,range+1);
        }
        else if((str == "<" && choice == 'Y') || (str == ">="  && choice == 'N'))
        {
            high = min(high,range-1);
        }
        else if((str == ">=" && choice == 'Y') || (str == "<" && choice == 'N'))
        {
            low = max(low,range);
        }
        else if ((str == "<=" && choice == 'Y') || (str == ">" && choice == 'N'))
        {
            high = min(high,range);
        }

    }
    mid = low + (high - low)/2;
    if(low>high)
    {
        cout << "Impossible " << el;
    }
    else
    {
       cout << high << el;
    }
}
