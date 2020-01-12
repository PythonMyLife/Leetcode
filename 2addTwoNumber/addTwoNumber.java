/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l3 = new ListNode(0);
        ListNode head = l3;
        int add = 0, tmp;
        while(l1 != null || l2 != null) {
            tmp = ((l1 == null) ? 0:l1.val) + ((l2 == null) ? 0:l2.val) + add;
            add = tmp / 10;
            l3.next = new ListNode(tmp % 10);
            l1 = (l1 == null) ? null:l1.next;
            l2 = (l2 == null) ? null:l2.next;
            l3 = l3.next;
        }
        if(add == 1) {
            l3.next = new ListNode(1);
        }
        return head.next;
    }
}