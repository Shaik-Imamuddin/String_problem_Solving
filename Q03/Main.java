import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder(sc.nextLine());

        int start=0,end=sb.length()-1;

        while(start<end){
            char temp = sb.charAt(start);
            sb.setCharAt(start,sb.charAt(end));
            sb.setCharAt(end,temp);
            start++;
            end--;
        }
        System.out.println(sb.toString());
        
        // String s = sc.nextLine();
        // String rev = new StringBuilder(s).reverse().toString();
    }
}