#include <stdio.h>
#include <stdlib.h>
#include <math.h>
      
   // Below are the function types for functions being called
      void Print();
      void threeChoices(char*, char*, char*);
      int seedPrints();
      void rollOne(char*);
      void rollTwo(char*);
      void rollThree(char*);
      
      int main (void)
        {
          char ch1; // Character for choice 1
          char ch2; // Character for choice 2
          char ch3; // Character for choice 3
      
       // Calling Functions in Main
          Print();
          threeChoices(&ch1,&ch2,&ch3);
          seedPrints();
          rollOne(&ch1);
          rollTwo(&ch2);
          rollThree(&ch3);
      
          return 0; // Main
        }
      
        /***************************************************************************
         *
         *  Function Information
         *
         *  Name of Function: Print
         *
         *  Function Return Type: None
         *
         *  Parameters (list data type, name, and comment one per line):
         *    1. None
         *    2.
         *    3.
         *
         *  Function Description: This void function prints the possible choices and the 
         *  point allocations for the user before they enter in their three bets to the program
         ***************************************************************************/
     
        void Print()
          {
          // Print statements for original options that are given to the user
          printf("Possible Choices\n");
          printf("\n");
          printf("'1', '2', or '3' for the 1st, 2nd, or 3rd Dozen 2 Points\n");
          printf("'R' (Red)  or 'B' (Black)                       1 Point\n");
          printf("'E' (Even) or 'O' (Odd)                         1 Point\n");
          printf("'L' (Low)  or 'H' (High)                        1 Point\n");
         
          return; // Print
        }
        
        /***************************************************************************
         *
         *  Function Information
         *
         *  Name of Function: threeChoices
         *
         *  Function Return Type: None
         *
         *  Parameters (list data type, name, and comment one per line):
         *    1. Char ch1
         *    2. Char ch2
         *    3. Char ch3
         *
         *  Function Description: This void function takes in three character from the user,
         *  which represent the bets that are placed and displays them as three choices
         ***************************************************************************/
        
        void threeChoices (char *ch1, char *ch2, char *ch3) // function and parameters
        {
          // Print statements for three bets from the user
          printf("-=-=-=-\n");
          printf("Enter the three choices -> ");
          scanf("%c %c %c", ch1, ch2, ch3);
        }
     
        /***************************************************************************
         *
         *  Function Information
         *
         *  Name of Function: seedPrints
         *
         *  Function Return Type: Integer
         *
         *  Parameters (list data type, name, and comment one per line):
         *    1. None
         *    2.
         *    3.
         *
         *  Function Description: This function initialzies five integers that represent
         *  a random number generated from the seed value between 0 and 36 (numbers on 
         *  the roulette wheel). It also prints the basic format of where the "ball" lands on
         *  and the number of games and correspoding scores.
         ***************************************************************************/
      
        int seedPrints ()
        {
          int num1; // Integer for random number 1
          int num2; // Integer for random number 2
          int num3; // Integer for random number 3
          int num4; // Integer for random number 4
          int num5; // Integer for random number 5
          int seedValue; // Integer for Seed Value
          // Print and Scan for seedvalue
          printf("Enter the seed -> ");
          scanf("%d", &seedValue);
          srand(seedValue);
          printf("-=-=-=-\n");
          // Generates random numbers between 0 ad 36 five times
          num1 = rand() % 37;
          num2 = rand() % 37;
          num3 = rand() % 37;
          num4 = rand() % 37;
          num5 = rand() % 37;
          // Print statement for 5 random bet numbers
          printf("The Ball Landed On: %d %d %d %d %d\n", num1, num2, num3, num4, num5);
          printf("-=-=-=-\n");
          printf("Game           Score");
       
          return seedValue;
        }
     
        /***************************************************************************
         *
         *  Function Information
         *
         *  Name of Function: rollOne
         *
         *  Function Return Type: None
         *
         *  Parameters (list data type, name, and comment one per line):
         *    1. char ch1
         *    2.
         *    3.
         *
         *  Function Description: This function takes in the first choice from the user 
         *  and prints the corresponding landing on the wheel based upon the user's entry.
         ***************************************************************************/
     
        void rollOne (char *ch1)
        {
          // if statements for user's first input
          if (*ch1 == 'R')
          {
            printf("\n1: Red ");
          }
       
          if (*ch1 == 'B')
          { 
            printf("\n1: Black ");
          }
          
          if (*ch1 == 'E')
          {
            printf("\n1: Even");
          }
       
          if (*ch1 == 'L')
          {
            printf("\n1: Low ");
          }
      
          if (*ch1 == 'O')
          {
            printf("\n1: Odd ");
          }
       
          if (*ch1 == 'H')
          {
            printf("\n1: High ");
          }
       
          if (*ch1 == '1')
          {
            printf("\n1: 1st Dozen ");
          }
       
          if (*ch1 == '2')
          {
            printf("\n1: 2nd Dozen ");
          }
       
          if (*ch1 == '3')
          {
            printf("\n2: 3rd Dozen ");
          }
        }
     
        /***************************************************************************
         *
         *  Function Information
         *
         *  Name of Function: rollTwo
         *
         *  Function Return Type: None
         *
         *  Parameters (list data type, name, and comment one per line):
         *    1. char ch2
         *    2.
         *    3.
         *
         *  Function Description: This function takes in the first choice from the user 
         *  and prints the corresponding landing on the wheel based upon the user's entry.
         ***************************************************************************/
     
        void rollTwo (char *ch2)
        {
          // if statements for user's second input
          if (*ch2 == 'R')
          {
            printf("\n2: Red ");
          }
          
          if (*ch2 == 'B')
          {
          printf("\n2: Black ");
          }
          
          if (*ch2 == 'E')
          {
            printf("\n2: Even");
          }
          
          if (*ch2 == 'L')
          {
            printf("\n2: Low ");
          }
          
          if (*ch2 == 'O')
          {
            printf("\n2: Odd ");
          }
          
          if (*ch2 == 'H')
          {
          printf("\n2: High ");
          }
          
          if (*ch2 == '1')
          {
            printf("\n2: 1st Dozen ");
          }
          
          if (*ch2 == '2')
          {
            printf("\n2: 2nd Dozen ");
          }
          
          if (*ch2 == '3')
          {
            printf("\n2: 3rd Dozen ");
          }
        }
        
        /***************************************************************************
         *
         *  Function Information
         *
         *  Name of Function: rollThree
         *
         *  Function Return Type: None
         *
         *  Parameters (list data type, name, and comment one per line):
         *    1. Char ch3
         *    2.
         *    3.
         *
         *  Function Description: This function takes in the first choice from the user 
         *  and prints the corresponding landing on the wheel based upon the user's entry.
         ***************************************************************************/
        
        void rollThree (char *ch3)
        {
          // if statements for user's 3rd input
          if (*ch3 == 'R')
          {
            printf("\n3: Red ");
          }
          
          if (*ch3 == 'B')
          {
            printf("\n3: Black ");
          }
          
          if (*ch3 == 'E')
          {
            printf("\n3: Even");
          }
          
          if (*ch3 == 'L')
          {
            printf("\n3: Low ");
          }
          
          if (*ch3 == 'O')
          {
            printf("\n3: Odd ");
          }
          
          if (*ch3 == 'H')
          {
            printf("\n3: High ");
          }
          
          if (*ch3 == '1')
          {
            printf("\n3: 1st Dozen ");
          }
          
          if (*ch3 == '2')
          {
            printf("\n3: 2nd Dozen ");
          }
          
          if (*ch3 == '3')
          {
            printf("\n3: 3rd Dozen ");
          }
         }
