#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    FIO
    unordered_map<char,pair<char,char>> m1;
    char shift;
    string converted;
    cin >> shift;
    cin>>converted;
    string str= "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=1; i<str.size()-1;i++)
    {
        m1.insert({str[i],{str[i-1],str[i+1]}});
    }
    m1['q'].first = 'F';
    m1['q'].second = 'w';
    m1['/'].second = 'F';
    m1['/'].first = '.';

    if(shift == 'R')
    {
            for(int i =0; i<converted.size();i++)
            {
                cout << m1[converted[i]].first;
            }
    }
    else
    {
         for(int i =0; i<converted.size();i++)
            {

                cout << m1[converted[i]].second;
            }
    }
}
