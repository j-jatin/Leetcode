
#include<bits/stdc++.h>
using namespace std;

int distance(vector<int> p1,vector<int> p2)
    {
        int x = p1[0],y=p1[1],a=p2[0],b=p2[1];
        return (x-a)*(x-a) + (y-b)*(y-b);
    }

void solve(vector<vector<int>>& arr , int &ans)
    {
        int n = arr.size(); // no of points in the plane !!

        for(int i = 0 ; i < n ; i++)
        {
            unordered_map<int,int>mp;
            for(int j = 0 ; j < n ; j++)
            {
                if(i!=j)
                {
                    int d = distance(arr[i],arr[j]);
                    mp[d]++;
                }
            }

            for(auto &i:mp)
            {
                if(i.second>=2)
                {
                    int t = i.second;
                    ans+=t*(t-1);
                }
            }
        }
    }

    int numberOfBoomerangs(vector<vector<int>>& points) {
        int cnt = 0;
        solve(points,cnt);
        return cnt;
        // i , j , k
        // distance(i,j)==distance(i,k)
    }

int main()
{
    return 0;
}