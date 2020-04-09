#include <bits/stdc++.h>
#include <vector>


void reverseArray(std::vector<int> &a, int start, int end) 
{ 
	while (start < end) { 
		int temp = a[start]; 
		a[start] = a[end]; 
		a[end] = temp; 
		start++; 
		end--; 
	} 
} 

std::vector<int> circularArrayRotation(std::vector<int> a, int k, std::vector<int> queries)
{
   
    int shifts=k%a.size();

     std::vector<int> ans;
    reverseArray(a,0,a.size()-shifts-1);
    reverseArray(a,a.size()-shifts,a.size()-1);
    reverseArray(a,0,a.size()-1);

    for(int i=0;i<queries.size();i++){

        ans.push_back(a[queries[i]]);
    }
    
   return ans;

}

int main()
{
    std::vector<int> v{3,4,5};
    
    std::vector<int> queries{1,2};

    std::vector<int> ans=(v,2,queries);

 for(int i=0;i<ans.size();i++){
        std::cout<<ans[i]<<std::endl;
    }
    

    return 0;
}