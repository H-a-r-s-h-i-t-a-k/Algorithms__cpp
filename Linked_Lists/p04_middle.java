static int getMiddleElement(Node head){
  Node slow = head;
  Node fast = head;

  while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
  }

  return slow.val;  // slow will be at the middle


}
