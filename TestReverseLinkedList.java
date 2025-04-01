public class TestReverseLinkedList {
    // Helper to create a linked list from an array
    public static ListNode createLinkedList(int[] arr) {
        if (arr.length == 0) return null;
        ListNode head = new ListNode(arr[0]);
        ListNode current = head;
        for (int i = 1; i < arr.length; i++) {
            current.next = new ListNode(arr[i]);
            current = current.next;
        }
        return head;
    }

    // Helper to convert linked list to string for printing
    public static String linkedListToString(ListNode head) {
        StringBuilder sb = new StringBuilder("[");
        ListNode current = head;
        while (current != null) {
            sb.append(current.val);
            if (current.next != null) sb.append(", ");
            current = current.next;
        }
        sb.append("]");
        return sb.toString();
    }

    public static void main(String[] args) {
        // Test case 1: 1 -> 2 -> 3 -> 4 -> 5
        int[] arr1 = {1, 2, 3, 4, 5};
        ListNode head1 = createLinkedList(arr1);
        ListNode reversedHead1 = ReverseLinkedList.reverse(head1);
        System.out.println("Test case 1:");
        System.out.println("Input: [1, 2, 3, 4, 5]");
        System.out.println("Output: " + linkedListToString(re   System.out.println("Output: " + linkedListToString(reversedHead1));

        // Test case 2: Single node
        int[] arr2 = {1};
        ListNode head2 = createLinkedList(arr2);
        ListNode reversedHead2 = ReverseLinkedList.reverse(head2);
        System.out.println("\nTest case 2:");
        System.out.println("Input: [1]");
        System.out.println("Output: " + linkedListToString(reversedHead2));

        // Test case 3: Empty list
        int[] arr3 = {};
        ListNode head3 = createLinkedList(arr3);
        ListNode reversedHead3 = ReverseLinkedList.reverse(head3);
        System.out.println("\nTest case 3:");
        System.out.println("Input: []");
        System.out.println("Output: " + linkedListToString(reversedHead3));
    }
}