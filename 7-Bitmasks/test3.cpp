#include <bits/stdc++.h>
#pragma GCC optimize "trapv"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main()


{

    int cnt = 2;
      for(int msk = 0; msk<(1<<cnt); msk++)
      {
        for(int i=0; i<cnt; i++){
            if((msk>>i)&1){cout << "1";}
            else{cout << "0";}
       }
       cout << el;


}
}
