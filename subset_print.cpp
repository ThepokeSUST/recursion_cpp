#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void sub_set(vector<int> &vec,int idx, vector<int>  &subset,vector< vector<int> > &ans,int n){
     
     if(idx==n){
        ans.push_back(subset);
        return;
     }
    
    subset.push_back(vec[idx]);
     sub_set(vec,idx+1,subset,ans,n);
     subset.pop_back();
     sub_set(vec,idx+1,subset,ans,n);

}
int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
     int size= pow(2,n);
    vector< vector<int> > ans;
  vector<int> subset;
  cout<<ans.size()<<endl;
  sub_set(vec,0,subset,ans,n);
   cout<<ans.size()<<endl;
     for (const auto &sub : ans) {
        for (const auto &elem : sub) {
            cout << elem << " ";
        }
        cout << endl;
    }
}