#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int q,cnt,element;
    string op;
    deque<int> deq;
    cin >> q;
    while (q--)
    {
        cin >> op;
        if (op == "reverse")
            cnt++;
        else if (cnt%2==0) //reverse operations is even elements are not reversed.
        {
            if (op == "back")
            {
                if (deq.empty())
                {
                    cout << "No job for Ada?\n";
                }
                else
                {cout << deq.back() << " \n";
                deq.pop_back();}
            }
            else if (op == "front")
            {
                if (deq.empty())
                {
                    cout << "No job for Ada?\n";
                }
                else
                {cout << deq.front()  << " \n";
                deq.pop_front();}
            }
            else if (op == "push_back")
            {  
                cin >> element;
                deq.push_back(element);
            }
            else if(op == "toFront")
            {
                cin >> element;
                deq.push_front(element);
            }
        }
        else if (cnt %2 !=0)//if number of reverses is odd every operation is reversed.
        {
            if (op == "back")
            {   if (deq.empty())
                {
                    cout << "No job for Ada?" << "\n";
                }
                else
                {cout << deq.front() << " \n";
                deq.pop_front();}
            }
            else if (op == "front")
            {
                if (deq.empty())
                {
                    cout << "No job for Ada?" << "\n";
                }
                else   
                {cout << deq.back()  << " \n";
                deq.pop_back();}
            }
            else if (op == "push_back")
            {  
                cin >> element;
                deq.push_front(element);
            }
            else if(op == "toFront")
            {
                cin >> element;
                deq.push_back(element);
            }
        }
        
    } 
}