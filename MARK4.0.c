

int main() 
{ 
     
	 printf("ENTER THE NO OF STUDENTS WHO PURCHASE GIFT :- ");  // process number initialization
     scanf("%d",&n);
     printf("ENTER THE COST OF ONE GIFT :- ");
     scanf("%f",&cost);
     printf("***************ENTER THE NUMBER OF GIFTS CORRESPONDING TO EACH STUDENT *************");
        for(i=0;i<n;i++)
          {
              printf("\nSTUDENT_NO[%d] \n",i+1);
              printf("ENTER THE NUMBER OF GIFTS PURCHASED :");//user input data
              scanf("%d",&B_T[i]);
              p_no[i]=i+1;           //its process number 
          }

  
        get();
        sorting();
        billfn();
         
}
