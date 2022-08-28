#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);  

int main()
{   
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> pos(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pos[v[i]] = i;
        }
       
        cout << pos[3];
    
}