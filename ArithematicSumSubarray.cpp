#include<iostream>
#include<istream>
#include<climits>

using namespace std;
int main(){
    int n;
    int sum=0;
    // int maxSum=INT_MIN;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int array[n];
    int i=0;

   
    cout<<"Enter  array elements"<<endl;
    for( i=0;i<n;i++){
            cin>>array[i];
        }

        int current_length=2;
        int ans_length=2;
        int ans_original_length=2;
        int difference=array[1]-array[0];
        int indexS=0;
        int indexE=0;

        int updatedS=0;
        int j=2;

        while( j<n){
            if(difference==array[j]-array[j-1]){
                current_length=current_length+1;
                if(ans_length<current_length){
                    indexS=updatedS;

                }

            }
            else{
                
                current_length=2;
                updatedS=j-1;
                
                difference=array[j]-array[j-1];
                
            }
         
            ans_length=max(ans_length,current_length);
           

                indexE=j;
            
                j++;


        }
        ans_length;

        cout<<"max length of arithematic subarray ="<<ans_length<<endl;
        cout<<"Arithematic subarray =";
        for( i=indexS;i<indexE;i++){
            cout<<array[i]<<" ";
        }


  

    return 0;

}
output
PS D:\c++> ./ArithematicSumSubarray
Enter size of array
7
Enter  array elements
10 7 4 6 8 10 11
max length of arithematic subarray =4
Arithematic subarray =4 6 8 10