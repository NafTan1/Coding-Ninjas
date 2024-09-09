/*
Problem Link: https://www.naukri.com/code360/problem-of-the-day/easy
*/

#include <bits/stdc++.h>
vector<int> giftsLeft(int n, int k, int q, vector<int> d)
{
    // Write your code here.
    int currentGifts = n;
    for (int i = 0; i < q; i++)
    {
        int demand = d[i];
        if (demand > currentGifts)
        {
            d[i] = -1;
        }
        else
        {
            currentGifts -= demand;
            if (currentGifts < k)
            {
                currentGifts = n;
            }
            d[i] = currentGifts;
        }
    }
    return d;
}