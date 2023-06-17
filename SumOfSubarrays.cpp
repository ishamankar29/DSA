#include<iostream>
#include<istream>
#include<climits>

using namespace std;
int main(){
    int n;
    
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter  array elements"<<endl;

    for(int i=0;i<=n;i++){
        cin>>nums[i];
    }



        int sum = 0;  
        int maxSum = nums[0]; 

        for (int i = 0; i <=n; i++) {
            
            sum =  sum + nums[i];
            if(sum<=0){
                sum=0;
            }
            cout<<"sum"<<sum<<endl;
           
            maxSum = max(maxSum, sum);
            cout<<"maxsum"<<maxSum<<endl;

        }
        cout<<endl;
        cout<<maxSum;
    
    return 0;

}
output:
PS D:\c++> ./SumOfSubarrays       
Enter size of array
5
Enter  array elements
-1 2 -3 4 -5 6
sum0
maxsum0
sum2
maxsum2
sum0
maxsum2
sum4
maxsum4
sum0
maxsum4
sum6
maxsum6

6