import java.util.*;
class Node {
    int data;
    Node next;
    Node(int data){
        this.data = data;
        next=null;
    }
}

public class Java_36_linkedList{
    static Node head = null;
    static Node tail=null;
    static Scanner sc = new Scanner(System.in);
    public static void takeInput(){
        int n=sc.nextInt();
        for(int i=0;i<n;i++){
            int data = sc.nextInt();
            if(head == null){
                head = new Node(data);
                tail = head;
            }else{
                tail.next = new Node(data);
                tail = tail.next;
            }
            
        }
    }
    public static void print(Node headTemp){
        if(headTemp==null)
        {return;}
        
        while(headTemp != null){
            System.out.println(headTemp.data);
            headTemp=headTemp.next;
        }
        
    }
    public static int findIndex(Node head, int n){
        int index =-1;
        int i=0;
        
        while(head != null){
            int data = head.data;
            if(data==n){
                index=i;
            }
            i++;
            head=head.next;
        }
        return index;
    }
    public static void main(String args[]){
        Scanner sc  =new Scanner(System.in);
        takeInput();
        print(head);
        findIndex(head, 4);
        System.out.println("sfs");
    }
}