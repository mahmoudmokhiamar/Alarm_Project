#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);cin.tie(NULL);  

    string str;
    int q;
    cin >> q;
    getline(cin,str);

    while(q--)
    {
        getline(cin,str);
        stack <char> st;
        bool valid = true;
        for (auto c : str)
        {
            if (c == '(' || c=='[')
            {
                st.push(c);
            }
            else if (st.empty())
            {
                valid = false; break;
            }
            else if ((st.top() == '(' && c ==')') || (st.top())=='[' && c == ']')
            {
                st.pop();
            }
            else
            {
                valid = false; break;
            }
        }
        if (valid && st.empty())
        {
            cout << "Yes\n";
        }
        else
            cout << "No\n";
        
    }
}
