#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    //Write your code here


  int n;

  cin>>n;

  int arr[n];

  for(int i=0;i<n;i++){

    cin>>arr[i];
  }


map<int,int>mpp;

for(int i=0;i<n;i++){

  mpp[arr[i]]++;
}
  int q;
  cin>>q;

  while(q--){

    int number;

    cin>>number;

    cout<<mpp[number]<<endl;
  }

  cout<<endl;

  vector<int>ans;

  for(auto &a:mpp){
ans.push_back(a.second);

  }

  for(auto i:ans){

    cout<<i<<" ";
  }
cout<<endl;
  sort(ans.begin(),ans.end());

  for(auto i:ans){

    cout<<i<<" ";
  }


}

//n:b map always sorted order a store kore

