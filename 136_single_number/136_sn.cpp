
/*
 * Leetcode 136. Single Number
 *
 * Compile: g++ 136_sn.cpp -o result
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
	// unordered_map<int,int> mapping; 
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(1);
	nums1.push_back(4);
	nums1.push_back(1);
	nums1.push_back(2);	
	nums1.push_back(1);
	nums1.push_back(2);	

//ans

unordered_set<int> numset;
for(int i = 0; i < nums.size(); i++){
	if (numset.find(nums[i]) == numset.end()){
		numset.insert(nums[i]);
	}
	else {
		numset.erase(nums[i]);
	}

}
unordered_set<string> :: iterator itr; 
cout << *itr << endl;


//print
	// for (int i=0; i< nums1.size(); i++){
	// 	cout << nums1[i] << endl;
	// }


}
