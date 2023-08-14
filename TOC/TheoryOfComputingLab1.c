#include<stdio.h>
#include <stdlib.h> 
#include<math.h>
int printLength(char *str){		// returns length of the given string
	int l;
	for(l=0;str[l]!='\0';l++){
	}
	printf("Length is %d\n",l);
	return l;		

}
void alphaset(int k){			//prints elements of the language
	double s=k;
	int n=(int)pow(2.00,s);
	char arr[n][k];
	
	for(int i=0;i<n;i++){
	   int a=i;
	   for(int j=k-1;j>-1;j--){
	     if(a!=0){ 
	      arr[i][j]=a%2+'0';
	      a=a/2;
	     }
	     else
	      arr[i][j]='0';
	     
	   }   
	}
	printf("{");
	for(int i=0;i<n;i++){
	  for(int j=0;j<k;j++)
	    printf("%c",arr[i][j]);
	 if(i<n-1) 
	  printf(",");
	}    
	printf("}");
}
void generaterandom(){	// generates random number of size(1-9)
	int j;
	int size=rand()%10;
	
	char str[size];
	for(j=0;j<size-1;j++){
		int num=rand()%2;
		str[j]=num+'0';
	}
	str[j]='\0';
	
	for(int j=0;j<size;j++)
		printf("%c",str[j]);
	printf("\n");
	printLength(str);
}


void concateString(char *str1,char *str2){ 		//adds two given stings together
	int m,n;
	for(int i=0;str1[i]!='\0';i++)
		m++;
	for(int i=0;str2[i]!='\0';i++)
		n++;
	char final[m+n+1];
	for(int i=0;i<m;i++)	
		final[i]=str1[i];
	for(int j=0,i=m;i<m+n;i++,j++)
		final[i]=str2[j];
	final[m+n]='\0';			
	for(int i=0;final[i]!='\0';i++)
		printf("%c",final[i]);
}

void checkstring(char *str){			//checks if a string belongs to the given language
	int flag=0;
	for(int k=0;str[k]!='\0';k++)
		if(str[k]!='0' && str[k]!='1' ){
			flag=1;
			break;
		}
	if(flag==1)
		printf("This string is not from the alphabet");
	else
	        printf("This string is from the alphabet");				
}

void ifpalindrome(char *str){		// checks if a string is palindrome
	int flag=0;
	int len=printLength(str);
	for(int i=0;i<=(len/2);i++)
		if(str[i]!=str[len-i-1]){
			flag=1;
			break;
		}
	if(flag==1)
		printf("Not palindrome");
	else
	    printf("Palindrome"); 			
}
int main(){
	int x;
	printf("1.Generate 5 strings\n");
	printf("2.Identify if a string is from the alphabet\n");
	printf("3.Concate two strings\n");
	printf("4.Check if palindrome\n");
	printf("5.Set ");
	printf("Enter your choice-");
	scanf("%d",&x);
	if(x==1){
		for(int a=0;a<5;a++)
		      generaterandom();
	
	}
	else if(x==2){
		char str[10];
		printf("Enter your string-");
		scanf("%s",str);
		checkstring(str);	
	}
	
	else if(x==3){
		char str1[10],str2[10];
		printf("Enter 1st string-");
		scanf("%s",str1);
		printf("Enter 2nd string-");
		scanf("%s",str2);
		concateString(str1,str2);
	}
	else if(x==4){
		char str[10];
		printf("Enter your string-");
		scanf("%s",str);
		ifpalindrome(str);
	}
	else{
		int k;
		printf("Enter k-");
		scanf("%d",&k);
		alphaset(k);
	
	}
	
	return 0;
}



