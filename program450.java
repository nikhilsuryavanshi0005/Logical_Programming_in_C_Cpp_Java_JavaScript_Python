//Doubly Linear linked list

class node {
    public int data;
    public node next;
    public node prev;

    public node(int No) {
        this.data = No;
        this.next = null;
        this.prev = null;
    }

}

class DoublyLL {
    private node first;
    private int iCount;

    DoublyLL() {
        System.out.println("Object of DoublyLL gets Created");
        this.first = null;

        this.iCount = 0;
    }

    public void InsertFirst(int No) {

    }

    public void InsertLast(int No) {

    }

    public void InsertAtPos(int No, int Pos) {

    }

    public void DeleteFirst() {

    }

    public void DeleteLast() {

    }

    public void DeleteAtPos(int Pos) {

    }

    public void Display() {

    }

    public int Count() {
        return this.iCount;
    }
}

class program450 {
    public static void main(String Arr[]) {
        int iRet = 0;

        DoublyLL obj = null;

        obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of Nodes are :" + iRet);

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);

        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of Nodes are :" + iRet);

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of Nodes are :" + iRet);

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of Nodes are :" + iRet);

        obj.InsertAtPos(105, 4);
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of Nodes are :" + iRet);

        obj.DeleteAtPos(4);
        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of Nodes are :" + iRet);

        // Important for memory deallocation

        obj = null;
        System.gc();

    }
}