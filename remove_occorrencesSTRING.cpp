#include<iostream>

using namespace std;

string remove(string str,char ch,int idx,int n){
    if(idx==n){
        return "";
    }
    string cur="";
    cur+=str[idx];

    return (str[idx]==ch ? "" : cur) + remove(str,ch,idx+1,n);

}

int main(){

    string str;
    cin>>str;
    char ch;
    cin>>ch;
    string ans=remove(str,ch,0,str.size());
    cout<<ans;

}