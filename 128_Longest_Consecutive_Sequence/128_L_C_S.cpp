/*
 * Leetcode 128. Longest Consecutive Sequence
 *
 * Compile: g++ -std=c++11 128_L_C_S.cpp -o result
 * Execute: ./result
 */



// Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
// Your algorithm should run in O(n) complexity.
// Example:
// Input: [100, 4, 200, 1, 3, 2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main(){
//test case [100, 4, 200, 1, 3, 2]
	vector<int> nums;
	nums.push_back(100);
	nums.push_back(4);
	nums.push_back(200);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(2);
//solution
	unordered_set<int> temp(nums.begin(), nums.end());
	int current_count, maxcount=0,current_number;
	int test_count=0;


	for(int i : temp){
		if(temp.find(i-1)==temp.end()){		//此步驟是為了要找連續數最小的值開始算 如果減一沒有找到就開始算
			// test_count += 1; 	for test
			// cout << i <<endl;	for test
			current_count=1;
			current_number=i;
			while(temp.find(current_number+1) != temp.end()){
				// test_count = test_count+1;	for test
				current_number = current_number + 1;
				current_count = current_count + 1;
			}
			maxcount=max(current_count,maxcount);
		}
	}
	cout << maxcount <<endl;
}





