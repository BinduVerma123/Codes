#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int c=0,i;
        map<int,int>mp;
       // map<int,int>::iterator it;
        for(i=0;i<str.size();i++)
        {
            mp[str[i]]++;
        }
        for(i='a';i<='z';i++)
        {
            if(mp[i]%2==1)
            c++;
        }
        if(c>=1)
        {
        c--;
        cout << c << endl;
        }
        else
        cout << '0' << endl;
        
    }
    return 0;
}
