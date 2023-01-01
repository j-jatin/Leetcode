#include<bits/stdc++.h>
using namespace std;

string getHint(string secret, string guess) {
       string ans="";
       int x = 0 , y = 0;
       int n = guess.size();
       unordered_map<char,int>mp;

       for(int i = 0 ; i < n ; i++)
       {
           if(guess[i]==secret[i])
                x++;
           else
                mp[secret[i]]++; 
       }

       for(int i = 0 ; i < n ; i++)
       {
           if(guess[i]!=secret[i])
           {
               char c = guess[i];
               if(mp.find(c)!=mp.end())
               {
                   y++;
                   mp[c]--;
                   if(mp[c]==0)
                        mp.erase(c);
               }
           }
       }
       ans+=to_string(x);
       ans+='A';
       ans+=to_string(y);
       ans+='B';
       return ans; 
    }

int main()
{
    string ans = getHint("1807","7810"); // 1A3B should be the output of this specific input !!
    cout<<ans;
    return 0 ;
}
