#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);  

int main()
{
    FIO
    int size,no_stairways,no_stairs;
    no_stairs = 1;
    cin >> size;
    vector<int> v(size);
    for (int i = 0; i < size; i++)
        cin >> v[i];
    no_stairways = count(v.begin(),v.end(),1);
    cout << no_stairways << " " << "\n";
    
    for (int i = 1; i < size; i++)
    {
        if (v[i] == 1)
        {
            cout << no_stairs << " ";
            no_stairs = 1;
            continue;
        }
        no_stairs++;   
    }
    cout << no_stairs << " ";
}