#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    stack<int> s1,s2;
    for(int i = 0; i<n; i++)
    {
        if(s1.empty() && s2.empty())
        {
            s1.push(a[i]);
        }
        else if(!s1.empty() && s1.top()<a[i])
        {
            s2.pu

        }
    }
    return 0;
}