#include<bits/stdc++.h>
using namespace std;

// void twoSum(vector<long long>n){
    
// }

int main()
{
    
    vector<int>nums;
    int x,n; cin>>n;
    int target; cin>>target;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    int a,b;
    bool flag=true;
    
    for(int i=0;i<n-1 and flag;i++){              
        for(int j=i+1;j<n and flag;j++){
          if(nums[i]+nums[j]==target and i!=(j-1)){
                    a=i;
                    b=j;
                    flag=false;
                    break;
            }                
        }            
    }          
    if(a>n or b>n) cout<<"-1"<<endl;      
    else cout<<a+1<<" "<<b+1<<endl;

}