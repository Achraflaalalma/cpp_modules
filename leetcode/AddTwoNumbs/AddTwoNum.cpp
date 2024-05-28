/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AddTwoNum.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaalalm <alaalalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:50:25 by alaalalm          #+#    #+#             */
/*   Updated: 2024/04/22 22:53:47 by alaalalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "header.hpp"

 /// @brief this code sums up Two Numbers;

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummyHead = new ListNode;
    ListNode* curr = dummyHead;

    int carry = 0;
    while (l1 || l2) {
        int x = (l1) ? l1->val : 0;
        int y = (l2) ? l2->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        if (l1) l1 = l1->next;
        if (l2) l2 = l2->next;
    }
    if (carry > 0) {
        curr->next = new ListNode(carry);
    }
    return dummyHead;
}

void Solution::garbageCollecor(ListNode* res,ListNode* l1,ListNode* l2) {
    ListNode* tmp;

    tmp = res->next; delete res; res = tmp;
    while (res != nullptr) {
        tmp = res->next;
        std::cout << res->val;
        delete res; res = tmp;
    }
    while (l1 || l2) {
        if (l1) delete l1; l1 = l1->next;
        if (l2) delete l2; l2 = l2->next;
    }
}

int main() {
  
    Solution sol;
    ListNode* tmp; 

    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* res = sol.addTwoNumbers(l1, l2);
    sol.garbageCollecor(res, l1, l2);
    return 0;
}

// 2 4 3        342
// 5 6 4        465
// 7 0 8        807