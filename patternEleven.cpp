/* sample output
3
A B C 
A B C 
A B C 
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
        // char ch='A';
        while(j<n){
            cout<<char(ch+j)<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}