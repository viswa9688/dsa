#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val) : val(val), next(nullptr) {}
};

extern ListNode* reverse(ListNode* head);

// Helper to create a linked list from a vector
ListNode* create_linked_list(const std::vector<int>& arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* current = head;
    for (size_t i = 1; i < arr.size(); i++) {
        current->next = new ListNode(arr[i]);
        current = current->next;
    }
    return head;
}

// Helper to print linked list
void print_linked_list(ListNode* head) {
    std::cout << "[";
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val;
        if (current->next != nullptr) std::cout << ", ";
        current = current->next;
    }
    std::cout << "]\n";
}

// Helper to free the linked list
void free_linked_list(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }
}

int main() {
    // Test case 1: 1 -> 2 -> 3 -> 4 -> 5
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    ListNode* head1 = create_linked_list(arr1);
    ListNode* reversedHead1 = reverse(head1);
    std::cout << "Test case 1:\n";
    std::cout << "Input: [1, 2, 3, 4, 5]\n";
    std::cout << "Output: ";
    print_linked_list(reversedHead1);
    free_linked_list(reversedHead1);

    // Test case 2: Single node
    std::vector<int> arr2 = {1};
    ListNode* head2 = create_linked_list(arr2);
    ListNode* reversedHead2 = reverse(head2);
    std::cout << "\nTest case 2:\n";
    std::cout << "Input: [1]\n";
    std::cout << "Output: ";
    print_linked_list(reversedHead2);
    free_linked_list(reversedHead2);

    // Test case 3: Empty list
    std::vector<int> arr3;
    ListNode* head3 = create_linked_list(arr3);
    ListNode* reversedHead3 = reverse(head3);
    std::cout << "\nTest case 3:\n";
    std::cout << "Input: []\n";
    std::cout << "Output: ";
    print_linked_list(reversedHead3);
    free_linked_list(reversedHead3);

    return 0;
}