from reverse_linked_list import ListNode, reverse

# Helper function to create a linked list from a list
def create_linked_list(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper function to convert linked list to list
def linked_list_to_list(head):
    result = []
    current = head
    while current:
        result.append(current.val)
        current = current.next
    return result

# Main function for testing
def main():
    # Test case 1: 1 -> 2 -> 3 -> 4 -> 5
    arr1 = [1, 2, 3, 4, 5]
    head1 = create_linked_list(arr1)
    reversed_head1 = reverse(head1)
    print("Test case 1:")
    print("Input:", arr1)
    print("Output:", linked_list_to_list(reversed_head1))
    
    # Test case 2: Single node
    arr2 = [1]
    head2 = create_linked_list(arr2)
    reversed_head2 = reverse(head2)
    print("\nTest case 2:")
    print("Input:", arr2)
    print("Output:", linked_list_to_list(reversed_head2))
    
    # Test case 3: Empty list
    arr3 = []
    head3 = create_linked_list(arr3)
    reversed_head3 = reverse(head3)
    print("\nTest case 3:")
    print("Input:", arr3)
    print("Output:", linked_list_to_list(reversed_head3))

if __name__ == "__main__":
    main()