#include <string>
#include <iostream>
#include <unordered_set>
#include <stack>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*
4
alex
ivan
roman
ivan*/
/*ivan
roman
alex*/
int main()
{
    int t;
    stack<string> s;
    unordered_set<string> st;
    cin >> t;
    while (t--)
    {

        string name;
        cin >> name;
        s.push(name);
    }
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (st.count(s.top())!=0)
        {
            s.pop();
        }
        else
        {   cout << s.top() << "\n";
            st.insert(s.top());
            s.pop();
        }
    }

    
    
}
