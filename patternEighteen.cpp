/*
sample output
3
---*
--**
-***
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i=0;
    while(i<n){

        int dash=n-i;
        while(dash){
            cout<<"-";
            dash--;
        }
        int j=0;
        while(j<=i){
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}