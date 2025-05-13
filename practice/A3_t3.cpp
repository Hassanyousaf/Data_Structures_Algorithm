#include <iostream>
using namespace std;

struct node {
int data;
node* next;
};
node* add(int data)
{
node* newnode = new node;
newnode->data = data;
newnode->next = NULL;
return newnode;
}
void printLinkedList(node* curr) {
   while (curr != NULL) {
      cout << curr->data << " -> ";
      curr = curr->next;
   }
   cout << "NULL" << endl;
}
void printArr(int a[], int n)
{
for (int i = 0; i < n; i++)
cout << a[i] << " ";
}
int findlength(node* head)
{
node* curr = head;
int cnt = 0;
while (curr != NULL) {
cnt++;
curr = curr->next;
}
return cnt;
}
void convertArr(node* head)
{
int len = findlength(head);
int arr[len];
int index = 0;
node* curr = head;
while (curr != NULL) {
arr[index++] = curr->data;
curr = curr->next;
}
printArr(arr, len);
}
int main()
{
node* head = NULL;
head = add(1);
head->next = add(2);
head->next->next = add(3);
head->next->next->next = add(4);
head->next->next->next->next = add(5);
cout<<"linked list :"<<endl;
    printLinkedList(head);
    cout<<"array :"<<endl;
convertArr(head);
return 0;
}
