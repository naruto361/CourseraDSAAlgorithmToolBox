#include <bits/stdc++.h>

using namespace std;
bool compare(string x,string y)
{
    string xy=x.append(y);
    string yx=y.append(x);
    if(xy>yx)
    return true;
    else return false;
}
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    cin>>s[i];

    sort(s,s+n,compare);
    for(int i=0;i<n;i++)
    cout<<s[i];
}
