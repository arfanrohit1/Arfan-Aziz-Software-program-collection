/**
 * @(#)Method with parameter.java
 *
 *
 * @author 
 * @version 1.00 2021/7/1
 */


class Box {

   double width;
   double height;
   double depth;
   
   double volumn(){
   	return width*height*depth;
   }
    void setDim(double w,double h,double d){
    	width=w;
    	height=h;
    	depth=d;
    }
}
class MethodWithParameter{
	public static void main (String[] args) {
		Box mybox1=new Box();
		Box mybox2=new Box();
		double vol;
		mybox1.setDim(10,10,10);
		vol=mybox1.volumn();
		System.out.println ("Volumn is "+vol);
		mybox2.setDim(5,5,5);
		vol=mybox2.volumn();
		System.out.println ("Volumn is "+vol);
    }
}