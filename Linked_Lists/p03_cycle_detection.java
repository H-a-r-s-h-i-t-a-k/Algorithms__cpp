
class Solution {
  public static Node cyclepresent(Node head) {
    Node slow = head;
    Node fast = head;

    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
      if (fast == slow)
        return slow;
    }

    return null;
  }

  public static Node detectCycle(Node head) {
    // Add code here
    Node slow = head;
    Node intersect = cyclepresent(head);
    while (slow != intersect) {
      slow = slow.next;
      intersect = intersect.next;
    }
    return intersect;
  }
}