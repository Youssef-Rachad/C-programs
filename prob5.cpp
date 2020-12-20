#include <bits/stdc++.h>
using namespace std;
#define ll long long
//Permutations
//print all even then all odd
int main(){
   ll n;
   cin>>n;
   if(n==1)
    cout<<n;
   if(n<4){
       cout<<"NO SOLUTION";
   }else
   {
    int i=2;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }
    i=1;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }   
   }
   
   
   }
   
    