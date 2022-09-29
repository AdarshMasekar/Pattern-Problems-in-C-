/* sample output
4
A 
B C 
D E F 
G H I J 
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
            cout<<ch++<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}