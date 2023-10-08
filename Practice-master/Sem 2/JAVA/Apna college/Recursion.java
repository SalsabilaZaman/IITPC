public class Recursion 
{
    public static int calculateFactorial(int n){
        if(n == 0 || n == 1) return 1;
        int factN_ = calculateFactorial(n-1);
        //experiment
        //System.out.println("Fact of " + (n-1) + " is: " + factN_);
        return n*factN_;
    }

    public static void printNumber(int n){
        if(n == 0) return;
        System.out.print(n + " ");
        printNumber(n-1);
    }

    public static int calculateSum(int i, int n, int sum){
        //1+2+3+4+5
        if(i == n){
            sum+=i;
            return sum;
        }  
        sum += i;
        return calculateSum(i+1, n,sum);

    }

    //experiment
    public static int calculateSum(int n){
        // 5+4+3+2+1+0
        if(n == 1) return 1;
        int n_ = calculateSum(n-1);
        System.out.print("sum of "+ (n-1) + " numbers is: ");
        System.out.println(n_);
        return n + n_;

    }

    public static void printFib(int a, int b, int n){
        // a = second last term
        // b = last term
        // n = nth term
        if(n == 0) return;

        int c = a + b;
        System.out.print(c + " ");
        printFib(b, c, n-1);
    }
    
    // x^n == x * x * x * x * ... n times
    // x^n == x * x^n-1
    // base case = x^0 = 1 

    public static int calculatePower(int x, int n){
        if(x == 0) return 0;
        if(n == 0) return 1;
        return x * calculatePower(x, n-1);
    }

    public static int _calculatePower(int x, int n){
        if(n == 0) return 1;
        if(x == 0) return 0;

        //if n is even --> x^n = x^n * x^n 
        if(n % 2 == 0){
            return _calculatePower(x, n/2) * _calculatePower(x, n/2);
        }
        // if n is odd --> x^n = x^n/2 * x^n/2 * x
        else return _calculatePower(x, n/2) * _calculatePower(x, n/2) * x;

    }

    public static void main(String[] args) {
        int n = 9;

        //Factorial
        int Fact = calculateFactorial(n);
        System.out.println("Factorial of " + n +" is: "+Fact);
        printNumber(n);
        System.out.println();

        //Fibonacci
        System.out.print("Fibonacci Series:");
        int a = 0, b = 1;
        System.out.print(a + " " + b+ " ");
        printFib(a, b, n - 2);


        //sum func
        System.out.println("\nSum Func:");
        int Sum = calculateSum(0, 5, 0);
        System.out.println(Sum);
        System.out.println("Other sum func: ");
        int sum = calculateSum(5);
        System.out.println("Sum: "+sum);
        
        //power func [Stack height ~= n] 
        int x = 2;
        int power = calculatePower(x, 6);
        System.out.println(x + " to the power 6 is: " + power);
        
        //power func [Stack height ~= log n]
        int y = 3;
        int _power = _calculatePower(y, 4);
        System.out.println(y + " to the power 4 is: " + _power);        

    }
    
}
