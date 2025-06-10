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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> minHeap;

        if(lists.empty()){
            return NULL;
        }
        
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        for (int i = 0; i < lists.size(); i++) {
            if(lists[i]!=NULL)
            minHeap.push({lists[i]->val, lists[i]});
        }

        while (!minHeap.empty()) {

            auto [value, address] = minHeap.top();
            minHeap.pop();
            temp->next = address;
            temp = temp->next;
            if(address->next!=NULL)
            minHeap.push({address->next->val, address->next});
        }
        return dummy->next;
    }
};