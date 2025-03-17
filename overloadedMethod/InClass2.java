

/**
 *
 * @author Evelyn Luo
 */
public class InClass2 {

    public static void main(String[] args) {
        System.out.printf("%f%n", max(4.2, 7.5, 8.0));
        System.out.printf("%d%n", max(42, 75, 80));
        System.out.printf("%c%n", max('a', 'b', 'c'));
    }
    
    public static int max(int a, int b){
        int largest = a;
        
        if(b > largest){
            largest = b;
        }
 
        System.out.println("max(int,int)");
        return largest;
    }
    
        public static int max(int a, int b, int c){
        int largest = a;
        
        if(b > largest){
            largest = b;
        }
        
        if(c > largest){
            largest = c;
        }
         System.out.println("max(int,int,int)");
        
        return a > b ? a > c ? a : c : b > c ? b : c;
       
    }
        
        public static double max(double a, double b, double c){
        double largest = a;
        
        if(b > largest){
            largest = b;
        }
        
        if(c > largest){
            largest = c;
        }
        System.out.println("max(double,double,double");
        return largest;
    }
        
    public static char max(char a, char b, char c){
        char largest = a;
        
        if(b > largest){
            largest = b;
        }
        
        if(c > largest){
            largest = c;
        }
        
        System.out.println("max(char,char,char)");
        return largest;
    }

}
