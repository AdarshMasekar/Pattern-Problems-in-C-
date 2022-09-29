/* sample output
4
D 
C D
B C D
A B C D
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
            cout<<char(ch+n-i+j-1)<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}