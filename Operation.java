//Sum And Average Of Array Elements
import java.util.Scanner;

    
     class Operation
     {
     	public static void main(String args[])
     	{
     		int n,i,sum=0;
     		float avg;
     	 System.out.println("Enter Array Capacity\n");
     	 Scanner rd=new Scanner(System.in);
     	 n=rd.nextInt();
     	 int arr[]=new int[n];
     	 System.out.println("Length\t"+arr.length);
     	 System.out.println("Enter "+n+" Array Elements\n");
     	 for(i=0;i<arr.length;i++)
     	 {
     		arr[i]=rd.nextInt();

     	 }
     	 System.out.println("The Array Elements Are\n");
     	 for(i=0;i<arr.length;i++)
     	 {
     		System.out.println(arr[i]+"\t");
     	 }
     	 for(i=0;i<arr.length;i++)
		{
                sum=sum+arr[i];

		}
		avg=(float)sum/n;
		System.out.println("The Sum Of Array Is "+sum);
		System.out.println("The Average Of Array Is"+avg);
     }

    


		

	
