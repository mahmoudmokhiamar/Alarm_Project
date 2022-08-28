#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;


int main(){
    FIO
    int t;cin >> t;
    string st;
    while(t--){
        string str;
        cin >> str;
        cout << str;
        int n = (int)str.size();
        int range;
        char choice;
        ll low = 0; ll high = 2e9; ll mid;
       for(int i = 0; i < n; i++ )
        {
            if(str[i] == ' ')continue;
            if(str[i] == '>' && str[i+1] == ' '){
                range = str[2] - '0';
                choice = str[4];
                if(choice == 'Y')
                    {low = range+1;
                    cout << "hey1"<<el;}
                else continue;
            }
            else if(str[i] == '>' && str[i+1] == '='){
                range = str[3] - '0';
                choice = str[5];
                if(choice == 'Y')
                    {low = range;
                    cout << "hey2"<<el;
                    cout << range << " " << choice << el;}
                else continue;
            }
            else if(str[i] == '<' && str[i+1] == ' '){
                range = str[2] - '0';
                choice = str[4];
                if(choice == 'Y')
                    {high = range - 1 ;
                    cout << "hey3"<<el;}
                else continue;
            }
            else if(str[i] == '<' && str[i+1] == '='){
                range = str[3] - '0';
                choice = str[5];
                if(choice == 'Y')
                    {high = range;
                    cout << "hey4"<<el;}
                else continue;
            }
        }

    }


}

