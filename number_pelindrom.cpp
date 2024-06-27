#include<iostream>

using namespace std;
bool check(int u,int &v){
    if(u>0 and u<=9){
        int vv=v%10;
        v/=10;
       return (u==vv);
    }
   
    bool res= check(u/10,v) and (u%10 == v%10);
    v/=10;
    return res;

  
}

int main(){
    int num;
    cin>>num;
    
    cout<<check(num,num);
}