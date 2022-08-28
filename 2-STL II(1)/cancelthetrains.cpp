#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    FIO
    int t,left,down,num_train,ans;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> left >> down;
        unordered_multiset<int>st;
        for (int i = 0; i < left+down; i++)
        {
            cin >> num_train;
            st.insert(num_train);
        }

        for(int el : st)
        {
            if(st.count(el) > 1)
                ans++;
        }
        cout << ans/2 << '\n';
    }

}
