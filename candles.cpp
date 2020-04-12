#include<bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> ar) {
 
 int max=ar[0]; int maxcount=1;
 for(int i=1;i<ar.size();i++){ 
     if(ar[i]>max){
        max=ar[i];
        maxcount=1;
     }else if(ar[i]==max){
        maxcount++;
     }
 }
   return maxcount;

}


int main(){

vector<int> arr{3 ,2 ,1 ,3};
    
    printf("%d",birthdayCakeCandles(arr));
    return 0;
}