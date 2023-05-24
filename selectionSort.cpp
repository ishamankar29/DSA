#include<iostream>
using namespace std;

void printArray(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int array[],int n){
   
    for(int i=0;i<n-1;i++){
        int min=i;
        int j;

        for( j=i+1;j<n;j++){
            if(array[j]<array[min]){
                min=j;
                
            }
        }
            if(min!=i){
                int temp=array[min];
                array[min]=array[i];
                array[i]=temp;
            }
            int counter=i;

            cout<<"Pass "<<counter<<"->";
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
    selectionSort(array,n);


    return 0;

}

output
PS D:\c++> ./selectionSort
enter size of array 
10
enter elements of array
12 45 3 88 9 2 1 44 5 10
Pass 0->1 45 3 88 9 2 12 44 5 10
Pass 1->1 2 3 88 9 45 12 44 5 10
Pass 2->1 2 3 88 9 45 12 44 5 10
Pass 3->1 2 3 5 9 45 12 44 88 10 
Pass 4->1 2 3 5 9 45 12 44 88 10
Pass 5->1 2 3 5 9 10 12 44 88 45
Pass 6->1 2 3 5 9 10 12 44 88 45
Pass 7->1 2 3 5 9 10 12 44 88 45 
Pass 8->1 2 3 5 9 10 12 44 45 88
Sorted Array 1 2 3 5 9 10 12 44 45 88