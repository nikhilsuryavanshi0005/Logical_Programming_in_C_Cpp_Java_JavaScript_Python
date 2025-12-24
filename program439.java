
class node {
    public int data;
    public node next;
}

class SinglyLL {
    public node first;
    public int iCount;

    SinglyLL() {
        System.out.println("Object of SinglyLL gets Created");
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

class program439 {
    public static void main(String Arr[]) {
        int iRet = 0;

        SinglyLL obj = null;

        obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
        iRet = obj.Count();

        System.out.println("Number of Nodes are :" + iRet);

    }
}