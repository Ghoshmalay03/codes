// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     int *aPtr;

//     a=7;
//     aPtr=&a;

//     printf("The address of a is %p"
//             "\nThe value of aPtr is %p \n", &a, aPtr);

//     printf("The value of a is %d"
//             "\n The value of *aPtr is %d \n", a, *aPtr);

//     printf("Showing that * and & are complements of "
//             "each other \n &*aPtr = %p"
//             "\n *&aPtr = %p", &*aPtr, *&aPtr);

//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//         int *ptr=NULL;
//         int a=10;
//         printf("%u", ptr);
//         printf("%d", *ptr);
//         ptr=&a;
//         printf("%d", *ptr);

//         return 0;
// }

// #include<stdio.h>
// int main()
// {
// 	int arr[]={1,2,3,4,5,6,7,8,9};
// 	int *p1,*p2;
// 	p1=arr;
// 	p1++;
// 	printf("\n%d",*p1);
// 	p1--;
// 	printf("\n%d",*p1);
// 	p1=p1+2;
// 	printf("\n%d",*p1);
// 	p1=p1-2;
// 	printf("\n%d",*p1);
// 	p2=&arr[4];
// 	printf("\n%d",p2-p1);
// 	while(p1<=p2)
// 	{
// 		printf("\n%d",*p1);
// 		p1++;
// 	}
	
// 	printf("\n%d",p1+p2);
// 	printf("\n%d",p1-p2);
// 	printf("\n%d",p1+p2);
// 	printf("\n%d",p1+p2);
// 	printf("\n%d",p1+p2);
// 	printf("\n%d",p1+p2);
	
// }

// #include<stdio.h>
// int main(){
//         int arr[]={1,2,3,4,5};
//         int i;
//         int *p;
//         p=arr;
//         printf("\n First number is: %d", *p);
//         p=p+1;
//         printf("\n Second value is: %d", *p);
//         *p=45;
//         p=p+2;
//         *p=2;
//         printf("\n modified array is: ");
//         for ( i = 0; i < 5; i++)
//         {
//                 printf("\n%d", arr[i]);
//         }
//         p=arr;
//         *(p+1)=0;
//         *(p-1)=1;
//         printf("\nModified array is: ");
//         for ( i = 0; i < 5; i++)
//         {
//                 printf("\n%d", *(p+i));
//         }
//         return 0;
// }

//WAP to find the sum and mean of 1D array elements using pointer to an array
// #include<stdio.h>
// int main(){
//         int i, n, arr[20], sum=0;
//         int *pn=&n, *parr=arr, *psum=&sum;
//         float mean=0.0, *pmean=&mean;
//         printf("\n Enter the number of element in the array: ");
//         scanf("%d", pn);
//         for ( i = 0; i < *pn; i++)
//         {
//                 printf("\n Enter the number: ");
//                 scanf("%d", (parr+i));
//         }
//         for ( i = 0; i < pn; i++)
//         {
//                 *psum=*psum+*(arr+i);
//         }
//         *pmean=*psum;
//         printf("\n The numbers you entered are: ");
//         for ( i = 0; i < *pn; i++)
//         {
//                 /* code */
//         }
        
        
        
// }

// #include<stdio.h>
// int main(){
//         int a[]={1,2,3,4};
//         int *p=a,i;
//         p++;
//         *(p+1)=29;
//         p=p+1;
//         *p=23;
//         p--;
//         *(p+0)=12;
//         p=a;
//         for ( i = 0; i < 4; i++)
//         {
//                 /* code */
//         }
        
// }

// #include<stdio.h>
// #include<math.h>

// int main(){
//         int number=25;
//         int *ptr;
//         ptr=&number;
//         printf("The address of %d is %u", number, &number);
//         return 0;
// }


// #include<stdio.h>
// int main(){
//     int age=20;     //declared variable
//     int *ptr=&age;  //storing the memory address of the age variable in *ptr
//     int _age=*ptr;  //storing the value of ptr in _age
    
//     printf("%d", _age);
// }