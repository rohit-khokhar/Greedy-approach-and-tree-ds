#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){

      map<int, string> m;
      
      m[101] = "rohan";
      m[102] = "rahul";
      m[103] = "rohit";


    cout << m[103] << endl;

    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl; 
    }
    return 0;
}
