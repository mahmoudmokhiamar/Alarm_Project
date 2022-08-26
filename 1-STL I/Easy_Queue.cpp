#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    FIO

    queue <int> que;
    int q,choice,element;
    cin >> q;
   
    while (q--)//keeps running until number of queries is 0; condition is false.
    {
        cin >> choice;
        if (choice == 1)
        {
            cin >> element;
            que.push(element);
        }
        else if(choice == 2)
        {
            if (!que.empty())
            {
                que.pop();
            }
        }
        else
        {
            if (que.empty())
            {
               cout << "Empty!\n";
            }
            else
                cout << que.front() << "\n";
        }
    } 
}