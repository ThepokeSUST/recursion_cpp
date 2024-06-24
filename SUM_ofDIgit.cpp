#include<iostream>

using namespace std;

int sum(int n){
    if(n>=0 or n<=9){
        return n;
    }
int add=n%10;
  return add+sum(n/10);

}

int main(){

    int n;
    cin>>n;

    int ans=sum(n);

    cout<<ans;
}