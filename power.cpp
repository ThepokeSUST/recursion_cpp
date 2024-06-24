#include<iostream>

using namespace std;

int power(int p,int q){

    if(q==0) return 1;

    if(q%2==0){
        int ans=power(p,q/2);

        return ans*ans;
    }
    else{
        int ans=power(p,q/2);

        return ans*ans*p;
    }
}
int main(){

    int p,q;
    cin>>p>>q;

    cout<<power(p,q);
}