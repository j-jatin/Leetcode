#include<bits/stdc++.h>
using namespace std;

    void solve(set<int> &s, int x)
    {
        while(x%2==0)
        {
            x=x/2;
            s.insert(2);
        }

        for(int i = 3 ; i <= sqrt(x) ; i++)
        {
            while(x%i==0)
            {
                s.insert(i);
                x=x/i;
            }
        }

        if(x>2)
            s.insert(x);
    }

    int distinctPrimeFactors(vector<int>& nums) {
        set<int>p_factors;

        for(auto &i:nums)
        {
            solve(p_factors,i);
        }

        return p_factors.size();
    }

int main()
{
        // Input: nums = [2,4,3,7,10,6]
        // Output: 4
        vector<int>nums={2,4,3,7,10,6};
        cout<<distinctPrimeFactors(nums);
    return 0;
}
