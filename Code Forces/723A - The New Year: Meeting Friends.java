import java.util.Scanner;

public class TheNewYearMeetingFriends {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        int min = Math.min(a, Math.min(b,c));
        int max = Math.max(a,Math.max(b,c));
        System.out.println(max-min);
    }   
}
