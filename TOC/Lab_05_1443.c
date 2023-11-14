#include<stdio.h>
//#include<file.h>

int main(){
	FILE *fptr;
	char ch;
	fptr=fopen("re.txt","r");
	int j,i=1;

	while (!feof(fptr)) {    
            ch = fgetc(fptr);
            if(ch=='\n')
              i++;  
            if(ch=='/'){
		char str[150];
		j=0;            
            	   ch = fgetc(fptr);
            	   if(ch=='/'){
            	      while(ch!='\n'){   	      	
            	      	ch = fgetc(fptr);
            	  	  str[j++]=ch;    	
            	      }
            	      printf("Line-%d :",i);
            	      for(int k=0;k<j-1;k++)
            	         printf("%c",str[k]);
            	      printf("\n");  
            	      i++;
            	   }
            	   else if(ch=='*'){
            	       ch='l';
            	       j=0;
            	       printf("Line-%d :",i);
            	       while(ch!='*'){
            	      	  ch = fgetc(fptr);
            	  	  if(ch=='\n')
            	  	    i++;  
            	  	  if(ch=='/')
            	  	  	printf("There is no closing key.Error!");
            	  	  else
            	  	      str[j++]=ch;    	
            	       }
            	   
            	      for(int k=0;k<j-1;k++)
            	        printf("%c",str[k]);
            	      printf("\n");
            	      i++;
            	   }                
             }   
             
              
        
        }
	
        fclose(fptr);
        return 0;	


}
