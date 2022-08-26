#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long
 
int main(){
    FIO
 
    stack<int>st;
    int t;
    cin>>t;
 
    while(t--){
        int n, x;
        cin>>n;
 
        if(n == 1){
            cin>>x;
            st.push(x);
        }
        else if(n == 2){
            if(st.size()){
                st.pop();
            }
        }
        else{
            if(st.empty()){
                cout<<"Empty!\n";
            }
            else{
                cout<<st.top()<<'\n';
            }
        }
    }
}
 
 