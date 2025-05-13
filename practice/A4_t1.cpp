#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
};
void create(Node**head, int val) {
Node* new_node = new Node();
new_node->data = val;
new_node->next = *head;
*head = new_node;
}
void display_list(Node *head) {
while (head->next != NULL) {
cout << head->data << " -> ";
head = head->next;
}
}
void middleNode(Node* head) {
Node* fast_ptr;
Node* slow_ptr;
fast_ptr = head;
slow_ptr = head;
if (head != NULL) {
while (fast_ptr->next != NULL && slow_ptr->next != NULL) {
fast_ptr = fast_ptr->next->next;
slow_ptr = slow_ptr->next;
}
cout <<endl << "Middle element is : " << slow_ptr->data;
}
}
int main() {
Node* head = new Node();
const int size = 10;
int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
for (int i = size - 1; i >= 0; i--) {
create(&head, arr[i]);
}
display_list(head);
middleNode(head);
return 0;
}
