# Definition for singly-linked list node
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

# Function to reverse the linked list
def reverse(head):
    prev = None
    current = head
    while current is not None:
        next_node = current.next  # Store the next node
        current.next = prev       # Reverse the link
        prev = current            # Move prev one step forward
        current = next_node       # Move current one step forward
    return prev

#comment for push change 123