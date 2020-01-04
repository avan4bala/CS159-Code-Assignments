      #include <stdio.h>
      #include <stdlib.h>
      #include <math.h>
     
      #define SIZE 25 // Constant to represent array size
     
      // Function declarations with parameters
      int dataSorting(int data[], int value, int number, int temp, int length);
      int initialStatus(int data[], int length, int temp, int number);
      void finalStatus(int number, int data[], int length);
     
      int main (void)
      {
        int data[SIZE]; // Integer for array
        int value = 0; // Value to represent array
        int number = 0; // Integer to sort the numbers
        int temp = 0; // Integer to represent index status
        int length = 0; // Integer for array length
     
        length = dataSorting(data,value,number,temp,length);
        number = initialStatus(data,length,temp,number);
        finalStatus(number,data,length);
     
        return 0;
      }
     
      /***************************************************************************
       *
       *  Function Information
       *
       *  Name of Function: dataSorting
       *
       *  Function Return Type: integer
       *
       *  Parameters (list data type, name, and comment one per line):
       *    1. int data[]
       *    2. int value
       *    3. int number
       *    4. int temp
       *    5. int length
       *
       *  Function Description: This function prompts the user the number of elements
       *  to sort from the data set that is entered in the form of an array to the
       *  compiler and uses a loop iteration to update the index with the corresponding
       *  elements that are gonna be sorted.
       *
       ***************************************************************************/
     
      int dataSorting(int data[], int value, int number, int temp, int length)
      {
        int i; // integer that represents the index of the array in the initial sort
        int j; // integer that represents the iterated index in the loop update (nested)
     
        printf("\nEnter data set -> ");
        scanf("%d", &value);
     
        while(value != -1)
        {
          data[i] = value;
          i = i + 1;
          scanf("%d", &value);
        }
     
        length = i;
     
        printf("Enter number of elements to sort -> ");
        scanf("%d", &number);
     
        for(i = 0; i < number; i++)
        {
          for(j = i; j < number; j++)
          {
            if(data[i] > data[j])
            {
              temp = data[i];
              data[i] = data[j];
              data[j] = temp;
            }
          }
        }
          return length;
        }
    
     /***************************************************************************
      *
      *  Function Information
      *
      *  Name of Function: initialStatus
      *
      *  Function Return Type: integer
      *
      *  Parameters (list data type, name, and comment one per line):
      *    1. int data[]
      *    2. int length
      *    3. int temp
      *    4. int number
      *
      *  Function Description: This function serves to print out the initial sort of
      *  the array depending on the user input of elements to sort by tracking the length
      *  of the array as each index is updated and added and prints out the status of the
      *  first however many elements of the array.
      *
      ***************************************************************************/
    
     int initialStatus(int data[], int length, int temp, int number)
     {
       int i; // integer to represent index of the array
       int j; // integer to represent the length update
    
       printf("\nStatus of first %d elements: ", number);
       for(i = 0; i < number; i++)
       {
         printf("%4d", data[i]);
       }
    
       for(i = (length - number); i < length; i++)
       {
         for(j = i; j < length; j++)
         {
           if(data[i] > data[j])
           {
             temp = data[i];
             data[i] = data[j];
             data[j] = temp;
           }
         }
       }
       return 0;
     }
