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
        int n;string str;
        cin >> n;
        cin >> str;
        vector<int> v(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            v[i] = str[i] - '0';
        }
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                v[i] += 1; 
                ans.push_back(1);
    
                continue;
            }
            if (v[i-1] == 2 && v[i] == 1) 
            {
                v[i] += 0;
                ans.push_back(0);
               

            }
            else if (v[i-1] == 1 && v[i] == 0)
            {
                v[i] += 0;
                ans.push_back(0);
               
            }
            else if ((v[i-1] == 1 && v[i] == 1) || (v[i-1] == 2 && v[i] == 0))
            {
                v[i] += 1;
                ans.push_back(1);
              
            }
            else
            {
                v[i] += 1;
                ans.push_back(1);    
            }
        }
        for (auto i : ans)
        {
            cout << i;
        }
        cout << el; 
    }   
}
       