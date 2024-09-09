#include <bits/stdc++.h>
// Implement class for minStack.

class minStack
{
    // Write your code here.

public:
    stack<int> st, mn;

    // Constructor
    minStack()
    {
        // Write your code here.
    }

    // Function to add another element equal to num at the top of stack.
    void push(int num)
    {
        // Write your code here.
        if (st.empty())
        {
            st.push(num);
            mn.push(num);
            return;
        }
        mn.push(min(num, mn.top()));
        st.push(num);
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        // Write your code here.
        if (st.empty())
            return -1;
        int x = st.top();
        st.pop();
        mn.pop();
        return x;
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        // Write your code here.
        if (st.empty())
            return -1;
        return st.top();
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        // Write your code here.
        if (mn.empty())
            return -1;
        return mn.top();
    }
};