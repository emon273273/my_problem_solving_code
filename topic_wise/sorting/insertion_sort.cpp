

#include<bits/stdc++.h>
using namespace std;


void insertion_sort(int arr[],int n){


for(int i=0;i<=n-1;i++){

    int j=i;

    while(j>0 and arr[j-1]>arr[j]){

        int temp=arr[j-1];

        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
}

}

int main(){



int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){

    cin>>arr[i];
}

insertion_sort(arr,n);

for(int i=0;i<n;i++){

    cout<<arr[i]<<" ";
}

}


/*

tc->worst case and avarage is 0(n^2)

#and ami jodi already sorted kore dei while loop kokhoni cholbe na
tc->best case o(n)

*/
