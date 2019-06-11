/*
 * Leetcode 6_ZigZag_Conversion
 *
 * Compile: g++ -std=c++11 6_ZigZag_Conversion.cpp -o result
 * 多一個 -std=c++11 主要是讓可以使用Range-based for loop  ： for (char x:s ) 加這項跟compiler 新舊有關 
 * Execute: ./result
 */




/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)
P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"
Write the code that will take a string and make this conversion given a number of rows:
string convert(string s, int numRows);
Example 1:
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
//test cast
	string s = "PAYPALISHIRING";
	int numRows=3;
// solution
	vector<string> vec(numRows);
	bool DIRECTION=false;  // true 為 往上   false 為 往下 
	string result;
	int LAYER=0;
	int change;

	for(char x :s){
		// cout <<LAYER<<endl;
		vec[LAYER] += x;
		if(LAYER==0||LAYER == numRows-1)   // 當 LAYER = 0 與LAYER = 2時 更換方向
			DIRECTION = !DIRECTION;
		// LAYER = LAYER + DIRECTION; //這樣直接相加會造成 Segmentation fault: 11
		LAYER += DIRECTION ? 1 : -1; 	// 當DIRECTION 為true +1 false -1
	}


	for (int i = 0; i < numRows; i++){
		result += vec[i];
	}
	cout << result<<endl;
}
