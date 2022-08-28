
#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

int main()
{
    queue<pair<int,int>> q;
    int n,cand,idx,kid;
    cin >> n >> cand;
    idx = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> kid;
        pair <int,int> p = make_pair(kid,idx);
        q.push(p);
        idx++;        
    }
    while ((int)q.size()>1)
    {
        q.front().first -= cand;
        if (q.front().first <=0)
        {
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
    }
    cout << q.front().second << '\n';
    
}