/* sample output
4
1 
2 1 
3 2 1 
4 3 2 1 
*/
#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
        
    }

}