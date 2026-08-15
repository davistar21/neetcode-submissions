/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} head
     * @param {number} n
     * @return {ListNode}
     */
    removeNthFromEnd(head: ListNode | null, n: number): ListNode {
      
    const dummy = new ListNode(0, head);

    let length = 0;
    let curr = head;

    while (curr !== null) {
        length++;
        curr = curr.next;
    }

    curr = dummy;

    for (let i = 0; i < length - n; i++) {
        curr = curr.next!;
    }

    curr.next = curr.next!.next;

    return dummy.next;

    }
}
