#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,q;
        cin >> n;
        map<int,int>mp;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        cin >> q;
        for(i=0;i<q;i++)
        {
           int y;
           cin >>y;
           if(mp[y] > 0)
           cout << "Yes" << endl;
           else
           cout << "No" << endl;
        }
    }
    return 0;
}
