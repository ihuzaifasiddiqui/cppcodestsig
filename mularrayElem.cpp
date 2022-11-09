#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //Huzaifa
    int t,n,ans=1;
    
    cin>>t;
    while(t--){
     cin>>n;
     int array[n];
     for(int i =0;i<n; i++)
       cin>>array[i];
     for(int i =0; i<n ; i++){
         ans *= array[i];
     }
     cout<<ans<<endl;
     ans=1;
    }
    return 0;
  }