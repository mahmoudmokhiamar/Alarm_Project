#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main()
{


    int n = 3;
    vector<int> arr(n);
    int diff;
    int ans = 0;
    int tar_diff = 1;
    int l =5; int r = 6;
    multiset<vector<int>> st;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int msk=0; msk<(1<<n); msk++){
        vector<int>temp;
        for(int i = n - 1; i>=0; i--){
            if((msk>>i)&1){
                temp.push_back(arr.at(i));
            }
       }
       if(temp.size()>1){
        st.insert(temp);
       }
    }
    for(auto vec: st){
        int sum = 0;
        int size_vec = vec.size();
        for(int i=0; i<size_vec; i++)
        {
            sum += vec.at(i);
            cout << vec.at(i) << " ";

        }
        cout << el;
        cout << sum << el;
        if(sum>=l && sum <= r)
        {
            if(vec[0] - vec[size_vec-1]){ans++;}
            for(int i=0; i<size_vec-1; i++)
                {
                    diff = vec[i] - vec[i+1];
                    if(diff == tar_diff){
                        cout << diff << "  " << tar_diff << " " << el;
                        cout << ans << el;
                        ans++;
                    }
                }

        }

////            diff = *max_element(vec.begin(),vec.end()) - *min_element(vec.begin(),vec.end());
//            if(diff == tar_diff){
//            cout << diff << tar_diff << el;
//            ans++;
//            }
        }
     cout <<"answer : " <<ans << el;
    }
//    cout << ans << el;
//}
