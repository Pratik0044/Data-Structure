//find the rotate linked list of given list
//https://leetcode.com/problems/rotate-list/

  //Definition for singly-linked list.
  #include<iostream>
  using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    int findlen(ListNode* head){
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return 0;
        int len=findlen(head);
        int actualRotate=(k % len);
        if(actualRotate==0) return head;
        int newlastnodepos=len-actualRotate-1;

        ListNode* newhead=NULL;
        ListNode* newlastnode=head;

        for(int i=0;i<newlastnodepos; i++){
            newlastnode=newlastnode->next;
        }
        newhead=newlastnode->next;
        newlastnode->next=NULL;
        ListNode* it = newhead; 
        while(it->next){
            it=it->next;
        }
        it->next=head;
        return newhead;
    }
};