#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main()

{
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL); 
    string s;
    int q;
    cin >> q;
    getline(cin,s);
    while(q--)
    {  
        stack<char> st;
        getline(cin,s);
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '(' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ']')
            {
            if (!st.empty() && st.top() == '[')
                st.pop();
            else if(st.empty())
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                st.pop();
                else if (st.empty())
                    st.push(s[i]);
            }
        }
        if (st.empty())
        {
            cout << "Yes\n";
        } 
        else
        {
           cout << "No\n";
        }
    }
}