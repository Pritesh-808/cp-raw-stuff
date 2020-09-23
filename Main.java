/************************
	  * author:pritesh_808****
	  * future hndrxx ********
	  *  *********************
	  *  *********************
	  *  *********************
	  *  *********************
	  *  *********************
	  *****************************/
/*********************
 * * gang-gang********
 * *******************
 * *******************
 * *******************
 * ***EVOL************
 * *******************
 *********************/


import java.lang.*;
import java.util.*;
import java.io.*;


public class Main {

	public static void main(String[] args) {
		
		Map<Character,Integer>hashmap=new HashMap();
		List<Long>list=new ArrayList();
		Scanner scanner=new Scanner(System.in);
		long T;
		T=1;
		for(long test_case=0;test_case<T;test_case++) {
			
			long n=scanner.nextLong();
			for(long i=1;i<=n;i++) {
				
				if(i%2!=0)
					System.out.print(i+1+" ");
				else
					System.out.print(i-1+" ");
					
				
			}
			
			
			
			
			
		}
        
	}

}
