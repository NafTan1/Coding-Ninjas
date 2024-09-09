#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    stack<int> st;
    while (k--)
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> q2;
    while (!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    while (!q.empty())
    {
        q2.push(q.front());
        q.pop();
    }
    return q2;
}
