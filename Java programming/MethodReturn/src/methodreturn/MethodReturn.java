/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package methodreturn;

/**
 *
 * @author arfan
 */
class Box{
double width;
double height;
double depth;
double vol(){
return width*height*depth;
}
}
public class MethodReturn {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Box mybox1= new Box();
	Box mybox2= new Box();
	double vol;
	mybox1.width=10;
	mybox1.height=10;
	mybox1.depth=10;
	mybox2.width=5;
	mybox2.height=5;
	mybox2.depth=5;
	vol=mybox1.width*mybox1.height*mybox1.depth;
	System.out.println ("Volumn of Box 1 is:"+vol);
	vol=mybox2.width*mybox2.height*mybox2.depth;
	System.out.println ("Volumn of Box 2 is:"+vol);
    }
    
}
