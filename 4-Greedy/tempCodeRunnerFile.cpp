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
    int t,n,a,b;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        vector <int> v(n);
        int score = 0;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            v[i] = str[i] - '0';
        }
        
        
        if (a>=0 && b >= 0)
        {
            if (n == 1)
            {
                if(v[0] == 0)
                    score += count(v.begin(),v.end(),0) * a + b;
                else
                    score += count(v.begin(),v.end(),1) * a + b;
            }
            else
            {score += count(v.begin(),v.end(),1) * a + b;
            score += count(v.begin(),v.end(),0) * a + b;}
            cout << score << el;
        }
        else if(a<0 && b>=0)
        {
            score += (a * 1 + b) * n;
            cout << score << el;
        }
        else if(a>=0 && b<0)
        {
            if (n == 1)
            {
                if(v[0] == 0)
                    score += count(v.begin(),v.end(),0) * a + b;
                else
                    score += count(v.begin(),v.end(),1) * a + b;
            }
            else
                {score += count(v.begin(),v.end(),1) * a + b;
                score += count(v.begin(),v.end(),0) * a + b;}
            cout << score << el;
        }
        else
        {
            score += (a*1+b)*n;
            cout << score << el;
        }
    }
    
}