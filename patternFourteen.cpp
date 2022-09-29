/* sample output
3
A 
B B 
C C C 
*/
#include<iostream>
using namespace std;
int main(){

    int n;
    char ch='A';
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<char(ch+i)<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}