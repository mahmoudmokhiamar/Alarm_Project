 
    while ((int)q.size()>1)
    {
        q.front().first -= cand;
        if (q.front().first <=0)
        {
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
    }
    cout << q.front().second << '\n';