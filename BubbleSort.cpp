#include<bits/stdc++.h>
using namespace std;

//Repeatedly swap 2 adjacent elements 
//if they are in wrong order ie. Left > Right

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;
    
    for(int i=1;i<n;i++){
    //for round 1 to n-1
        bool swapped=false;
        for(int j=0;j<n-1;j++){
           //process elements till n-1 th index
           if(a[j]>a[j+1]){
             swap(a[j],a[j+1]);
             swapped=true;
           }
               
        }
        if(swapped==false)
            break;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
    return 0;
}
