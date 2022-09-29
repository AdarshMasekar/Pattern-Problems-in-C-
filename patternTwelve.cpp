/* sample output
4
A B C D 
E F G H
I J K L
M N O P
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
        while(j<n){
            cout<<ch++<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}