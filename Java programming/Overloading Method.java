/**
 * @(#)Text1.java
 *
 *
 * @author 
 * @version 1.00 2021/7/3
 */


class OverloadDemo {

    void test(){
    	System.out.println ("No parameter");
    }
    void test(int a){
    	System.out.println ("a: "+a);
    }
    void test(int a,int b){
    	System.out.println ("a and b: "+a+" "+b);
    }
    double test(double a){
    	System.out.println ("Double a: "+a);
    	return a*a;
    }
}
class Overload{
	public static void main (String[] args) {
		OverloadDemo ob=new OverloadDemo();
		ob.test();
		ob.test(10);
		ob.test(10,20);
		double result;
		result=ob.test(123.25);
		System.out.println ("The result of ob.test(123.25) is: "+result);
    }
}