/*
sample output
3
---1
--121
-12321
*/

#include <iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    cin>>n;
    while(i<n){
        int j=0;
        int dash =n-i;
        while(dash){
            cout<<"-";
            dash--;
        }
        while(j<=i){
            cout<<j+1;
            j++;
        }
        int k=1;
        while(k<=i){
            int value;
            value=i-j+1;
            cout<<i+1-k;
            k++;
        }
        k++;
        i++;
        cout<<endl;
    }
}