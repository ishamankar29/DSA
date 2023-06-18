#include<iostream>
#include<istream>
#include<climits>

using namespace std;

void SubarrayForGivenSum(int array[], int num,int find_sum){
    int start_index=0;
    int end_index=0;
    int sum=0;
    for(int i=0;i<num;i++){

        sum+=array[i];
        end_index=i;
        if(sum>find_sum){

            sum=sum-array[start_index];
            start_index++;
            

        }
        if(sum==find_sum){
            for(int i=start_index;i<=end_index;i++){
                    cout<<array[i];
                }
                cout<<endl;
        }



    }
    


}
int main(){
    int start_index,end_index=0;
    int num,find_sum;
    cout<<"enter size of array:"<<endl;
    cin>>num;
    int array[num];
    cout<<"enter sum  for subarray:"<<endl;
    cin>>find_sum;

    cout<<"Enter  array elements"<<endl;

    for(int i=0;i<num;i++){
        cin>>array[i];
    }

    

    SubarrayForGivenSum(array,num,find_sum);
    

    return 0;
    
}
output:
PS D:\c++> ./ArraySubarrayForSum
enter size of array:
7
enter sum  for subarray:
12
Enter  array elements
7 2 8 1 3 8 1
813
138
381