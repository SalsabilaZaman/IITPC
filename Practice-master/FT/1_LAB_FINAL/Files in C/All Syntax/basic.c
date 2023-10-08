/*
                                                    FILE BASICS            
                                            Open -> Write -> Read ->Close

       FILE OPEN                             FILE WRITE                             FILE READ                    FILE CLOSE

fp=fopen("f_name", "mode");  |   fputc(int c,FILE *fp);                    | int c = fgetc()              |       
                             |                                             |                              |  
__________MODE___________    |   fprintf(FILE *fp,string format..);        | char str[100];               |  
r,w,a,r+,w+,a+               |                                             | fscanf(fp ,"%s",str);        |     fclose(fp);   
                             |   fputs(const char *s, FILE *fp);           |                              |
                             |                                             | fgets(str,255,(FILE*)fp);    |
                             |                                             |                              |  
*/