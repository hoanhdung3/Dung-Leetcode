# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

# solution 1:
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if head==None:
            return None
        head.next = self.removeElements(head.next, val)
        return head.next if head.val==val else head

# solution 2:
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        while head and head.val==val:
            head = head.next
        prev, curr = None, head
        while curr:
            if curr.val==val:
                prev.next = curr.next
            else:
                prev = curr
            curr = curr.next
        return head

# solution 3:
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        while head and head.val==val:
            head = head.next
        curr = ListNode()
        curr = head
        while curr and curr.next:
            if curr.next.val==val:
                curr.next = curr.next.next
            else:
                curr = curr.next
        return head
