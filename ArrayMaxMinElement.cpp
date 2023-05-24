#include<iostream>
#include<climits>

using namespace std;
int main(){
    int n;
    int minNo=INT_MAX;
    int maxNo = INT_MIN;
    cin>>n; 
    int array[n];
    
    for(int i=0;i<n;i++){
        cin>>array[i];

    }
    for(int i=0;i<n;i++){
         
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }
    cout<<"max element="<<maxNo<<endl;
    cout<<"min element="<<minNo;
    return 0;
    

}
output
PS D:\c++> ./ArrayMaxMinElement
10
12 55 6 3 7 88 9 10 33 77
max element=88
min element=3