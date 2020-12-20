#include <bits/stdc++.h>
using namespace std;
#define ll long long
//Increasing array
//my take
/*int main(){
   ll n,c=0,ans=0;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       ll m;
       cin>>m;
       if(m>c){
           c=m;
       }else{
           ans+= c-m;

           }
       }
   cout<<ans;}*/

//instead use max()
int main(){
   ll n,c=0,ans=0;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       ll m;
       cin>>m;
       c=max(m,c);
       ans+=c-m;
       }
   cout<<ans;}
   
    