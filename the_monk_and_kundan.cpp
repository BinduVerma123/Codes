#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
int space;
string s1= "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char s;
map<char,int>mp;
for(int i=0;s1[i]!='\0';i++)
{
mp[s1[i]] = i;
}

int t;
int sum;
int c;
cin>>t;
scanf("%c",&s);
for(int i=0;i<t;i++)
{
c=0;space=0;sum=0;
getline(cin,str); 
for(int i=0;str[i]!='\0';i++)
{
if(str[i]==' ')
{
c=0;
space++;
}
if(str[i]!=' ')
{

sum = sum + (c+mp[str[i]]);
c++;
}
}
cout<<sum*(space+1)<<endl;
}
}
