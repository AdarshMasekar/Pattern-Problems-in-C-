/* sample output
3
A A A 
B B B 
C C C 
*/

#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    char ch='A';
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<char(ch+i)<<" ";
            j++;
        }
        // ch++;
        i++;
        cout<<endl;
        
    }

}