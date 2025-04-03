import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        boolean isPaindrome = true;

        StringBuilder str = new StringBuilder(sc.next());

        
        for(int i=0;i<str.length()-1;i++){
            char ch = str.charAt(i);

            if(ch>='A' && ch<='Z')
                str.setCharAt(i,(char)(ch+32));
        }

        int start=0,end=str.length()-1;

        while(start<end){
            if(str.charAt(start)!=str.charAt(end)){
                isPaindrome = false;
                break;    
            }
            start++;end--;
        }   
        
        if(isPaindrome)
            System.out.println("Palindrome");
        else
            System.out.println("Not a Palindrome");
    }    
}



//without using flag based approach

// import java.util.Scanner;

// public class Main{
//     public static void main(String[] args){
//         Scanner sc = new Scanner(System.in);
//         StringBuilder str = new StringBuilder(sc.next());
        
//         for(int i=0;i<str.length()-1;i++){
//             char ch = str.charAt(i);

//             if(ch>='A' && ch<='Z')
//                 str.setCharAt(i,(char)(ch+32));
//         }

//         int start=0,end=str.length()-1;

//         while(start<end){
//             if(str.charAt(start)!=str.charAt(end)){
//                 System.out.println("Not a Palindrome");
//                 return;    
//             }
//             start++;end--;
//         }   
//         System.out.println("Palindrome");
//     }    
// }