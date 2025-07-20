#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bestandworst(int arr[],int n){
    int best=arr[0],worst=arr[0];
    int brecord=0,wrecord=0;
    
     for(int i=0;i<n;i++){
        
        if(arr[i]>best){
            best=arr[i];    
            brecord++;
        }
        if(arr[i]<worst){
            worst=arr[i];
            wrecord++;
        }
        
    }
   cout<<brecord<<" "<<wrecord;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bestandworst(arr,n);

    return 0;
}



