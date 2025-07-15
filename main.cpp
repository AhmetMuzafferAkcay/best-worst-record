#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void plusMinus(int arr[],int n) {
    float pos=0;
    float neg=0;
    float zero=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];    
    }
    for (int i=0;i<n;i++){
    if(arr[i]>0)
        pos++;
    if(arr[i]==0)
        zero++;
    if(arr[i]<0)
        neg++;
}
float posr=pos/(pos+neg+zero);
float negr=neg/(pos+neg+zero);
float zeror=zero/(pos+neg+zero);

cout<<posr<<endl<<negr<< endl<<zeror<<endl;
}
int main()
{
   
   int n;
cin >> n;
int arr[n];
plusMinus(arr, n);

    return 0;
}

