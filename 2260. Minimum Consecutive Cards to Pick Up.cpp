#include<bits/stdc++.h>
using namespace std;

    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mp; // value and it's corresponding latest index
        int ans = INT_MAX;
        
        for(int i = 0 ; i < cards.size() ; i++)
        {
            if(mp.find(cards[i])!=mp.end())
            {
                ans=min(ans,i-mp[cards[i]]+1);
            }
            mp[cards[i]]=i;
        }

        if(ans==INT_MAX)
            return -1;
        
        return ans;
    }

int main()
{
        // Input: nums = [2,4,3,7,10,6]
        // Output: 4
        vector<int>cards={3,4,2,3,4,7};
        cout<<minimumCardPickup(nums);
    return 0;
}
