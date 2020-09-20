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
delete middle number 2 : 1 -> 4
delete first number 1 : 2 -> 4
delete last number 4 : 1 -> 2
reverse number : 4 -> 2 ->1 

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


void addbefore(int x,link_list *head){
	link_list *before;
	before = new link_list;
	link_list *temp;		//保留原本的head所暫留的空間
	temp = new link_list;
	temp = head;
	before -> number = x;
	before -> next = NULL;
	while (temp ->next != NULL){   // 找head的最後一個在哪
		temp = temp -> next;
	}
	temp -> next = before;			//把數字串到最後一個list上
	while(true){				
		cout << head->number <<endl;
		head = head -> next;
		if (head == NULL){
			break;
		}
	}
}


void delete1(int x,link_list *head){
	link_list *temp = new link_list;
	link_list *current = new link_list;
	current = head;
	// 尋找要刪除的點在哪
	while(current -> number != x){
		temp = current;		// 找到的前一個點
		current = current -> next; // 現在的點
		if(current == NULL)
			break;
	}

	if (temp ->next == NULL){
		cout<< "the point is not exist in the link list"<<endl;
	}
	// 當刪除的點為第一個點時
	else if(current -> number == head -> number){
		head = head -> next;
		delete current;
		current -> next = NULL;  //

	}
	//當刪除的點不是第一個點時
	else{
		temp -> next = current -> next;
		delete current;
		current = NULL;		//將刪除的點指向NULL 以免亂指位址
	}
	
	while(true){		
		if (temp ->next == NULL){ 
			break;	//當刪除的數字不在list裡面不需要印出
		}		
		cout << head -> number <<endl;
		head = head -> next;
		if (head == NULL){
			break;
		}
	}	
}


void reverse(link_list *head){
	link_list *after = new link_list;
	link_list *current = new link_list;
	link_list *before = new link_list;
	current = head;
	before = NULL;
	after = head -> next;
	while(current -> next != NULL){
		current -> next = before;
		before = current;
		current = after;
		after = after ->next;
		}
		current -> next = before;
		head = current;

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
	// addbefore(5,head);
	
//4. delete the number 
	// delete1(4,head);

//5. reverse the list 
	// greverse(head);	


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


