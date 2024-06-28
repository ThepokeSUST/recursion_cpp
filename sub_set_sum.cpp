#include<iostream>
#include<vector>
using namespace std;
 
void sub_sum(vector<int> &vec,int idx,int sum,vector<int> &ans,int n){
   
   if(idx==n){
    ans.push_back(sum);
    return;
   }

         sub_sum(vec,idx+1,sum+vec[idx],ans,n);
         sub_sum(vec,idx+1,sum,ans,n);   
}

int main(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i=0;i<n;i++) cin>>vec[i];
 
 vector<int> ans;
 sub_sum(vec,0,0,ans,n);

 for(auto ele: ans) cout<<ele<<" ";

}