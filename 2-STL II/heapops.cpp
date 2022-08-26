#include <string>
#include <iostream>
#include <queue>
#include <vector>
#include <limits>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//need to count number of op and save them somewhere then print them later with the counter.
int main()
{
    FIO
    priority_queue<int, vector<int>, greater<int>> mypq;
    vector<pair<string,int>> ans;
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        string op;
        cin >> op;
        if (op == "insert")
        {
            cin >> x;
            mypq.push(x);
            ans.push_back(make_pair("insert",x));
            
        }        
        else if(op == "getMin")
        {
                cin >> x;
                if (!mypq.empty() && mypq.top() == x)
                {
                    ans.push_back({"getMin",x});
                }
                else
                    {
                        while (!mypq.empty() && mypq.top() < x)
                        {
                            mypq.pop();
                            ans.push_back(make_pair("removeMin",-2147483648));
                        }
                        if (!mypq.empty() && mypq.top() == x)
                        {
                            ans.push_back(make_pair("getMin",x));
                        }
                        else
                        {
                            mypq.push(x);
                            ans.push_back(make_pair("insert",x));
                            ans.push_back(make_pair("getMin",x));
                        }
                        
                    }
                
        }
        else if (op == "removeMin")
        {
            if (!mypq.empty())
            {
                mypq.pop();
                
                ans.push_back(make_pair("removeMin",-2147483648));
            }
            else if(mypq.empty())
            {
                ans.push_back(make_pair("insert",0));
                ans.push_back(make_pair("removeMin",-2147483648));

            }
        }
        
    }
    cout << ans.size() << "\n";
    for (auto p : ans)
    {
        if (p.second != -2147483648)
        {
            cout << p.first << " " << p.second <<"\n";
        }
        else
            cout << p.first << "\n";
        
    }
       
}