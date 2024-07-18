class ListNode {
    int data;
    ListNode next;

    ListNode() {
        this.next = null;
    }

    ListNode(int data) {
        this.data = data;
        this.next = null;
    }
}

class MiddleOfALinkedList {
    public ListNode middleNode(ListNode head) {
        if (head == null)
            return null;
        ListNode slow = head;
        ListNode fast = head;
        while (fast.next != null) {
            slow = slow.next;
            fast = fast.next;
            if (fast.next != null)
                fast = fast.next;
        }
        return slow;
    }
}