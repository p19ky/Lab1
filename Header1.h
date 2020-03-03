#pragma once
#include <iostream>
#include <math.h>

class Solution
{
public:
    int findLengthOfLCIS(int[] foo) 
    {
        int ans = 0, anchor = 0;
        for (int i = 0; i < foo.length; ++i) {
            if (i > 0 && foo[i - 1] >= foo[i]) anchor = i;
            ans = math.max(ans, i - anchor + 1);
        }
        return ans;
    }

};