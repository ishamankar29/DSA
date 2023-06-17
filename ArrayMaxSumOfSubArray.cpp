#include<iostream>
#include<istream>
#include<climits>

using namespace std;
int main(){
    int n;
    int sum=0;
    int maxSum=INT_MIN;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter  array elements"<<endl;

    for(int i=0;i<=n;i++){
        cin>>nums[i];
    }

    for(int i=0;i<=n;i++){
        sum=0;
        for(int j=i;j<=n;j++){

            sum+=nums[j];

            cout<<"sum"<<sum<<endl;
            maxSum=max(maxSum,sum);
            cout<<"MAXsum"<<maxSum<<endl;
            




        }
         


    }
   
cout<<"maxSum"<<maxSum;


 
    return 0;

}

output:
PS D:\c++> ./ArrayMaxSumOfSubArray     
Enter size of array
5
Enter  array elements
-1 2 -3 4 -5 6
sum-1
MAXsum-1
sum1
MAXsum1
sum-2
MAXsum1
sum2
MAXsum2
sum-3
MAXsum2
sum3
MAXsum3
sum2
MAXsum3
sum-1
MAXsum3
sum3
MAXsum3
sum-2
MAXsum3
sum4
MAXsum4
sum-3
MAXsum4
sum1
MAXsum4
sum-4
MAXsum4
sum2
MAXsum4
sum4
MAXsum4
sum-1
MAXsum4
sum5
MAXsum5
sum-5
MAXsum5
sum1
MAXsum5
sum6
MAXsum6
maxSum6