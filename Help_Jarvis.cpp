#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
    string s;
    cin >> s;
    int  f=0;
    int long long l=s.length();
    sort(s.begin(),s.end());
    for(i=0;i<l-1;i++)
    {
        if(s[i+1]-s[i]!=1)
        {
        f++;
        cout << "NO"<<"\n";
        break;
        }
    }
    if(f==0)
    cout << "YES"<<"\n";
    }
    return 0;
}
