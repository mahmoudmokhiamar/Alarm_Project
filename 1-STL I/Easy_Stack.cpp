#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    FIO

    
    stack <int> st;
    int q,choice,element;
    cin >> q;
   
    while (q)//keeps running until number of queries is 0; condition is false.
    {
        cin >> choice;
        if (choice == 1)
        {
            cin >> element;
            st.push(element);
        }
        else if(choice == 2)
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            if (st.empty())
            {
               cout << "Empty!\n";
            }
            else
                cout << st.top() << "\n";
        }
        q--;  
    } 
}