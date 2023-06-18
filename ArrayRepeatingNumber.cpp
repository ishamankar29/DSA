#include<iostream>
#include<climits>

using namespace std;



int repeatingNumber(int array[],int num){
    int max_num=-1;
    
    for(int i=0;i<=num;i++){
       max_num = max(max_num,array[i]);
    }
    int track[max_num];
    int min_Index=INT_MAX;
    for(int i=0;i<=max_num;i++){
        track[i]=-1;
    }

    for(int i=0;i<=num;i++){
        
        if(track[array[i]]!=-1){
            min_Index= min(min_Index,track[array[i]]);

        }else{
            track[array[i]]=i;
        }
        
    }
    printf("track array=");
    for(int i=0;i<=max_num;i++){
       cout<<track[i];
    }
    
    
    return min_Index;



}

int main(){
    int num;
    cout<<"enter size of array:"<<endl;
    cin>>num;
    int array[num];

    cout<<"Enter  array elements"<<endl;

    for(int i=0;i<=num;i++){
        cin>>array[i];
    }
    

    int ans=repeatingNumber(array,num);
    cout<<"Min Index="<<ans;
    return 0;
}