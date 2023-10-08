import java.util.*;

public class bit_manipulation
{ 
// {
    // get bit :

    // public static void main(String[] args) 
    //{
    //     int n = 5 ;      //0101
    //     int pos = 2;     //0001 -> 0100 
    //     int bitMask = 1<<pos ;
         
    //     if ((bitMask & n) == 0)
    //     {
    //         System.out.println("Bit was Zero.");
    //     }
    //     else
    //     {
    //         System.out.println("Bit was One.");
    //     }
    // }

    // set bit:
    /*  Bit Manipulation operations
    get
    set
    update
    clear
*/

public static void getBit(int n, int pos, int bitMask)
{
    
    
    // Bit mask = 0001 << 2 --> left shift 0001, 2 positions ---> 0100
    //     0100
    // [&] 0101
    // ---------
    //     0100 [Non- Zero] --> so that positional bit is One!
     

    if((bitMask & n) == 0) System.out.println("Position: " + pos + " bit was zero!");
    else System.out.println("Position: " + pos + " bit was One!");

}

public static int setBit(int n, int pos, int bitMask)
{
    
    return (bitMask | n);
}

public static int clearBit(int n, int pos, int bitMask){

    int notBitMask = ~bitMask;
    return notBitMask & n;
}

public static void updateBit(int n,int pos, int bitmask, int updatedBit){
    if(updatedBit == 0) System.out.println(clearBit(n, pos, bitmask)); 
    else if(updatedBit == 1) System.out.println(setBit(n, pos, bitmask));
}

public static void main(String[] args) 
{
    int number = 5; // Binary --> 0101
    int pos = 1;
    int bitMask = 1 << pos;  // Bitmask is a number used in Bit masking to get,set or update Bits of a number 
    getBit(number, pos, bitMask);
    System.out.println("Set bit for pos: " + pos + ": " + setBit(number, pos, bitMask));
    int updatedBit = 0; // you can take user input for this var using Scanner class
    updateBit(number, pos, bitMask, updatedBit);

}
}