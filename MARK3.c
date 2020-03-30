#include <stdio.h> 

	int i,t,j,n;           //variable declaration
	int B_T[10],p_no[10],bill[10]; //B_T=brust time ,p_no processno
	float cost;
	
 void billfn()              //bill generation
    {		  
      printf( "STUDENT_NO\t\tTOTAL GIFTS PURCHASED\t\tBILL\n\n"); 

	    for (i = 0; i < n; i++) 
		   { 
	           	printf("STUDENT NO. = %d \t\t" ,p_no[i]);
		        printf("%d \t\t\t",B_T[i]);
		        bill[i]= cost * B_T[i];           //calculating cost 
	         	printf("%d \t\t\t",bill[i]); 
	            printf("\n");
	       }
    }

void get() //list of gifts taken by students  (entered value by user)
   {

     printf("\n\n");
     printf("******************ENTERED DATA*****************\n\n");
	 printf( "\nSTUDENT NO.\t\tNO.OF GIFTS PURCHASED \n"); 

	    for (i = 0; i < n; i++)  
	      { 
		      printf("STUDENT NO. = %d \t\t" ,p_no[i]);   //process no
		      printf("%d \t\t\t",B_T[i]);                  //brust time
	          printf("\n\n");
	      } 
	}