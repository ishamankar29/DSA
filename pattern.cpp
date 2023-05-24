#include<iostream>
using namespace std;
int main(){
    int n=8;
    for(int i=1; i<=n/2;i++){
        for(int j=1; j<=n;j++){
          if(j<=i){
            cout<<"*";
            

          }
          else if(j>i && j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        
        
        }


        cout<<endl;
    }
    for(int i=n/2; i>=1;i--){
        for(int j=1; j<=n;j++){
          if(j<=i){
            cout<<"*";
            

          }
          else if(j>i && j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        
        
        }


        cout<<endl;
    }
   /////////////////////////////////////
    int num=1;

    for(int i=1; i<=n;i++){
        for(int j=1; j<=i;j++){
           cout<<num;
           cout<<" ";
           num++;
        }
        cout<<endl;
    }

    ////////////////////////////////////
    int nn=3;


    for(int i=1;i<=nn;i++){
            
        for(int j=1;j<=nn-i;j++){
            
                cout<<" ";

        }
        
           
        for( int count=1;count<=i*2-1;count++){
            cout<<"*";

        }
        cout<<endl;

    }
    for(int i=nn;i>=1;i--){
            
        for(int j=1;j<=nn-i;j++){
            
                cout<<" ";

        }
        
           
        for( int count=1;count<=i*2-1;count++){
            cout<<"*";

        }
        cout<<endl;

    }
     for(int i=nn;i>=1;i--){
            
        for(int j=1;j<=nn-i;j++){
            
                cout<<" ";

        }
        
           
         for( int count=i;count>=1;count--){
             cout<<"* ";

     }
         cout<<endl;

     }
    
/////////////////////////////////////
for(int i=1;i<=nn;i++){
    for(int j=1;j<=nn*nn;j++){
        if(((i+j)%4==0 )|| (i==2 && j%4==0) ){
            cout<<"*";
            
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

   return 0; 
}

output
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *


1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 
22 23 24 25 26 27 28 
29 30 31 32 33 34 35 36 


  *
 ***
*****
*****
 ***
  *




  *   *  
 * * * * 
*   *   *