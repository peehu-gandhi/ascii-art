// C# simple approach to print smallest 
// and second smallest element. 

using System; 

  

public class GFG { 

    // Driver Code 

    static public void Main() 

    { 

        int[] arr = { 111, 13, 25, 9, 34, 1 }; 

        int n = arr.Length; 

  

        // sorting the array using 

        // in-built sort function 

        Array.Sort(arr); 

  

        // printing the desired element 

        Console.WriteLine("smallest element is " + arr[0]); 

        Console.WriteLine("second smallest element is "

                          + arr[1]); 

    } 
} 

  
