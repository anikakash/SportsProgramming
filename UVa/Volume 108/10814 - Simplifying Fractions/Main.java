//package com.company;

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    static public Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int n;
        n = sc.nextInt();
        while (n>0){
            BigInteger a = sc.nextBigInteger();
            String  x = sc.next();
            BigInteger b = sc.nextBigInteger();
            BigInteger res = a.gcd(b);
            System.out.println(a.divide(res)+ " / "+ b.divide(res));
            n--;
        }
    }
}
