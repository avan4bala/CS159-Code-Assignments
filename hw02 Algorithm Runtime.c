#include <stdio.h>
#include <stdio.lib>
#include <math.h>
      
    int main (void)
    {
        int dataSize; // Declares an integer for Data Size
        int complexityOption1; // Declares an integer for the first complexity option
        int complexityOption2; // Declares an integer for the second complexity option
        int algorithmCoeff1; // Declares an integer for the first coefficient
        int algorithmCoeff2; // Declares an integer for the second complexity option
        int linearTime; // Declares an integer for the Linear Time
        int logTime; // Declares an integer for the Logarithmic Time
        int expoTime; // Declares an integer for the Exponential Time
        float time1; // Declares a float for the Time 1 Calculation
        float time2; // Declares a float for the Time 2 Calculation
      
     // The following print and scan statments serve to print out the user prompts of the code 
     // that the program example displays. The code first titles the complexity options and then
     // lists the outputs as well as the users answers via the scan statements
        printf("-=- Algorithm Complexity Options -=-\n");
        printf("\n");
        printf("1. Linear time [n]\n");
        printf("2. Logarithmic time [nlog(n)]\n");
        printf("3. Exponential time [n^2]\n");
        printf("\n");
        printf("Enter the size of the data set to sort -> ");
        scanf("%d", &dataSize);
        printf("Select complexity option #1 -> ");
        scanf("%d", &complexityOption1);
        printf("Enter the coefficient of algorithm #1 -> ");
        scanf("%d", &algorithmCoeff1);
        printf("Select complexity option #2 -> ");
        scanf("%d", &complexityOption2);
        printf("Enter the coefficient of algorithm #2 -> ");
        scanf("%d", &algorithmCoeff2);
        
     // The following equations are meant to simplify tge user input of complexity option for
     // computer debug purposes. This is used to not get confused with multiple executions where
     // the user inputs different complexities
        linearTime = 1 / complexityOption1;
        logTime = 2 / complexityOption1;
        expoTime = 3 / complexityOption2;
      
     // These equations for time is what outputs a 0 or 1 value for the user complexity input. When followed, it can be seen that the first part returns a 1 for an input of 3,
     // the second part an output of 1 for complexity 2, and the third one an output of 1 for complexity 1. They will then serve as outputs of algorithm times. 
        time1 = (complexityOption1 / 3) * ((pow(algorithmCoeff1 , 2)) + algorithmCoeff1) + ((complexityOption1 % 3 - 1) * -1 ) + (dataSize * (log(dataSize) / log(2)) * algorithmCoeff1) + ((complexityOption1 %    2   -2) * -1 ) + dataSize * algorithmCoeff1;
      
        time2 = (complexityOption2 / 3) * ((pow(algorithmCoeff2 , 2)) + algorithmCoeff2) + ((complexityOption2 % 3 - 1) * -1 ) + (dataSize * (log(dataSize) / log(2)) * algorithmCoeff2) + ((complexityOption2 %    2   -2) * -1 ) + dataSize * algorithmCoeff2;
      
     // These print statements print out the time for the two algorithms that are chosen.
        printf("Time for algorithm #1 in seconds:\n", time1);
        printf("Time for algorithm #2 in seconds:", time2);
      
      
        return 0;
      }
