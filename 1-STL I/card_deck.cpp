#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);  

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> pos(n+1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            pos[v[i]] = i;
        }
        int end = n;
        for (int i = n; i >= 1; i--)
        {
            if (pos[i] >=end)
                continue;

           for (int z = pos[i]; z < end; z++)
           {
                cout << v[z] << " ";
           }
           end = pos[i];
        }
        cout << "\n";
    }
    
}