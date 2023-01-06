#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
    {
      if (a == 0)
        return b;
        
      return gcd(b % a, a);
    }

int minOperations(vector<int>& nums, vector<int>& numsDivide) 
    {
        int y = numsDivide[0];
        for(auto &i:numsDivide)   
            y=gcd(y,i);
        
        sort(nums.begin(),nums.end()); 

        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(y%nums[i]==0)
                return i;
        }
        return -1;
    }

int main()
{
	return 0;
}