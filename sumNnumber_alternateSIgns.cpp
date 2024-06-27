#include<iostream>

using namespace std;
int sum_alternate(int n){

    if(n==0){
        return 0;
    }

   return (n%2==0 ? -n : n) + sum_alternate(n-1);
    
}


int main(){

    int n;
    cin>>n;
   cout<<sum_alternate(n);
}