#include<iostream>
#include<climits>

using namespace std;

void printArray(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int array[],int n){
    int flag;
    for(int i=0;i<n-1;i++){
        flag=0;
         cout<<"Pass "<<i<<" ";
        for(int j=0;j<n-1;j++){
           
            if(array[j]>array[j+1]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
                flag=1;
                printArray(array,n);
            }
           
         }

        if(flag==0){
            break;
        }

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
    bubbleSort(array,n);


    return 0;

}

PS D:\c++> ./bubbleSort

enter size of array 
10

enter elements of array
12 45 3 88 9 2 1 44 5 10

Pass 0 
12 3 45 88 9 2 1 44 5 10 
12 3 45 9 88 2 1 44 5 10 
12 3 45 9 2 88 1 44 5 10 
12 3 45 9 2 1 88 44 5 10 
12 3 45 9 2 1 44 88 5 10 
12 3 45 9 2 1 44 5 88 10 
12 3 45 9 2 1 44 5 10 88 
Pass 1 
3 12 45 9 2 1 44 5 10 88 
3 12 9 45 2 1 44 5 10 88 
3 12 9 2 45 1 44 5 10 88 
3 12 9 2 1 45 44 5 10 88 
3 12 9 2 1 44 45 5 10 88 
3 12 9 2 1 44 5 45 10 88 
3 12 9 2 1 44 5 10 45 88
Pass 2 
3 9 12 2 1 44 5 10 45 88
3 9 2 12 1 44 5 10 45 88
3 9 2 1 12 44 5 10 45 88 
3 9 2 1 12 5 44 10 45 88
3 9 2 1 12 5 10 44 45 88
Pass 3 
3 2 9 1 12 5 10 44 45 88
3 2 1 9 12 5 10 44 45 88
3 2 1 9 5 12 10 44 45 88
3 2 1 9 5 10 12 44 45 88
Pass 4 
2 3 1 9 5 10 12 44 45 88
2 1 3 9 5 10 12 44 45 88
2 1 3 5 9 10 12 44 45 88
Pass 5 
1 2 3 5 9 10 12 44 45 88
Pass 6 

Sorted Array 1 2 3 5 9 10 12 44 45 88