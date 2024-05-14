#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void createNode(ListNode* node, int i){
  node = (ListNode*)malloc(sizeof(ListNode));
  node->val = i;
  node->next = NULL;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string e1;
        string e2;

        while(l1->next){
          e1.push_back(l1->val + '0');
          l1 = l1->next;
        }
        e1.push_back(l1->val + '0');

        while(l2->next){
            e2.push_back(l2->val + '0');
            l2 = l2->next;
        }

        e2.push_back(l2->val + '0');

        reverse(e1.begin(), e1.end());
        reverse(e2.begin(), e2.end());

        int n1 = stoi(e1);
        int n2 = stoi(e2);

        int output = n1+n2;
        string str = to_string(output);

        ListNode* l = (ListNode*) malloc(sizeof(ListNode));
        l->next = NULL;

        for(int i = 0; i < str.size(); i++){
            int val = str[i] - '0';
            if(l){
              l->val = val;
            } else {
              createNode(l, val);
            }
            cout << l->val << endl;
            l = l->next;
        }
        return l;
    }

int main (int argc, char *argv[]) {
  ListNode *l1 = (ListNode*)malloc(sizeof(ListNode));
  ListNode *l2 = (ListNode*)malloc(sizeof(ListNode));
  ListNode *l3 = (ListNode*)malloc(sizeof(ListNode));

  l1->val = 2;
  l1->next = (ListNode*)malloc(sizeof(ListNode));
  l1->next->val = 4;
  l1->next->next = (ListNode*)malloc(sizeof(ListNode));
  l1->next->next->val = 3;

  l2->val = 5;
  l2->next = (ListNode*)malloc(sizeof(ListNode));
  l2->next->val = 6;
  l2->next->next = (ListNode*)malloc(sizeof(ListNode));
  l2->next->next->val = 4;


  ListNode* res = addTwoNumbers(l1, l2);

  free(l1);
  free(l2);
  return 0;
}
