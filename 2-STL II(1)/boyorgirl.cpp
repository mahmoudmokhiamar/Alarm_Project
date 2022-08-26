
#include <string>
#include <iostream>
#include <unordered_set>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    string id;
    unordered_set <char> st;
    getline(cin,id);
    for (int i = 0; i < id.size(); i++)
    {st.insert(id[i]);}
    int set_size = st.size();
    if (set_size%2 == 0)
    {cout << "CHAT WITH HER!" << "\n";}
    else
    {cout << "IGNORE HIM!" <<"\n";}
}