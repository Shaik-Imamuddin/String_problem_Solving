import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        int freq[] = new int[256];
        for(int i=0;i<str.length();i++){
            freq[str.charAt(i)]++;
        }

        boolean visited[] = new boolean[256];

        for(int i=0;i<str.length();i++){
            if(!visited[str.charAt(i)]){
                System.out.println(str.charAt(i)+" - "+freq[str.charAt(i)]);
                visited[str.charAt(i)] = true;
            }
        }
    }
}