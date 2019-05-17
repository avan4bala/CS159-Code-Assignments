#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159 // Constant value for PI assigned
      
    int userInput(); // Declaration of user defined function for user input
    float dimensionCalc(float); // Declaration for user defined function calculations for spheres
      
    int main (void)
      {
        float radius1; // global declaration of the first radius
        radius1 = userInput(); // calling the userInput function and assigning it to global dec
        dimensionCalc(radius1); // calling the dimensionCalc function
        return 0; // main
      }
      
      /***************************************************************************
       *
       *  Function Information
       *
       *  Name of Function: userInput
       *
       *  Function Return Type: Integer
       *
       *  Parameters (list data type, name, and comment one per line):
       *    1. None
       *
       *  Function Description: Function allows the user to enter a desired first radius
       *
       ***************************************************************************/
      
      int userInput() // User-defined function for the radius input
      {
        int radius1; // Declaration of an integer for the radius
        printf("\n");
        printf("Please enter the value of the largest radius -> ");
        scanf("%d", &radius1);
        printf("\n");
        return(radius1); //userInput 
      }
      
      /***************************************************************************
       *
       *  Function Information
       *
       *  Name of Function: dimensionCalc
       *
       *  Function Return Type: Integer
       *
       *  Parameters (list data type, name, and comment one per line):
       *    1. float radius1
       *
       *  Function Description: This user defined function calculates the first dimensions
       *  (volume, surface area, and circumference) from the first radius and prints
       *  the calculations to the user.
       *
       ***************************************************************************/
      
      float dimensionCalc (float radius1)
        {
          float circum1; // Declaring a float for the first cicumference
          float surfArea1; // Declaring a float for the first Surface Area
          float volume1; // Declaring a float for the first volume
          float radius2; // Declaring a float for the second radius
          float circum2; // Declaring a float for the second circumference
          float surfArea2; // Declaring a float for the second Surface Area
          float volume2; // Declaring a float for the second volume
          float radius3; // Declaring a float for the third radius
          float circum3; // Declaring a float for the third circumference
          float surfArea3; // Declaring a float for the third Surface Area
          float volume3; // Declaring a float for the third volume
          float totalVol; // Declaring a float for the total volume of all spheres
          float totalSurfArea; // Declaring a float for the total Surface Area
      
       // The following segment of code mathematically calculates and assigns the 
       // correspinding variables the correct values for radius, circumference, 
       // volume, and surface area for successive spheres. The second radius is
       // half the value of the first radius, so the remaining values are calculated
       // accordingly using the new radius value and the constant PI
       
          circum1 = 2 * PI * radius1;
          surfArea1 = 4 * PI * radius1 * radius1;
          volume1 = (4.0 / 3.0) * PI * radius1 * radius1 * radius1;
          radius2 = radius1 / 2;
          circum2 = 2 * PI * radius2;
          surfArea2 = 4 * PI * radius2 * radius2;
          volume2 = (4.0 / 3.0) * PI * radius2 * radius2 * radius2;
          radius3 = radius2 / 2;
          circum3 = 2 * PI * radius3;
          surfArea3 = 4 * PI * radius3 * radius3;
          volume3 = (4.0 / 3.0) * PI * radius3 * radius3 * radius3;
          totalVol = volume1 + volume2 + volume3;
          totalSurfArea = surfArea1 + surfArea2 + surfArea3;
     
       // The following segment of code are the print statements to output the results
       // in the correct format that is prompted by this assignment
          printf("Radius #1 is:           %0.2f \n" ,radius1);
          printf("Circumference #1 is:    %0.2f \n" ,circum1);
          printf("Surface Area #1 is:   %0.2f \n" ,surfArea1);
          printf("Volume #1 is:         %0.2f \n" ,volume1);
          printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
          printf("Radius #2 is:            %0.2f \n" ,radius2);
          printf("Circumference #2 is:    %0.2f \n" ,circum2);
          printf("Surface Area #2 is:    %0.2f \n" ,surfArea2);
          printf("Volume #2 is:          %0.2f \n" ,volume2);
          printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
          printf("Radius #3 is:            %0.2f \n" ,radius3);
          printf("Circumference #3 is:    %0.2f \n" ,circum3);
          printf("Surface Area #3 is:     %0.2f \n" ,surfArea3);
          printf("Volume #3 is:           %0.2f \n" ,volume3);
          printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
          printf("Total Volume:         %0.2f \n", totalVol);
          printf("Total Surface Area:   %0.2f \n", totalSurfArea);
          printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
          
          return 0; //dimensionCalc
     }
