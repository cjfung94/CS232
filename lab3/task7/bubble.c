/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>


#define NUM 30  /* number of strings */
#define LEN 1200  /* max length of each string */



void swap (char * Strings1, char * Strings2)
{
    char temp[LEN -2 ];

	for(int i = 0; i < LEN - 2; i++)
    {

	  temp[i] = Strings1[i];
      Strings1[i] = Strings2[i];
      Strings2[i] = temp[i];
      
    }
}


int main()
{
  char Strings[NUM][LEN];
      
  for(int i = 0; i < NUM ; i++)
	{
    
    fgets(Strings[i], LEN -2, stdin);

  }

  printf("Please enter %d strings, one per line:\n", NUM);

  //Write a for loop here to read NUM strings.



/*	Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */

  puts("\nHere are the strings in the order you entered:");

	for(int i = 0; i < NUM ; i++)
	{
		printf("%s" , Strings[i]);
	}

  /* Write a for loop here to print all the strings. */


  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order*/

  for (int i = 0; i < NUM; i++)
  {
  	  for (int j = 0; j < NUM -1 - i; j++)
	  {

		  for (int l = 0; l < LEN - 2; l++)
		  {
		  	  if (Strings[j][l] > Strings[j+1][l])
			  {
			  	  swap(Strings[j], Strings[j+1]);
            break;
			  }
			  else if (Strings[j][l] == Strings[j+1][l])
			  {
			  	  continue;
			  }
        else
        {
          break;
        }
		  }
	  }
  }
     /*Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) The swap of two strings must be done by copying them
            (using a temp variable of your choice) one character at a time,
            without using any C string library functions.
            That is, write your own while/for loop to do this.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */
 



  /* Output sorted list */
  
  puts("\nIn alphabetical order, the strings are:");
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

  for(int i = 0; i < NUM ; i++) //WE HAD LEN INSTEAD OF NUM = SEGMENTATION FAULT
	{
    printf("%s" , Strings[i]);
	}

	return (0);

}
