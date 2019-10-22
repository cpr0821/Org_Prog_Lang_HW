
package q7;

import java.io.*;
import java.util.*;

public class Q7 {
    public static void main(String[] args) {
        int a = 5,b = 2;
        
        System.out.println("a=5, b=2");
        System.out.println("square(a) + (a/2) = " + (square(a)+a));
        System.out.println("(b/2) + square(b) = " + (b+square(b)));
    }
    
    public static int square(int a){
        a = 10;
        return a*a;
    }
}
