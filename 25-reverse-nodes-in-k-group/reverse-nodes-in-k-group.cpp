/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

   ListNode * reverseList(vector<int>&ans,ListNode *fillNode){
     
      for(int i=ans.size()-1;i>=0;i--){
       
        fillNode->val=ans[i];
        fillNode=fillNode->next;
      }
      return fillNode;

    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>ans;
        ListNode *currentNode=head;
        ListNode *fillNode=head;

        if(head==NULL || head->next==NULL|| k==1){
            return head;
        }
         
        while(currentNode!=NULL){
          
        ans.push_back(currentNode->val);
         currentNode=currentNode->next;
         
           if(ans.size()==k){
           fillNode=reverseList(ans,fillNode);
            ans.clear();
           }
     }
           return head;
    }
};