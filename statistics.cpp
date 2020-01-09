#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mp;
    map<string,string>::iterator it;
     map<string,int>mps;
      map<string,int>::iterator its;
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        string key,value;
        cin >> key >> value;
        mp[key]=value;
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        mps[it->second]++;
    }
    int s=mps.size();
    int j=0;
    vector<int>v(s);
    for(its=mps.begin();its!=mps.end();its++)
    {
        v[j]=its->second;
        j++;
    }
   // s=v.size();
    sort(v.begin(),v.end());
    int max=v[s-1];
    for(its=mps.begin();its!=mps.end();its++)
    {
        if(its->second==max)
        {
        cout << its->first << endl;
        break;
        }
    }
    string k="football";
    cout << mps[k] << endl;
    return 0;
    
}
