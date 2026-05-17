#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout<<"enter n:";
  cin>>n;
  
  int arr[n];
  cout<<"enter elements:";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int hash[100]={0};
  for(int i=0;i<n;i++){
      hash[arr[i]]++;
  }
  int q;
  cout<<"enter q";
  cin>>q;
  while(q--){
      int number;
      cin>>number;
      
      cout<<hash[number]<<endl;
  }

    return 0;
}