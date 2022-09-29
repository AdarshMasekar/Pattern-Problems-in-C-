/*
sample output
3
A B C 
B C D 
C D E 
*/

#include<iostream>
using namespace std;

int main(){
    
    int i=0,n;
    char ch='A';
    cin>>n;
    while(i<n){
        int j=0;
        while(j<n){
            cout<< char(ch+i+j)<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

}