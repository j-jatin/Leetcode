 
#include<bits/stdc++.h>
using namespace std;
 
 int distance(vector<int>p1, vector<int>p2)
    {
        int x = p1[0],y=p1[1],a=p2[0],b=p2[1];
        return (x-a)*(x-a) + (y-b)*(y-b);
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_map<int,bool>mp;
        //sides
        mp[distance(p1,p2)]=1;
        mp[distance(p2,p3)]=1;
        mp[distance(p3,p4)]=1;
        mp[distance(p4,p1)]=1;
        // diaognals
        mp[distance(p1,p3)]=1;
        mp[distance(p2,p4)]=1;

        if(mp.find(0)==mp.end() && mp.size()==2)
            return true;

        return false;
    }

int main()
{
    // call the solve function here 
}