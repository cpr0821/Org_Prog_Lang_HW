
package q4;

import java.util.*;
import java.io.*;

public class Q4 {

    public static void main(String[] args) {
        int a = 1;
        String str = "apple";
        float flt = 0;
        double db = 3.5;
        char ch = 'b';
        
        System.out.println("a = 1, str = \"apple\", flt = 0, db = 3.5, ch = 'b'");
        System.out.println("Original values are restored before testing each data type.");
        
        a = ch;
        System.out.println("a = ch, a = " + a);
        System.out.println("a = str/flt/db results in an error"); 
        
        System.out.println("str = a/flt/db/ch results in an error");
        
        a = 1;
        flt = a;
        System.out.println("flt = a, flt = " + flt);
        
        flt = ch;
        System.out.println("flt = ch, flt = " + flt);
        System.out.println("flt = db/str results in an error");
        
        flt = 0;
        db = a;
        System.out.println("db = a, db = " + db);
        
        db = flt;
        System.out.println("db = flt, db = " + db);
        
        db = ch;
        System.out.println("db = ch, db = " + db);
        System.out.println("db = str results in an error");
        
        System.out.println("ch = a/str/flt/db results in an error");    
    }
    
}
