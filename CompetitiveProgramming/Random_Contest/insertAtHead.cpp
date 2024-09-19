#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* insertAtHead(ListNode* head,int newValue){

    ListNode* newNode = new ListNode(newValue);
    newNode -> next = head;

    return newNode;
}
void printList(ListNode* head){
    ListNode* temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    ListNode* head = nullptr;
    
    head = insertAtHead(head,10);
    head = insertAtHead(head,20);
    
    printList(head);

}