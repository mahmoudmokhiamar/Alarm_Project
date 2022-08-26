#include <string>
#include <iostream>
#include <set>
#include <cctype>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    string str;
    set<string> st;
    
    while (cin>>str)
    {
        string word = "";
        for (auto c : str)
        {
            if (!isalpha(c))
            {
                continue;
            }
            else if(isalpha(c))
            {
                word.push_back(tolower(c));
            }
        }
        if (word!="")
        {
            st.insert(word);
        }
    }
    for (auto word : st)
    {
        cout << word << "\n";
    }
    
    
}