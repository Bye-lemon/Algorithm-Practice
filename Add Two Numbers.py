# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        carry = 0
        l = []
        while True:
            if l1 is not None and l2 is not None:
                carry, rest = divmod((l1.val + l2.val + carry), 10)
                l.append(rest)
                l1, l2 = l1.next, l2.next
            elif l2 is not None:
                carry, rest = divmod((l2.val + carry), 10)
                l.append(rest)
                l2 = l2.next
            elif l1 is not None:
                carry, rest = divmod((l1.val + carry), 10)
                l.append(rest)
                l1 = l1.next
            else:
                if carry:
                    l.append(carry)
                break
        return l
