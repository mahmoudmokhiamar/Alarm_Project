#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    stack <int> st;
    string str;
    cin >> str;
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (st.empty() || str[i] != st.top()) //pushing elements into stack.
        {
            st.push(str[i]);
        }
        else if(!st.empty() && str[i] == st.top()) //if elements are adjacent and equal pop.
            st.pop();
    }
    if (st.empty())
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
}