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
Node* circularlist(Node* head) {
Node* new_head = head;
while (head->next != NULL) {
head = head->next;
}
head->next = new_head;
return new_head;
}
int main() {
Node* head = NULL;
const int size = 3;
int arr[size] = { 1, 2, 3 };
for (int i = size - 1; i >= 0; i--) {
create(&head, arr[i]);
}
head = circularlist(head);
cout << head->next->next->next->data;
return 0;
}
