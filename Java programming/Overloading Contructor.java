/**
 * @(#)Text2.java
 *
 *
 * @author 
 * @version 1.00 2021/7/3
 */


class Box{
double width;
double height;
double depth;
    Box(double w,double h,double d){
    	width=w;
    	height=h;
    	depth=d;
    }
    Box(){
    	width=-1;
    	height=-1;
    	depth=-1;
    }
    Box(double len){
    	width=height=depth=len;
    }
    double volumn(){
    	return width*height*depth;
    }
}
class OverloadCon{
	public static void main (String[] args) {
		Box mybox1=new Box(20,15,10);
		Box mybox2=new Box();
		Box mycube=new Box(10);
		double vol;
		vol=mybox1.volumn();
		System.out.println ("The volumn of mybox1 is: "+vol);
		vol=mybox2.volumn();
		System.out.println ("The volumn of mybox2 is: "+vol);
		vol=mycube.volumn();
		System.out.println ("The volumn of mycube is: "+vol);
    }
}