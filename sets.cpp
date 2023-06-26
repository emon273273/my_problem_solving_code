// #include<bits/stdc++.h>

// using namespace std;

// void print(set<string>&s){

//     // for(string value:s){

//     //     cout<<value<<endl;
//     // }

//     for(auto it=s.begin();it!=s.end();it++){

//         cout<<*it<<endl;
//     }
// }

// int main(){


//     set<string>s;

//     s.insert("abc"); //log(n)

//     s.insert("zsdf");

//     s.insert("bcd");


//     auto it=s.find("abc"); //logn

// // if(it!=s.end()){

// //     cout<<*it<<endl;
// // } // akta print korar jonno find kore


// //if jodi ami chai abc element ke delete korbo tokhn

//    if (it!=s.end()){

//         s.erase(it);
//     }

//  print(s);
// }



// q: given n strings, print unique strings in lexiographical order

//amra jani set always sorted hoy and duplicate avoid kore



#include <bits/stdc++.h>

using namespace std;


int main(){

    set <string> s;

    int n;

    cin>>n;

    for(int i=0;i<n;i++){

        string str;

        cin>>str;

        s.insert(str);
    }

    for(auto value:s){

        cout<<value<<endl;
    }
}
