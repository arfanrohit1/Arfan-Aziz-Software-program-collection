
/**
 * @(#)Text1.java
 *
 *
 * @author
 * @version 1.00 2021/6/30
 */

class Box {

    double width;
    double height;
    double depth;

    double volume() {
        return width * height * depth;
    }
}

class BoxObject {

    public static void main(String[] args) {
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        double vol;
        mybox1.width = 10;
        mybox1.height = 10;
        mybox1.depth = 10;
        mybox2.width = 5;
        mybox2.height = 5;
        mybox2.depth = 5;
        vol = mybox1.width * mybox1.height * mybox1.depth;
        System.out.println("Volumn of Box 1 is:" + vol);
        vol = mybox2.width * mybox2.height * mybox2.depth;
        System.out.println("Volumn of Box 2 is:" + vol);
    }
}
