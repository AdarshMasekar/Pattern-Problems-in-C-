/* 
sample output
5
1234554321
1234**4321
123****321
12******21
1********1
*/

#include<iostream>
using namespace std;

int main(){

    int i=0;
    int n;
    cin>>n;
    while(i<n){
        int j=0;
        int  num=n-i;
        while(num){
            cout<<j+1;
            j++;
            num--;
        }
        while(j<n){
            cout<<"*";
            j++;
        }

        int k=0;
        if(i>=1){
        while(k<i){
            cout<<"*";
            k++;
        }
        }
        int last=n-i;
        while(last){
            int sub=0;
            cout<<last-sub;
            sub++;
            last--;
        }
        i++;
        cout<<endl;
    }
}