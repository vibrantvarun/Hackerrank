#include <bits/stdc++.h>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr) {

unsigned long long int sum=0;
 for(int i=0;i<arr.size();i++){
   sum+=arr[i];
 }
 
 unsigned long long int  msum=sum-arr[0]; unsigned long long int  masum=sum-arr[0];
 for(int j=1;j<arr.size();j++){
     unsigned long long int  minsum=sum-arr[j];
     if(msum>minsum){
         msum=minsum;
     }     
     if(masum<minsum){
         masum=minsum;
     }
 }

 printf("%llu %llu",msum,masum); 

}

int main(){
    vector<int> v{256741038 ,623958417, 467905213, 714532089, 938071625
};
         miniMaxSum(v);
    return 0;
}