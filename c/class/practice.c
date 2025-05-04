// #include<stdio.h>
// #include<math.h>
// int main(){
//     char carname[20];

//     printf("Enter car name : ");
//     scanf("%s", &carname);

//     printf("Name of the car is %s", carname);

//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int  main(){
//     char str[50];

//     printf("Enter a string : ");
//     gets(str);
//     printf("String is : ");
//     puts(str);
// }

// #include<stdio.h>
// #include<math.h>
// #include<string.h>

// int main(){
//     char str1[10], str2[10];
//     printf("Enter first string : ");
//     gets(str1);
//     printf("Enter second string : ");
//     gets(str2);

//     strcat(str1, str2);
//     printf("After concatination : %s", str1);

//     return 0;
// }

// //strncpy()
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[15], str2[15];
//     int n;
//     printf("Enter first string : ");
//     gets(str1);
//     printf("Enter second string : ");
//     gets(str2);
//     printf("Enter no.of characters: ");
//     scanf("%d", &n);
//     strcpy(str2, str1, n);
//     printf("source : %s",str1);
//     printf("final : %s", str2);

//     return 0;
// }

// //strcmp
// #include<stdio.h>
// #include<math.h>

// int main(){
//     char str1[20], str2[20];
//     printf("Enter first string : ");
//     gets(str1);
//     printf("Enter second string : ");
//     gets(str2);
//     int n = strcmp(str1, str2);
//     if (n == 0){
//         printf("Equal...");
//     } else if (n > 0){
//         printf("str1...");
//     } else{
//         printf("str2...");
//     }
//     return 0;
// }

// //strrev
// #include<stdio.h>
// #include<math.h>
// int main(){
//     char str[20];
//     printf("Enter string : ");
//     gets(str);
//     printf("Reverse : %s", strrev(str));
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str1[10];
// int i,len;
// printf("Enter any string \t");
// gets(str1);
// len=strlen(str1);
// for(i=0;i<len;i++)
// 	{
// 	if(str1[i]>='a' && str1[i]<='z')
	
// 	str1[i]=str1[i]-32;
// 	}
// puts("string in upper is");
// puts(str1);
// return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str1[20]="Example";
// char str2[30]="Exam";
// if(strncmp(str1,str2,4)){
// printf("\nHello");
// }
// else {printf("\nWorld");
// }
// return 0;
// }

#include<stdio.h>
#include<string.h>
int main(){
    char str1[10], str2[10];
    float n;
    gets(str1);
    gets(str2);
    scanf("%.2f", &n);
    
    printf("Passenger Information: \n");
    printf("Name: %s \n", str1);
    printf("Ticket Price: Rs. %.2f \n", n);
    printf("Destination Location: %s \n", str2);
    
    return 0;
}