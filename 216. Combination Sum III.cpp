#include<bits/stdc++.h>
using namespace std;

    void solve(int k , int n , vector<int>temp , vector<vector<int>> &ans , int sum , int curr)
    {
        // base case 
    	// if no of digits pick == k and their sum = required sum then !!
        if(temp.size()==k && sum==n)
        {
            ans.push_back(temp);
	            
	            // printing op // for debug only // not needed on LC
	            for(auto &i:temp)
	            	cout<<i<<" ";
	            cout<<endl;
            return;
        }

        // base case
        // if sum exceeds n no meaning of picking new nos
        // or if no of digits picked > k
        // or if no digit left to pick !!
        if(sum>n || temp.size()>k || curr>9)
            return;
        
        // not pick the curr number !!
        solve(k,n,temp,ans,sum,curr+1);
        // pick the curr number !!
        temp.push_back(curr);
        solve(k,n,temp,ans,sum+curr,curr+1);
    }

int main()
{
	int k , n;
	cin>>k;
	cin>>n;
	vector<vector<int>> ans;
    vector<int>temp;
    // order of picking nos does not matter as sum will stay same !!
    // can only pick a number once so only 2 cases pick or not pick !!
    solve(k,n,temp,ans,0,1);

    // return the ans vector in LC 

	return 0;
}