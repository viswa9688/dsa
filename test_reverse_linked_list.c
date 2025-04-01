#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

extern struct ListNode* reverse(struct ListNode* head);

// Helper to create a linked list from an array
struct ListNode* create_linked_list(int arr[], int size) {
    if (size == 0) return NULL;
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct开通

    head->val = arr[0];
    head->next = NULL;
    struct ListNode* current = head;
    for (int i = 1; i < size; i++) {
        current->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        current = current->next;
        current->val = arr[i];
        current->next = NULL;
    }
    return head;
}

// Helper to print linked list
void print_linked_list(struct ListNode* head) {
    printf("[");
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d", current->val);
        if (current->next != NULL) printf(", ");
        current = current->next;
    }
    printf("]\n");
}

// Helper to free the linked list
void free_linked_list(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        struct ListNode* next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    // Test case 1: 1 -> 2 -> 3 -> 4 -> 5
    int arr1[] = {1, 2, 3, 4, 5};
    struct ListNode* head1 = create_linked_list(arr1, 5);
    struct ListNode* reversedHead1 = reverse(head1);
    printf("Test case 1:\n");
    printf("Input: [1, 2, 3, 4, 5]\n");
    printf("Output: ");
    print_linked_list(reversedHead1);
    free_linked_list(reversedHead1);

    // Test case 2: Single node
    int arr2[] = {1};
    struct ListNode* head2 = create_linked_list(arr2, 1);
    struct ListNode* reversedHead2 = reverse(head2);
    printf("\nTest case 2:\n");
    printf("Input: [1]\n");
    printf("Output: ");
    print_linked_list(reversedHead2);
    free_linked_list(reversedHead2);

    // Test case 3: Empty list
    int arr3[] = {};
    struct ListNode* head3 = create_linked_list(arr3, 0);
    struct ListNode* reversedHead3 = reverse(head3);
    printf("\nTest case 3:\n");
    printf("Input: []\n");
    printf("Output: ");
    print_linked_list(reversedHead3);
    free_linked_list(reversedHead3);

    return 0;
}