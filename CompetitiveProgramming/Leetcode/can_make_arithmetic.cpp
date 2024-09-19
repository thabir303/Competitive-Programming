#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n; cin>>n;
   vector<int>arr;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    arr.push_back(x);
   }  
   int cnt=0;
   sort(arr.begin(),arr.end());
        if(arr.size()==2)
        cout<<"true"<<endl;
        else{
            for(int i=0;i<arr.size()-2;i++){
            if((abs(arr[i+1]-arr[i])==abs(arr[i+2]-arr[i+1])))
            cnt++;
            }
            if(cnt==arr.size()-1)
            cout<<"true"<<endl;
            else cout<<"false"<<endl;
    
}
}