/* sample output
4
1 
2 3 
4 5 6 
7 8 9 10 
*/

#include<iostream>
using namespace std;
int main(){

    int n,count=1;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<count++<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }
}

