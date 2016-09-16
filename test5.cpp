#include <iostream>
#include <algorithm>
#include <vector>
int LonelyNumber(std::vector< int > nums) {
  sort(nums.begin(),nums.end());
  int count = 1;
  for(int i=0;i<nums.size()-1;i++){
    if(arr[i] == arr[i+1]){
    	count++;
    }else{
      if(count==1){
        return arr[i];
        break;
      }else{
        count = 1;
      }
    }
  }
	return -1;
}
