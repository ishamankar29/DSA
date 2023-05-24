#include<iostream>
using namespace  std;

int factorial(int num){
        int fact=1;
        for(int i=2;i<=num;i++){
             fact=fact*i;
        }
        return fact;

    }
int main(){
    int n;
    cin>>n;
    int ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/(factorial(j)*factorial(i-j));
        }
        cout<<endl;
    }
    return 0;

}
output5 
1
11
121
1331
14641
