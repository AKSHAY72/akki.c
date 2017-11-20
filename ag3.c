#include<stdio.h>

main()
{
 int status;
char file_name[25];
 file_name
printf("Enter the name of file you wish to delete\n");


status=remove(file_name);


if(status==0)
printf("%s file deleted sucefully.\n",file_name);
else
{
printf("Unable to delete the file\n");
perror("Error");
}

return 0;
}
