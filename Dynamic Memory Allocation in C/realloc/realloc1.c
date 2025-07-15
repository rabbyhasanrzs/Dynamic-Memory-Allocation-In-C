

//*     -------------->>  Title: Dynamic Reallocation Using realloc() for Changing Dataset

//* Purpose:

            //? Allocates memory for 5 odd integers using calloc().
            //? Then resizes the block with realloc() to store 6 even numbers.
            //? Prints both stages (although there’s a minor index mistake: prints 4 odd and 5 even instead of all).


                        #include<stdio.h>
                        int main() {
                                    //* Allocated memory to store first 5 odd numbers ,and then reallocate it to store first 6 even number.
                                //Code:6
                                int *ptr;
                                ptr=(int*)calloc(5,sizeof(int));
                                ptr[0]=1;
                                ptr[1]=3;
                                ptr[2]=5;
                                ptr[3]=7;
                                ptr[4]=9;
                                for (int i = 0; i <4; i++)
                                {
                                    printf("Value %d = %d\n",(i+1),ptr[i]);
                                }
                                
                                ptr=realloc(ptr,6);
                                ptr[0]=2;
                                ptr[1]=4;
                                ptr[2]=6;
                                ptr[3]=8;
                                ptr[4]=10;
                                ptr[5]=12;

                                printf("\n\n");

                                for (int i = 0; i <5; i++)
                                {
                                    printf("Value %d = %d\n",(i+1),ptr[i]);
                                }
                                
                            return 0;
                        }