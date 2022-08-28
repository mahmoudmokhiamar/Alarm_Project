#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);  


int main()
{
    FIO

    int q,choice,element;
    cin >> q;
    stack <int> st;
    while (q--)//keeps running until number of queries is 0; condition is false.
    {
        cin >> choice;
        if (choice == 1)
        {
            cin >> element;
            st.push(element);
        }
        else if(choice == 2)
        {
            if (st.empty())
            {
                cout << "Empty!" << endl;
                continue; //onto the next querie.
            }
        }
        else if(choice == 3)
        {
            if (!st.empty())
            {
                cout << st.top() << endl;
            }
        }  
    } 
}