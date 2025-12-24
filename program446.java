
class node {
    public int data;
    public node next;

    public node(int No) // Important
    {
        this.data = No;
        this.next = null;
    }
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
        node newn = null;

        newn = new node(No); // changed code

        newn.next = this.first;
        this.first = newn;
        this.iCount++;

    }

    public void InsertLast(int No) {
        node newn = null;
        node temp = null;

        newn = new node(No);

        if (this.first == null) {
            this.first = newn;
            return;
        } else {
            temp = this.first;

            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newn;
        }

        this.iCount++;

    }

    public void InsertAtPos(int No, int Pos) {
        node newn = null;
        node temp = null;
        int iCnt = 0;

        newn = new node(No);

        if (Pos < 1 || Pos > this.iCount + 1) {
            System.out.println("Invalid Position");
            return;
        }

        if (Pos == 1) {
            this.InsertFirst(No);
        } else if (Pos == this.iCount + 1) {
            this.InsertLast(No);
        } else {
            temp = this.first;

            for (iCnt = 1; iCnt < (Pos - 1); iCnt++) {
                temp = temp.next;
            }
            newn.next = temp.next;
            temp.next = newn;

            this.iCount++;

        }

    }

    public void DeleteFirst() {
        if (this.first == null) {
            return;
        } else if (this.first.next == null) {
            this.first = null;
            System.gc();
        } else {
            this.first = this.first.next;

        }
        this.iCount--;
    }

    public void DeleteLast() {

        node temp = null;

        if (this.first == null) {
            return;
        } else if (this.first.next == null) {
            this.first = null;
            System.gc();
        } else {
            temp = this.first;
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;

        }
        System.gc();
        this.iCount--;
    }

    public void DeleteAtPos(int Pos) {

        node temp = null;
        int iCnt = 0;

        if (Pos < 1 || Pos > this.iCount) {
            System.out.println("Invalid Position");
            return;
        }

        if (Pos == 1) {
            this.DeleteFirst();
        } else if (Pos == this.iCount) {
            this.DeleteLast();
        } else {
            temp = this.first;

            for (iCnt = 1; iCnt < (Pos - 1); iCnt++) {
                temp = temp.next;
            }
            temp.next = temp.next.next;
            System.gc();

            this.iCount--;

        }

    }

    public void Display() {
        node temp = null;

        temp = this.first;

        while (temp != null) {
            System.out.print("| " + temp.data + " |->");
            temp = temp.next;

        }
        System.out.println("null");
    }

    public int Count() {
        return this.iCount;
    }
}

class program446 {
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