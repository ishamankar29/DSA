#include<iostream>
#include<climits>

using namespace std;

int* bubbleSort(int* array,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        
    }

    }
    cout<<"Sorted Array-->";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }

    return array;

}

int linearSearch(int array[],int key,int size){
    cout<<"LINEAR SEARCH"<<endl;
    int i;
    for( i=0;i<size;i++){
         if(array[i]==key){
             return i+1;
            
            
         }
       
    }
    return -1;
   
}
int BinarySearch(int array[],int key,int size){
    cout<<"BINARY SEARCH"<<endl;

    
    int start=0;
    int end=size-1;
    int* array1=bubbleSort(array,size);

    while(start<end){
        
        int mid=(start+end)/2;
        if(key==array1[mid]){
            return mid+1;
        }
        else if(key<array1[mid] ){
            start=0;
            end=mid-1;
            
        }
       else if(key > array1[mid]){
            start=mid+1;
            end=size-1;

        }

        

    }


    return -1;
}

int main(){
    int n,key;
    cout<<"enter size of array "<<endl;
    cin>>n; 
    int array[n];

    cout<<"enter elements of array"<<endl;

    for(int i=0;i<n;i++){
        cin>>array[i];
    
    }
    cout<<"enter the key to be found"<<endl;
    cin>>key; 

    int ansL=linearSearch(array,key,n);
    if(ansL==-1){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"Key="<<key<<"found at"<< ansL<<endl;

    }

    int ansB=BinarySearch(array,key,n);
    if(ansB==-1){
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"Key="<<key<<"found at "<< ansB<<endl;

    }
    
    

    
    return 0;
    

}

// /PS D:\c++> ./ArraySearching
// enter size of array
// 10

// enter elements of array
// 4 6 12 5 1 22 78 8 99 10

// enter the key to be found
// 8

// LINEAR SEARCH
// Key=8found at8

// BINARY SEARCH
// Sorted Array-->1 4 5 6 8 10 12 22 78 99
// Key=8found at 5