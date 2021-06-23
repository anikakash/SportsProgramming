//package com.company;
import java.util.Scanner;
public class Main {
   // static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNextLong()){
            long a = sc.nextLong();
            long b = sc.nextLong();
           // System.out.println(Math.abs(a-b));
           if(a>b) System.out.println(a-b);
           else    System.out.println(b-a);
        }
    }
}
