#include <bits/stdc++.h>
#include <vector>
using namespace std;

void plusMinus(vector<int> arr) {

    int n=arr.size();

    int positive=0,negative=0,zero=0;

    for(int i=0;i<arr.size();i++){
      if(arr[i]>0){
         positive++;
      }else if(arr[i]<0){
         negative++;
      }else{
         zero++;
      }

    }
    
    float posFraction=float(positive)/float(n);
    float negFraction=float(negative)/float(n);
    float zeroFraction=float(zero)/float(n);

    printf("%f \n",posFraction);
    printf("%f \n",negFraction);
    printf("%f ",zeroFraction);





}
   

int main()
{
    std::vector<int> v{-4 ,3 ,-9 ,0, 4, 1 };
    
    plusMinus(v);

    return 0;
}