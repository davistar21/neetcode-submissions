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
     * @return {ListNode}
     */
    insertGreatestCommonDivisors(head: ListNode | null): ListNode {
        const gcd = (a: number, b: number) => {
            while (b !== 0) {
                [a, b] = [b, a % b];
            }
            return a;
        }
        let curr = head;
        
        while (curr && curr.next) {
            let nextNode = curr.next;
            let g = gcd(curr.val, nextNode.val);
            curr.next = new ListNode(g, nextNode);
            curr = nextNode;
        }
        return head;
    }
}
