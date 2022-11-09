#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //bruteforce Huzaifa
   
      int n,k=0;
      cin>>n;
      int array[n];
      
      for(int i=0;i<n;i++){
        cin>>array[i];
      }
      for(int i=0;i<n;i++){
        if(array[i]%2==0){
          cout<<array[i]<<" ";
        }
      }
      cout<<endl;
      for(int i=0;i<n;i++)
        if((array[i]%2)!=0){
          cout<<array[i]<<" ";
        }
    
    return 0;
  }