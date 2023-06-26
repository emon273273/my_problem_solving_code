#include <bits/stdc++.h>

using namespace std;

int main(){

// unorderd set sekhanei use korbo jekhane amar kono ordering er pera nai


unordered_set<string>s;

int n;

cin>>n;

for(int i=0;i<n;i++){

    string str;

    cin>>str;

    s.insert(str);


}
int q;

cin>>q;

while(q--){

    string ss;
    cin>>ss;
    if(s.find(ss)==s.end()){

        cout<<"no"<<endl;
    }else{

        cout<<"yes"<<endl;
    }
}

}
