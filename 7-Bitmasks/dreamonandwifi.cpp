#pragma GCC optimize "trapv"
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define el '\n'
using namespace std;
const int N = 1e5+5;

int main()
{
    FIO
    string moves;
    string recived_moves;
    cin  >> moves >> recived_moves;
    int sent_pos = 0;
    int rec_pos = 0;
    int cnt = 0;
    int correct = 0;
    int wrong = 0;
    double prob,total_prob;
    total_prob = 0;
    for(char c : moves)
    {
        if (c == '+')sent_pos++;
        else sent_pos--;
    }
    for(char c : recived_moves)
    {
        if (c == '+')rec_pos++;
        else if (c == '-') rec_pos--;
        else cnt++;
    }
    int temp_pos = rec_pos;
    for(int msk = 0; msk<(1<<cnt); msk++){
        temp_pos = rec_pos;
        for(int i=0; i<cnt; i++){
            if((msk>>i)&1){temp_pos++;}
            else{temp_pos--;}
        }
        if(temp_pos == sent_pos){correct++;}
        else{wrong++;}
    }
    prob = (double) correct / (double)(1<<cnt);
    cout << fixed << setprecision(11) << prob << el;
}
