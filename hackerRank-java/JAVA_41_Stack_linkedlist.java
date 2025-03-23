// Java program to implement a stack using singly linked
// list

// Class representing a node in the linked list
class Node {
    int data;
    Node next;
    Node(int new_data) {
        this.data = new_data;
        this.next = null;
    }
}

// Class to implement stack using a singly linked list
class Stack {

    // Head of the linked list
    Node head;

    // Constructor to initialize the stack
    Stack() { this.head = null; }

    // Function to check if the stack is empty
    boolean isEmpty() {

        // If head is null, the stack is empty
        return head == null;
    }

    // Function to push an element onto the stack
    void push(int new_data) {

        // Create a new node with given data
        Node new_node = new Node(new_data);

        // Check if memory allocation for the new node
        // failed
        if (new_node == null) {
            System.out.println("\nStack Overflow");
            return;
        }

        // Link the new node to the current top node
        new_node.next = head;

        // Update the top to the new node
        head = new_node;
    }

    // Function to remove the top element from the stack
    void pop() {

        // Check for stack underflow
        if (isEmpty()) {
            System.out.println("\nStack Underflow");
            return;
        }
        else {

            // Assign the current top to a temporary
            // variable
            Node temp = head;

            // Update the top to the next node
            head = head.next;

            // Deallocate the memory of the old top node
            temp = null;
        }
    }

    // Function to return the top element of the stack
    int peek() {

        // If stack is not empty, return the top element
        if (!isEmpty())
            return head.data;
        else {
            System.out.println("\nStack is empty");
            return Integer.MIN_VALUE;
        }
    }
}

// Driver code
public class Stack_linkedlist {
//    stack<Character>st = new stack<>();

    public static void main(String[] args)
    {
        // Creating a stack
        Stack st = new Stack();

        // Push elements onto the stack
        st.push(11);
        st.push(22);
        st.push(33);
        st.push(44);

        // Print top element of the stack
        System.out.println("Top element is " + st.peek());

        // removing two elemements from the top
        System.out.println("Removing two elements...");
        st.pop();
        st.pop();

        // Print top element of the stack
        System.out.println("Top element is " + st.peek());
    }
}
