#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int  i=0;i<n;i++){
        cin>>arr[i];
    }


    // precomputation
    map<int ,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
     int max=0;
     int great=0;

     for(auto it : mpp){
        cout<<it.first<<"-> "<<it.second<<endl;
        if(max<it.second){
            max=it.second;
            great=it.first;
        }

    }
    cout<<"The highest frequncy  element is:"<<great<<endl;

   
    // queries
    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetching 
        cout<<mpp[number]<<endl;

    }
    
    
    return 0;
}
