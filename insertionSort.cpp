#include<iostream>
#include<climits>

using namespace std;

void printArray(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int array[],int n){

    for(int i=1;i<n;i++){
        int temp=array[i];
        int j=i-1;
         while(j>=0 && array[j]>temp){
            array[j+1]=array[j];
            j--;
         }
        array[j+1]=temp;
        cout<<"Pass "<<i<<"->";
        printArray(array,n);   
        

    }
    cout<<"Sorted Array ";
    printArray(array,n);
   

    

}



int main(){

    int n;
    cout<<"enter size of array "<<endl;
    cin>>n; 
    int array[n];

    cout<<"enter elements of array"<<endl;

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    insertionSort(array,n);


    return 0;

}
outputPS D:\c++> ./insertionSort
enter size of array 
10
enter elements of array
12 56 3 1 8 0 34 66 33 90
Pass 1->12 56 3 1 8 0 34 66 33 90
Pass 2->3 12 56 1 8 0 34 66 33 90
Pass 3->1 3 12 56 8 0 34 66 33 90
Pass 4->1 3 8 12 56 0 34 66 33 90
Pass 5->0 1 3 8 12 56 34 66 33 90
Pass 6->0 1 3 8 12 34 56 66 33 90
Pass 7->0 1 3 8 12 34 56 66 33 90
Pass 8->0 1 3 8 12 33 34 56 66 90
Pass 9->0 1 3 8 12 33 34 56 66 90
Sorted Array 0 1 3 8 12 33 34 56 66 90