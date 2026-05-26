
class Solution {
    /**
     * @param {ListNode} head
     * @return {ListNode}
     */
    reverseList(head: ListNode | null): ListNode {
        let prev: ListNode | null = null;
        let curr = head;
        while (curr !== null) {
            let nextNode = curr.next;
            curr.next = prev;


            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
}
