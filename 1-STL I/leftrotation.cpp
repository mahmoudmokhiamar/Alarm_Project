#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);  

int main()
{
    FIO

    int size,rotations,element;
    cin >> size >> rotations;
    vector<int> v(size);
    for (size_t i = 0; i < size; i++)
    {cin >> v[i];}
    
    for (int j = 0; j < rotations; j++)
    {
        element = v[0];
        for (int k = 0; k < size-1; k++)
            v[k] = v[k+1];   
        v[size-1] = element;
    }
    for (auto it : v)
        cout << it << " ";  
}