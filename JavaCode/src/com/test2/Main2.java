package com.test2;

public class Main2 {
    public static void main(String[] args) {
        String message = "    Hello \"world";
        message +="!!  ";
        //message.replace("!","*");
        System.out.println(message.replace("!","*"));
        //System.out.println(message.length());
        System.out.println(message.toUpperCase().toLowerCase());
        System.out.println(message);
        //System.out.println(message.indexOf("worl"));
        System.out.println(message.trim());
    }
}
