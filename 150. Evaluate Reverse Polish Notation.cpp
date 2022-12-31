#include<bits/stdc++.h>
using namespace std;

// eval Reverse polish Noation
// main solving function 
int evalRPN(vector<string>& tokens) {
        
        if(tokens.size()==1)
            return stoi(tokens[0]);

        stack<long long>s;
        long long  ans;

        for(auto &c:tokens)
            {
                if(c!="+" && c!="-" && c!="*" && c!="/" )
                    {
                        int val = stoi(c);
                        s.push(val);
                    }
                else
                    {
                        long long b = s.top();
                        s.pop();
                        long long a = s.top();
                        s.pop();

                        if(c=="+")
                            ans=a+b;
                        else if (c=="-")
                            ans=a-b;
                        else if (c=="/")
                            ans=a/b;
                        else
                            ans=a*b;

                        s.push(ans);
                    }
            }

        return ans;
    }

int main()
{
    // reverse polish notation evaluation
    vector<string> arr = {"2","1","+","3","*"};
    int ans = evalRPN(arr);
    cout<<ans;
    return 0 ;
}