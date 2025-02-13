import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();

        str = str.toLowerCase();
        
        int vc=0,cc=0,dc=0,spc=0;


        for(int i=0;i<str.length();i++){
            char ch = str.charAt(i);
            if(ch>='a' && ch<='z'){
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                    vc++;
                else
                    cc++;
            }
            else if(ch>='0' && ch<='9')
                dc++;
            else
                spc++;
        }
        System.out.println(vc+" "+cc+" "+dc+" "+spc);
    }
}