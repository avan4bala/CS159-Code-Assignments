    /***************************************************************************
        *
        *  Programmer and Purdue Email Address:
        *  1. balasub7@purdue.edu
        *
        *  Homework #:06
        *
        *  Academic Integrity Statement:
        *
        *  I have not used source code obtained from any other unauthorized source,
        *  either modified or unmodified.  Neither have I provided access to my code
        *  to another. The project I am submitting is my own original work.
        *
        *  Day, Time, Location of Lab: Thursday, 9:30am, Stanley Coulter 283
        *
        *  Program Description:
        *
        ***************************************************************************/
     
      #include <stdio.h>
      #include <stdlib.h>
      #include <math.h>
      #define SIZE 20
     
      // Function Declarations that correspond to ones used in this program
      void inputDigits(int num[]);
      double calcMean(int num[]);
      double calcMeanDev(int num[], double mean);
      double calcRange(int num[]);
     
      int main (void)
      {
        double mean; // doubke declared for mean
        int num[SIZE]; // array declared for size of data
     
        // Function Definitions along with parameters
        inputDigits(num);
        mean = calcMean(num);
        calcMeanDev(num, mean);
        calcRange(num);
        return 0;
      }
     
      /***************************************************************************
       *
       *  Function Information
       *
       *  Name of Function: inputDigits
       *
       *  Function Return Type: n/a
       *
       *  Parameters (list data type, name, and comment one per line):
       *    1. int num[]
       *    2.
       *    3.
       *
       *  Function Description: This function prompts the user for 20 integer values and uses
       *  a loop to go through each index of the array to reprint the entries again in the third
       *  print statement in which it prompts.
       *
       ***************************************************************************/
     
      void inputDigits (int num[])
      {
        int total; // integer declared as total
        int i; // integer declared as i
     
        printf("Enter 20 integer values -> ");
        for(total = 0; total < SIZE; total++)
        {
           scanf("%d", &num[total]);
        }
        printf("\n");
        printf("Data set as entered -> ");
        printf("%d",num[0]);
        for(i = 1; i < 20; i++)
        {
          printf(", %d", num[i]);
        }
     
      }
     
      /***************************************************************************
       *
       *  Function Information
       *
       *  Name of Function: calcMean
       *
       *  Function Return Type: double
       *
       *  Parameters (list data type, name, and comment one per line):
       *    1. int num[]
       *    2.
       *    3.
       *
       *  Function Description: This function calculates the mean of all the data
       *  entries that were given in the previous function by passing in the num array.
       *  It uses a for loop that iterates a variable i for the size of the array and
       *  then prints the mean.
       *
       ***************************************************************************/
     
       double calcMean (int num[])
       {
       int i; //integer declared as i
       double sum = 0; //double declared as sum
       double mean; // double declared as mean
    
       for(i = 0; i < SIZE; i++)
       {
         sum += num[i];
       }
       mean = (sum / 20.0);
       printf("\nMean: %0.2lf", mean);
       return mean;
     }
    
     /***************************************************************************
      *
      *  Function Information
      *
      *  Name of Function: calcMeanDev
      *
      *  Function Return Type: double
      *
      *  Parameters (list data type, name, and comment one per line):
      *    1. int num []
      *    2. double mean
      *    3.
      *
      *  Function Description: This function calculates the mean absolute deviation using
      *  another for loop and using the mean deviation formula for each element of the array
      *  and then prints it out.
      *
      ***************************************************************************/
    
     double calcMeanDev (int num[], double mean)
     {
       int i; // integer declared as i
       double meanDev = 0; //double declared as meanDEV
    
       for(i = 0; i < 20; i++)
       {
         meanDev += fabs(num[i] - mean);
       }
    
       meanDev /= 20.0;
       printf("\nMean Deviation: %0.2lf", meanDev);
       return 0;
     }
    
     /***************************************************************************
      *
      *  Function Information
      *
      *  Name of Function: calcRange
      *
      *  Function Return Type: double
      *
      *  Parameters (list data type, name, and comment one per line):
      *    1. int num[]
      *    2.
      *    3.
      *
      *  Function Description: This function displays the range of the array by calculating
      *  the min and max value of all the elements that were inputted and using an if else
      *  logic statement to sort out the highest and smallest value.
      *
      ***************************************************************************/
    
     double calcRange (int num[])
     {
       int r; // int declared as r for loop iteration
       int min; // int declared to represent minimum value
       int max; // int declared to represent maximum value
    
       min = num[0];
       max = num[0];
       for(r = 0; r < 20; r++)
       {
         if(num[r] < min)
         {
           min = num[r];
         }
         if(num[r] > max)
         {
           max = num[r];
         }
       }
       printf("\nRange of Values: %d, %d\n", min, max);
       return 0;
   }
