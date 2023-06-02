import java.util.*;
public class Bear_and_Big_Brother_791A
{
	public static void main(String[] args)
	{
		int a, b, count = 0;
		Scanner in = new Scanner(System.in);
		a = Integer.parseInt(in.next());
		b = Integer.parseInt(in.next());
		while(a <= b)
		{
			a *= 3;
			b *= 2;
			count++;
		}
		System.out.println(count);
	}
}