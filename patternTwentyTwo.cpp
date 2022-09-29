/* 
sample output
4
---1
--22
-333
4444
*/

#include<iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    cin>>n;
    while(i<n){
        int j=0;
        int dash=n-i-1;
        while(dash){
            cout<<"-";
            dash--;
        }
        while(j<i+1){
            cout<<i+1;
            j++;
        }
        i++;
        cout<<endl;
    }
}