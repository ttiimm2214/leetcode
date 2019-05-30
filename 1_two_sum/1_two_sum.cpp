/*
 * Leetcode 1 Two Sum
 *
 * Compile: g++ 1_two_sum.cpp -o result
 * Execute: ./result
 */



// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//Example:
//Given nums = [2, 7, 11, 15], target = 9,

//Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].



#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
//test case num = [2, 7, 11, 15] target = 9
	vector<int> result;
	vector<int> nums;
	unordered_map<int,int> mapping; 
	int TARGET = 9;
	int remain;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	int SIZE = nums.size();
// solution 
	for (int i = 0; i < nums.size(); i++){
		mapping[nums[i]]= i;
	}

	for(int i = 0; i < nums.size(); i++){
		remain = TARGET - nums [i];
		if (mapping.find(remain)!=mapping.end()&& mapping[remain] != i){
			result.push_back(i);
			result.push_back(mapping[remain]);
			break;
		}
		
	}
	
// output for leetcode 
	// return result;
// output 
	for (int i = 0; i < result.size(); i++){
		cout<< result [i]<< endl;
	}

}

