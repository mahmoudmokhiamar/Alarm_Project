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
    int n,B,C,z;
    B = C = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> z;
        if (z>=0)
        {
            B += z;
        }
        else if(z<0)
        {
            C += z;
        }
    }
    cout << B - C << el;
    
}