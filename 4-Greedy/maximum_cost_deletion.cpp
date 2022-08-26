#pragma GCC optimize "trapv"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el "\n"
using namespace std;
int main()
{
    FIO
    int t;
    cin >> t;
    while (t--)
    {
        int a,n,b,m,score; string str;
        cin >> n >> a >> b;
        cin >> str;
        vector<int> vec(n);
        m=0;
        for (int i = 0; i < n; i++)
        {    
            vec[i] = str[i] - '0';
        }
        // cout << m << " " << a << " " << n << " " << b << el;
        m = unique(vec.begin(), vec.end()) - vec.begin();
        cout << m << el;
        score = n*a+max(n*b,((m/2)+1)*b);
        cout << score << el;
    }
    
}
       