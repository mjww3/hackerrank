import java.util.Scanner;

public class Solution
    {
    public static int solve(int N)
        {
        
        int height = 1;
        
        if (N<=0)
            {
            return 1;
        }
        for( int i =1;i <= N; i++)
            {
            if (i%2!=0)
                {
                height = 2*height;
            }
            else
                {
                height = height + 1;
            }
            
        }
        return height;
    }
    
    public static void main(String[] args)
        {
        
        
        Scanner sc = new Scanner(System.in);
        int nofcases = sc.nextInt();
        for(int i=0;i<nofcases;i++)
            {
            int N = sc.nextInt();
           System.out.println(solve(N));
        }
        
        
    }
}