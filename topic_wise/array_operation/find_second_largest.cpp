#include<bits/stdc++.h>

using namespace std;

int main(){


    vector<int>arr={4,3,3,7,7};



    sort(arr.begin(),arr.end()); //7

   int temp=arr[arr.size()-1];

   cout<<temp<<endl;

   int s=0;

   for(int i=arr.size()-2;i>=0;i--){

    if(arr[i]!=temp){

       s=arr[i];
       break;
    }
   }

   cout<<s<<endl; //4
}
