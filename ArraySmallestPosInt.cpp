#include<iostream>
#include<climits>

using namespace std;
int smallestPosInt(int array[], int num){
    int max_num=INT_MIN;
    int mini=INT_MAX;


    for(int i=0 ;i<num; i++){
        max_num= max(max_num, array[i]);

    }
    bool track[max_num];
     for(int i=0 ;i<=max_num; i++){
        track[i]=false;

    }
    for(int i=0 ;i<num; i++){
        track[array[i]]=true;

    }
    for(int i=0 ;i<=max_num; i++){
        if(track[i]==false){
            mini = i;
            break;
        }

    }
     
return mini;

 }

int main(){
    int num;
    cout<<"enter size of array:"<<endl;
    cin>>num;
    int array[num];

    cout<<"Enter  array elements"<<endl;

    for(int i=0;i<num;i++){
        cin>>array[i];
    }
    

    int ans=smallestPosInt(array,num);
    cout<<"Smallest missing positive integer="<<ans;
    return 0;
}

output:
PS D:\c++> ./ArraySmallestPosInt
enter size of array:
6
Enter  array elements
0 -9 1 3 -4 5
Smallest missing positive integer=2