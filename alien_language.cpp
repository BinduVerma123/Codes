#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int s1[150]={0},s2[150]={0};
        string a,b;
        cin >> a;
        cin >> b;
        int i,flag=0;
        for(i=0;i<a.size();i++)
        {
          s1[a[i]]++;  
        }
        for(i=0;i<b.size();i++)
        {
            s2[b[i]]++;
        }
        for(i='a';i<='z';i++)
        {
            if(s1[i]!=0 && s2[i]!=0)
            {
            flag=1;
            break;
            }
            
        }
        if(flag==1)
        cout << "YES" << endl;
        else 
        cout << "NO" << endl;
    }
    return 0;
}
