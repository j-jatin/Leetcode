#include<bits/stdc++.h>
using namespace std;

long long count(int n)
    {
        long long v = 0;
        while(n>0)
        {
            v+= pow(10,n%10);
            n=n/10;
        }
        return v;
    }

    bool reorderedPowerOf2(int n) {
        // digits in any order !!
        // to make power of 2 
        // 1 2 4 8 16 32 64 128......
        long long temp = count(n);
        
        for(int i = 0 ; i < 32 ; i++)
        {
            if(temp==count(1<<i))
                return true;
        }
        return false;
    }

int main()
{
    cout<<reorderedPowerOf2(10);
        // output must be false;
    return 0;
}
