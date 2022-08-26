#include <string>
#include <iostream>
#include <unordered_set>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    string letter;
    unordered_set<char>set;
    getline(cin,letter);
    int size1 = letter.size();
    for (int i = 0; i < size1; i++)
    {
        if(letter[i] == ',' || letter[i] ==  '{' || letter[i]  == '}' || letter[i] == ' ')continue;
        
        else
        set.insert(letter[i]);
    }
    int set_size = set.size();
    cout << set_size << "\n";
}