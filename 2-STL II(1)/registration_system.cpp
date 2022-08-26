#pragma GCC optimize "trapv"
#include <iostream>
#include <unordered_map>
#include <string>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    FIO
    unordered_map <string,int> m;
    int q;
    cin >> q;
    string str;
    while (q--)
    {
        cin >> str;
        if (m.count(str)!=0)
        {
            m[str]++;
            cout << str << m[str] << "\n";
        }
        else   
        {
            m.insert({str,0});
            cout << "OK" << "\n";
        }
    }
    
}