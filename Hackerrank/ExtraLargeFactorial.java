import java.math.BigInteger;
import java.util.*;

public class ExtraLargeFactorial
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        int factorial = scan.nextInt();

        BigInteger product = BigInteger.valueOf(1);

        for(int i=2; i<=factorial; i++){
            product = product.multiply(BigInteger.valueOf(i));
        }

        System.out.println(product);
    }
} 