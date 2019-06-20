/*
 * Leetcode 128. Longest Consecutive Sequence
 *
 * Compile: g++ 128_L_C_S.cpp -o result
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
	cout << nums[0] <<endl;
}
