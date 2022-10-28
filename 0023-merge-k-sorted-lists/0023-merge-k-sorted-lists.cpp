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
    ListNode* mergeKLists(vector<ListNode*>& list) {
        //1. Base Case
        if(list.size()==0)return NULL;
        
        //2. Put all list node in vector to sort them
        vector<pair<int, ListNode*>>vec;
        
        for(int i = 0; i<list.size();i++){
            auto temp = list[i];
            while(temp){
                vec.push_back({temp->val,temp});
                temp=temp->next;
            }
        }
        if(vec.size()==0)return NULL;
        //3.Sort the vector
        sort(vec.begin(), vec.end());
        
        //4. Connect all nodes inside vector vec
        
        for(int i = 0; i<vec.size()-1;i++){
            vec[i].second->next = vec[i+1].second;
        }
        vec[vec.size()-1].second->next = NULL;
        return vec[0].second;
        
    }
};