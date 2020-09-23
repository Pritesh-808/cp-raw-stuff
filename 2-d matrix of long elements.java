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
		List<ArrayList<Long>>list=new ArrayList();
		Scanner scanner=new Scanner(System.in);
		long T;
		T=1;
		for(long test_case=0;test_case<T;test_case++) {
			long ans_real=0, arr[][];
			int n=scanner.nextInt();
			arr=new long[n][n];
			int vis[][]=new int[n][n];
			for(int sm=0;sm<n;sm++)
				for(int h=0;h<n;h++)
				vis[sm][h]=0;
				
			
			for(int i=0;i<n;i++) {
				for(int j=0;j<n;j++) {
					
					arr[i][j]=scanner.nextLong();
					
							
					
					if(vis[i][j]==0 &&i==j)
					{
						vis[i][j]=1;
						ans_real+=arr[i][j];
					}
					if(vis[i][j]==0 &&j==n-1-i)
					{
						vis[i][j]=1;
						ans_real+=arr[i][j];
					}
					if(vis[i][j]==0 &&j==n/2)
					{
						vis[i][j]=1;
						ans_real+=arr[i][j];
					}
					if(vis[i][j]==0 &&i==n/2)
					{
						vis[i][j]=1;
						ans_real+=arr[i][j];
					}
					
					
					
					
					
					
					
					
				}
				
			}
			
		System.out.println(ans_real);  
			 	
        
	}

}
	 }
