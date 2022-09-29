/* 
sample output
4
1111
 222
  33
   4
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
            cout<<" ";
            dash++;
        }
        int j=0;
        while(j<n-i){
            cout<<i+1;
            j++;
        }
        
        i++;
        cout<<endl;
    }
}