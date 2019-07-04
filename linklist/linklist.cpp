/*
 * link_list method 
 *
 * Compile: g++ linklist.cpp -o result
 * Execute: ./result
 */


/* 
Input: 1->2->4, 
Output:

add number 5 before the list : 5 -> 1 -> 2 ->4
add number 5 after the list : 1 -> 2 -> 4 -> 5
delete number 2 : 1 -> 4
delete number 1 : 2 -> 4
delete number 4 : 1 -> 2
reverse number : 4 ->2 ->1 

*/

#include <iostream>

using namespace std;

struct link_list{
	int number;
	link_list *next;
};


void printlist(link_list *head){
	// link_list *print;
	// print = head;
	while(true){
		cout << head->number <<endl;
		head = head -> next;
		if (head == NULL){
			break;
		}
	}
}


void addfront(int x,link_list *head){
	link_list *front;
	front = new link_list;
	front->number=x;
	front->next=head;
	head=front;
	while(true){
		cout << head->number <<endl;
		head = head -> next;
		if (head == NULL){
			break;
		}
	}
}







int main(){
// test case
	link_list *head;		// 宣告 head 
	head = new link_list;	//指定一個link_list的記憶體給head
	link_list *current =head;  //指定一個link_list的記憶體給current 並指向head
//第一個節點
	head -> number= 1;
	head -> next = NULL; 
//第二個節點
	current -> next = new link_list;	//指定link_list type的記憶體給current
	current = current -> next;  //將current 從head 變成current next的位址
	current -> number =2;
	current -> next = NULL;
//第三個節點
	current -> next = new link_list;
	current = current -> next;
	current -> number =4;
	current -> next = NULL;


//1. print the list 
	// printlist(head);

//2. add before the list 

	// addfront(5,head);
//3. add after the list 
	
	

// //印出資料
// 	link_list *print;
// 	print = head;
// 	while(true){
// 		cout << print->number <<endl;
// 		print = print -> next;
// 		if (print == NULL){
// 			break;
// 		}
// 	}

}


