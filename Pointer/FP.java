import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;

public class FP {
    public static void main(String[] args)
    throws IOException
    {
  //This program uses try catch to prevent the program for crashing
      
          //This opens the file for reading
        File myObj = new File("secret.txt");
        //This creates a Scanner object
        Scanner scr= new Scanner(myObj);
        //This loop is repeated while there are contents left to be read in the file
        while (scr.hasNextLine()) {
            //This reads each line
          String data = scr.nextLine();        
              //This converts the file content into tokens
          String[] tokens = data.split(" "); 
              //The following loop capitalizes every string in the 5th position
          for(int i =0;i<tokens.length;i+=5){
              tokens[i] = tokens[i].toUpperCase();       }
          //This creates a stringbuilder object
          StringBuilder newstring = null;
          newstring = new StringBuilder();  
          //This for each loop passes the tokens to newstring
              for(String abc:tokens){newstring.append(abc+" ");     }  
                  //This prints the new string
                  System.out.print(newstring);      }
        //This closes the scanner object
        scr.close();      
     
    }
  }