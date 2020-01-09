#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string m,n;
        map<char,int>kk;
        map<char,int>ll;
        cin >> m;
        cin >> n;
        int i,j,c=0;
        for(i=0;i<m.size();i++)
        {
          kk[m[i]]++; 
        }
        for(j=0;j<n.size();j++)
        {
            ll[n[j]]++;
        }
        for(i='a';i<='z';i++)
        {
            c=c+abs(kk[i]-ll[i]);
        }
        cout << c << endl;
    }
}
