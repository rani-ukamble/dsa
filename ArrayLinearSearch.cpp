#include<bits/stdc++.h>
using namespace std;

//linear search - O(n)

int linear_search(int a[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(a[i]==key)
            return i+1;
     }   
     return -1  ;  
}

int main()
{
    int n,key;
    cout<<"enter size of array\n";
    cin>>n;
    int a[n];
    cout<<"enter array\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter key\n";
    cin>>key;
    cout<<endl;
    
    cout<<linear_search(a,n,key);
    
    return 0;
}
