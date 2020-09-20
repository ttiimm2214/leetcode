/*
 * Leetcode 136. Single Number
 *
 * Compile: g++ -std=c++11 136_bit_sn.cpp -o result
 * Execute: ./result
 */


 /*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4
*/


#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main(){
	vector<int> nums;
	vector<int> nums1;
	vector<int> try1;
	vector<int>::iterator temp;
	// test case nums[2,2,1] and nums1 [4,1,2,1,2]
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(1);
	nums1.push_back(4);
	nums1.push_back(1);
	nums1.push_back(2);	
	nums1.push_back(1);
	nums1.push_back(2);	


//ans
	int result = 0;
    for (int i = 0; i < nums1.size(); i++) {
        result ^= nums1[i];
        cout << result <<endl;
    }
 

 
 }


