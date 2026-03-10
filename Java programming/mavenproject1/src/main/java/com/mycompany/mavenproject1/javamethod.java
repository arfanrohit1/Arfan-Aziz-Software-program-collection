/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.mavenproject1;

/**
 *
 * @author arfan
 */
class Box{
double width;
double height;
double depth;
void vol(){
System.out.println("The volume is:");
System.out.println(width*height*depth);
}
}
class javamethod {

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        // TODO code application logic here
        Box mybox1=new Box();
        Box mybox2=new Box();
        mybox1.width=10;
        mybox1.height=10;
        mybox1.depth=10;
        mybox2.width=5;
        mybox2.height=5; 
        mybox2.depth=5;
        mybox1.vol();
        mybox2.vol();
    }
}
