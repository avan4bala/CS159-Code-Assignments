#include <stdio.h>
      
    int main (void)
    {
    
        double runTime; //initializes a double called runTime
        double percent; //initializes a double called percent
        double cores; //initializes a double called cores
        double speedUp; //initializes a double called speedUp
        double infinitySpeedup; //initializes a double called infinitySpeedUp
        double speedUpCore; //initializes a double called speedUpCore
        double decPercent; //initializes a double called decPercent
        double runTimeInf; //initializes a double called runTimeInf
        double timeImprovement; //initializes a double called timeImrovement
    
      //print statement that prompts the user to enter the corresponding values
    
        printf("\n");
        printf("Enter the runtime of the program (seconds)-> ");
        scanf("%lf", &runTime);
        printf("Enter the percent of the program that can be parallelized -> ");
        scanf("%lf", &percent);
        printf("Enter the number of cores -> ");
        scanf("%lf", &cores);
        
        //print statement to correcly align the spaces and pattern line
        
        printf("\n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
        printf("\n");
        
        /* Calculations
         * the following calculations are used to substitute and declare values
         * to be used in the equation and implement Amdahl's Law.
         */
        
        decPercent = (percent * 0.01);
        speedUp = 1 / ((1 - decPercent) + (decPercent / cores));
        speedUpCore = (runTime / speedUp);
        infinitySpeedup = 1 / ((1 - decPercent));
        runTimeInf = (runTime / infinitySpeedup);
        timeImprovement = (speedUpCore - runTimeInf );
        
        /* The additional print statements are without user prompt and
         * are used to display the results of the calculations above 
         * and tell the user the correct evaluations to the variables used 
         * in the program.
         */
        
        printf("Base runtime: %1.3lf seconds\n",runTime);
        printf("Amdahl's speedup with %1.0lf ", cores);
        printf("cores: %1.3lf\n", speedUp);
        printf("Runtime with %1.0lf ",cores);
        printf("cores: %1.3lf", runTime / speedUp);
        printf(" seconds \n");
        printf("Amdahl's speedup with infinited cores: %1.3lf\n", infinitySpeedup);
        printf("Runtime with infinite cores: %1.3lf", runTimeInf);
        printf(" seconds \n");
        printf("Runtime improvement difference: %1.3lf", timeImprovement);
        printf(" seconds \n");
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("\n");
      
     return 0;
    }
