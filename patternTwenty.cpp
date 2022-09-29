/* 
samle output
3
***
-**
--*
*/

#include<iostream>
using namespace std;

int main(){

    int i=0;
    int n;
    cin>>n;

    while(i<n){
        int dash=0;
        while(dash<i){
            cout<<"-";
            dash++;
        }
        int j=0;
        while(j<n-i){
            cout<<"*";
            j++;
        }
        
        i++;
        cout<<endl;
    }
}