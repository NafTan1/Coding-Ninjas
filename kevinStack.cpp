#include <bits/stdc++.h> 
string kevinStackProblem(string &s)
{
	// Write your code here.
	stack<int> st; 
    string x;    
    for (char c : s)
    {
        st.push(c);
    }
    while (!st.empty())
    {
        x += st.top();
        st.pop();
    }
    return x;
}

