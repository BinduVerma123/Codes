#include<bits/stdc++.h>
using namespace std;
// typedef std::map<std::string, int> StrMap; 
int main()
{
   int t,j;
   string h;
   cin >> t;
   unordered_map<string,int>str;
   unordered_map<string,int>::iterator i;
   for(j=0;j<t;j++)
   {
       cin >> h;
       str[h]++;
   }
   for(i=str.begin();i!=str.end();i++)
   {
       cout << i->first << " " << i->second << endl;
   }
   return 0;
}
