public class Runner {
    // static void change(int val) {
    //     val = 20;
    // }
    // public static void main(String[] args) {
    //     int a = 10;
    //     change(a);
    //     System.err.println(a); // Output: 20
    // }

// change value in main function from void function///////////////
    // static int change(int val) {
    //     return 20;
    // }
    // public static void main(String[] args) {
    //     int a = 10;
    //     a = change(a);
    //     System.err.println(a); // Output: 20
    // }



// /// check if it is power of 2///////////////////////////////
    // boolean isPowerOfTwo(int n){
    //     return (n>0 &&(n&(n-1))==0);
    // }
    // public static void main(String[] args) {
    //     int n = 4;

    //     boolean result = isPowerOfTwo(n);
    //     System.out.println(result);
    // }


// check odd and even

// public static void main(String[] args) {
//     int  n = 5;
//     if(n & 1){
//         System.out.println("odd");
//     }
//     else{
//         System.out.println("even");
//     }
// }

static boolean isPowerOfTwo(int n){
    return (n>0 && (n&(n-1)) ==0);
}

public static void main(String[] args) {
    int n = 3;
    boolean b = isPowerOfTwo(n);
    System.out.println(b);
}

}