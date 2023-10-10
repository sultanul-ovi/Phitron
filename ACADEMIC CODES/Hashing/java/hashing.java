// Java Implementation
// Hashing

import java.util.*; 

class HashTable { 
  public static void main(String args[]) 
  {
  Hashtable<Integer, Integer> 
    ht = new Hashtable<Integer, Integer>(); 

  System.out.println("\n"); 
  System.out.println(ht); 
  
  ht.put(123, 432); 
  ht.put(12, 2345);
  ht.put(15, 5643); 
  ht.put(3, 321);

  System.out.println("\n"); 
  System.out.println(ht); 

  ht.remove(12);
  ht.remove(3);

  System.out.println("\n"); 
  System.out.println(ht); 
  } 
} 