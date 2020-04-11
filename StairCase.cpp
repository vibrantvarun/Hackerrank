#include<bits/stdc++.h>


void staircase(int n) {

 for(int i=0;i<n;i++){
     for(int k=n-1;k>i;k--){
         printf(" ");
    }
    for(int j=0;j<=i;j++){
       printf("#");
    }
    printf("\n");
 }

}

int main(){

    staircase(6);
    return 0;
}