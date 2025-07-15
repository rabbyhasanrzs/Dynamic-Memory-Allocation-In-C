//* ------------->>  Title: Proper Initialization and Traversal of malloc() Allocated Array  --->>>>>> //

//* Purpose:
            //? Allocates memory for 4 integers using malloc(), initializes all 4 values, and prints them.


                                    #include<stdio.h>
                                    int main() {
                                            int *ptr=(int*)malloc(4*sizeof(int));
                                            ptr[0]=1;
                                            ptr[1]=2;
                                            ptr[2]=3;
                                            ptr[3]=4;
                                            for (int i = 0; i <4; i++)
                                            {
                                                printf("Value %d = %d\n",(i+1),ptr[i]);
                                            }
                                        return 0;
                                    }