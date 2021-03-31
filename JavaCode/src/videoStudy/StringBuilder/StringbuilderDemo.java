package videoStudy.StringBuilder;

public class StringbuilderDemo {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();
        System.out.println("sb: " + sb.append(11).append(23));
        System.out.println(sb.toString());
    }
}
