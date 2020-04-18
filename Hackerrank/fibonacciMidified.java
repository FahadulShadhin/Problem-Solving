// Hackerrank: Fibonacci Midified
// https://www.hackerrank.com/challenges/fibonacci-modified/problem 

import java.math.BigInteger;
import java.util.*;

public class modifiedFibonacci {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int t1 = scan.nextInt();
        int t2 = scan.nextInt();
        int n = scan.nextInt();

        BigInteger[] dp = new BigInteger[n+1];

        dp[0] = BigInteger.valueOf(t1);
        dp[1] = BigInteger.valueOf(t2);
        for(int i=2; i<n; i++){
            dp[i] = dp[i-2].add( dp[i-1].multiply(dp[i-1]));
        }

        System.out.println(dp[n-1]);
    }
}