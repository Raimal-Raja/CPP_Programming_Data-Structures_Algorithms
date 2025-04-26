public class Runner {
    // static void change(int val) {
    //     val = 20;
    // }
    // public static void main(String[] args) {
    //     int a = 10;
    //     change(a);
    //     System.err.println(a); // Output: 20
    // }


    static int change(int val) {
        return 20;
    }
    public static void main(String[] args) {
        int a = 10;
        a = change(a);
        System.err.println(a); // Output: 20
    }




}