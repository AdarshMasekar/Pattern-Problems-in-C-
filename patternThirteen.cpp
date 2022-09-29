/* sample output
3
A B C 
B C D 
C D E 
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
            cout<<char(ch+j+i) <<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}