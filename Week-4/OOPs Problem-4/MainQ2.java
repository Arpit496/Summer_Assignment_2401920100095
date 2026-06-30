public class MainQ2 {

    public static void main(String[] args) {

        Outer obj = new Outer();
        obj.display();

        Outer.Inner obj2 = obj.new Inner();
        obj2.display();
    }
}