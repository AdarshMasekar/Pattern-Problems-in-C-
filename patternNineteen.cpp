/*
sample output
4
****
***
**
*

*/
#include <iostream>
using namespace std;

int main(){

    int i=0;
    int n;
    cin>>n;
    while(i<n){
        int j=0;
        while(j<n-i){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }

}