public class Runner {
    public static void main(String[] args) {
        Class<?> clazz = MainFirst.class; // Triggers class reference, but not class loading
    }
}

class MainFirst {
    static {
        System.out.println("hello from static block");
    }
}
