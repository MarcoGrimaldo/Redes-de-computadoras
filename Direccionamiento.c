#include <stdio.h>  

#include <string.h>

#include <stdlib.h>
#include <ctype.h>

int main (void)


{
	unsigned char  desicion;
do
{

   printf("Inserta una direccion ip:\n");
  
  unsigned char  num;
  
  unsigned  char IP[15];
  unsigned char *IP1;
   unsigned char *IP2;
   unsigned char *IP3;
  unsigned char *IP4;
  
    unsigned char DR;
  unsigned char DR2;
    unsigned char DR3;
      unsigned char DR4;
      
           unsigned char MR;
   unsigned char MR2;
   unsigned char MR3;
         unsigned char MR4;
         
      
      unsigned char DB;
  unsigned char DB2;
    unsigned char DB3;
      unsigned char DB4;
      
      
    
 
 
IP1= strtok(IP,"."); 
  IP2= strtok(NULL,".");
    IP3= strtok(NULL,".");
       IP4= strtok(NULL,".");
       
  scanf("%s",IP);


   
  num=atoi(IP1);
 
/*
 
 while (num>255)
 {
 	printf("Direccion ip incorrecta\n");
 	 printf("Inserta una ip:\n");
 	scanf("%s",IP);
 	 IP1= strtok(IP,".");  
  num=atoi(IP1);
 }
 
   
*/


 
    if ( (num)&128 )
	 {
	 
    	if((num)&64)
    	{
		
	  
    		if((num)&32)
    		{
			
		
     			if((num)&16)
     			{
				 
		  
    				 if((num)&16)
    				 {
					 
			printf ("Direccion de clase E" );
   }   
   
       
	   
 		} else  
		 printf ("Direccion de clase D" );
    
	   
       			}else {
				    printf ("Direccion de clase C \n" );
				      printf ("Mascara de red:  " );
				       
IP1= strtok(IP,"."); 
  IP2= strtok(NULL,".");
    IP3= strtok(NULL,".");
       IP4= strtok(NULL,".");
			    unsigned char MR=255;
   unsigned char MR2=255;
   unsigned char MR3=255;
         unsigned char MR4=0;
         
	      printf("%d.",MR);
   printf("%d.",MR2);
    printf("%d.",MR3);
     printf("%d \n",MR4);
     
     unsigned char i;
     unsigned char contador1=0;
      
        
   
     
  
      for (i=128;i>0;i=i>>1)
     {
     	if ((num=atoi(IP4)&i) )
     	
     	contador1 ++;
    }
    
	      
	      if(contador1==8) 
	      {
		  printf("Tipo de direccion:      Direccion de Broadcast \n");
		  }
	    
		 
		  else if(contador1==0)
	     {
	     	printf("Tipo de direccion:   Direccion de Red\n");
	     	
		 }
		  else
	     {
	     	printf("Tipo de direccion:   Direccion de Host\n");
	     	
		 }
				    
	   
	    
	      printf ("Direccion  de red:  " );
	        DR=((num=atoi(IP1))&(MR));
       DR2=((num=atoi(IP2))&(MR2));
       DR3=((num=atoi(IP3))&(MR3));
       DR4=((num=atoi(IP4))&(MR4));
       printf("%d.",DR);
      printf("%d.",DR2);
      printf("%d.",DR3);
      printf("%d \n",DR4);
       
        
          
          
       printf ("Direccion  Broadcast: " );
       
         DB=((DR) |(~MR+256));
         DB2=((DR2) |(~MR2+256));
         DB3=((DR3) | (~MR3+256));
         DB4=((DR4) |(~MR4+256));
         printf("%d.",DB);
   printf("%d.",DB2);
    printf("%d.",DB3);
     printf("%d \n",DB4);
         
       
    
		 
         
          
          
         printf ("Rango Host:  " );
         DR=((num=atoi(IP1))&(MR));
       DR2=((num=atoi(IP2))&(MR2));
       DR3=((num=atoi(IP3))&(MR3));
       DR4=((num=atoi(IP4))&(MR4))+1;
       printf("%d.",DR);
      printf("%d.",DR2);
      printf("%d.",DR3);
      printf("%d - ",DR4);
         DB=((DR) |(~MR+256));
         DB2=((DR2) |(~MR2+256));
         DB3=((DR3) | (~MR3+256));
         DB4=((DR4) |(~MR4+256))-1;
         printf("%d.",DB);
   printf("%d.",DB2);
    printf("%d.",DB3);
     printf("%d \n",DB4);
						  
				    
				    
				}
       
	   
      					} else  {
						  printf ("Direccion de clase B \n" );
		               printf ("Mascara de red:  " );
		                
IP1= strtok(IP,"."); 
  IP2= strtok(NULL,".");
    IP3= strtok(NULL,".");
       IP4= strtok(NULL,".");
                    unsigned char MR=255;
   unsigned char MR2=255;
   unsigned char MR3=0;
         unsigned char MR4=0;
         
	      printf("%d.",MR);
   printf("%d.",MR2);
    printf("%d.",MR3);
     printf("%d \n",MR4);
     
     unsigned char i;
     unsigned char contador1=0;
      
        
   
      for (i=128;i>0;i=i>>1)
     {
     	if ((num=atoi(IP3)&i) )
     	
     	contador1 ++;
     }
  
      for (i=128;i>0;i=i>>1)
     {
     	if ((num=atoi(IP4)&i) )
     	
     	contador1 ++;
    }
    
	      
	      if(contador1==16) 
	      {
		  printf("Tipo de direccion:      Direccion de Broadcast \n");
		  }
	   
		 
		  else if(contador1==0)
	     {
	     	printf("Tipo de direccion:   Direccion de Red\n");
	     	
		 }
		   else 
	     {
	     	printf("Tipo de direccion:   Direccion de Host\n");
	     	
		 }
		 
	     
        printf ("Direccion  de red:  " );
         DR=((num=atoi(IP1))&(MR));
       DR2=((num=atoi(IP2))&(MR2));
       DR3=((num=atoi(IP3))&(MR3));
       DR4=((num=atoi(IP4))&(MR4));
       printf("%d.",DR);
   printf("%d.",DR2);
    printf("%d.",DR3);
     printf("%d \n",DR4);
      
       
          
          
       printf ("Direccion  Broadcast: " );
       
         DB=((DR) |(~MR+256));
         DB2=((DR2) |(~MR2+256));
         DB3=((DR3) | (~MR3+256));
         DB4=((DR4) |(~MR4+256));
         printf("%d.",DB);
   printf("%d.",DB2);
    printf("%d.",DB3);
     printf("%d \n",DB4);
         
printf ("Rango Host:  " );
  DR=((num=atoi(IP1))&(MR));
       DR2=((num=atoi(IP2))&(MR2));
       DR3=((num=atoi(IP3))&(MR3));
       DR4=((num=atoi(IP4))&(MR4))+1;
       printf("%d.",DR);
      printf("%d.",DR2);
      printf("%d.",DR3);
      printf("%d - ",DR4);
         DB=((DR) |(~MR+256));
         DB2=((DR2) |(~MR2+256));
         DB3=((DR3) | (~MR3+256));
         DB4=((DR4) |(~MR4+256))-1;
         printf("%d.",DB);
   printf("%d.",DB2);
    printf("%d.",DB3);
     printf("%d \n",DB4);
         
      
						  
					}
					
					
     }
       else
	   {
	   printf ("Direccion de clase A \n" );
	   printf ("Mascara de red:  " );
	  IP1= strtok(IP,"."); 
  IP2= strtok(NULL,".");
    IP3= strtok(NULL,".");
       IP4= strtok(NULL,".");
	           unsigned char MR=255;
   unsigned char MR2=0;
   unsigned char MR3=0;
         unsigned char MR4=0;
         
	      printf("%d.",MR);
   printf("%d.",MR2);
    printf("%d.",MR3);
     printf("%d \n",MR4);
     
    
     unsigned char i;
     unsigned char contador1=0;
      
        
     for (i=128;i>0;i=i>>1)
     {
     	if ((num=atoi(IP2)&i) )
     	
     	contador1 ++;
     }
    
      for (i=128;i>0;i=i>>1)
     {
     	if ((num=atoi(IP3)&i) )
     	
     	contador1 ++;
     }
  
      for (i=128;i>0;i=i>>1)
     {
     	if ((num=atoi(IP4)&i) )
     	
     	contador1 ++;
    }
    
	      
	      if(contador1==24) 
	      {
		  printf("Tipo de direccion:      Direccion de Broadcast \n");
		  }
	     
		 
		  else if(contador1==0)
	     {
	     	printf("Tipo de direccion:   Direccion de Red\n");
	     	
		 }
		 
		 
		 else 
	     {
	     	printf("Tipo de direccion:   Direccion de Host\n");
	     	
		 }
		 
		 
        printf ("Direccion  de red:  " );
         DR=((num=atoi(IP1))&(MR));
       DR2=((num=atoi(IP2))&(MR2));
       DR3=((num=atoi(IP3))&(MR3));
       DR4=((num=atoi(IP4))&(MR4));
       printf("%d.",DR);
   printf("%d.",DR2);
    printf("%d.",DR3);
     printf("%d \n",DR4);
      
      
         printf ("Direccion  Broadcast:  " );
         
         DB=((DR) |(~MR+256));
         DB2=((DR2) |(~MR2+256));
         DB3=((DR3) | (~MR3+256));
         DB4=((DR4) |(~MR4+256));
         printf("%d.",DB);
   printf("%d.",DB2);
    printf("%d.",DB3);
     printf("%d \n",DB4);
         
         
         printf ("Rango Host:  " );
           DR=((num=atoi(IP1))&(MR));
       DR2=((num=atoi(IP2))&(MR2));
       DR3=((num=atoi(IP3))&(MR3));
       DR4=((num=atoi(IP4))&(MR4))+1;
       printf("%d.",DR);
      printf("%d.",DR2);
      printf("%d.",DR3);
      printf("%d - ",DR4);
      
         DB=((DR) |(~MR+256));
         DB2=((DR2) |(~MR2+256));
         DB3=((DR3) | (~MR3+256));
         DB4=((DR4) |(~MR4+256))-1;
         
         printf("%d.",DB);
   printf("%d.",DB2);
    printf("%d.",DB3);
     printf("%d \n",DB4);
         
         
         
      
}
	  printf("\n¿Quiere repetir el proceso? Si es asi inserte S ,de lo contrario inserte N ...    ");
	  scanf("%s",&desicion);
	  
	  } while ((desicion=='S')||(desicion=='s')) ;
	  
		return 0;
		
		
} 
