#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int c=0,d=0,e=0,f=0,g=0;
   // char a[n];
//    for(i=0;i<n;i++)
//    {
//      cin >> a[i];  
//    }
string str;
cin >> str;
for(i=0;i<str.size();i++)
{
    if(str[i]=='a')
    c++;
    else if(str[i]=='e')
    d++;
    else if(str[i]=='i')
    e++;
    else if(str[i]=='o')
    f++;
    else if(str[i]=='u')
    g++;
}
if(c>0 && d >0 && e>0 && f>0 && g>0)
cout << "YES" << endl;
else
cout << "NO" << endl;
return 0;
}
