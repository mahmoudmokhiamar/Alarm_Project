#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);  


int main()
{
    FIO

    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> ans1;
    vector<int> ans2;
    vector<int> ans3;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    ans1.push_back(v[0]); //making the first set. (all negative product).
    if (v[v.size()-1] == 0) //no positive numbers.
    {
        ans2.push_back(v[1]);
        ans2.push_back(v[2]);
        for (int i = 3; i < v.size(); i++) //taking all answers from after set 2.
            ans3.push_back(v[i]);
    }
        
    else
    {
        //if there are positive numbers.
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i]>0)
                ans2.push_back(v[i]);
            else if(v[i]<=0)
                ans3.push_back(v[i]);
        }
    }
    cout << ans1.size()<< " ";
    for (auto it: ans1)
        cout << it << " ";
    cout << "\n";
    cout << ans2.size() << " ";
    for (auto it: ans2)
        cout << it << " ";
    cout << "\n";
    cout << ans3.size() << " ";
    for (auto it: ans3)
        cout << it << " ";
}