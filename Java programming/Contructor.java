/**
 * @(#)Text3.java
 *
 *
 * @author 
 * @version 1.00 2021/7/1
 */

class Box {

    double width;
    double height;	
    double depth;
    Box(){
    	System.out.println ("Construting a box");
    	width=10;
    	height=10;
    	depth=10;
    }
    double volume(){
    	return width*height*depth;
    }
}
class Contructor{
	public static void main (String[] args) {
		Box mybox1=new Box();
		Box mybox2=new Box();
		double vol;
		vol=mybox1.volume();
		System.out.println ("Volumn is "+vol);
			vol=mybox2.volume();
		System.out.println ("Volumn is "+vol);
    
    }
}