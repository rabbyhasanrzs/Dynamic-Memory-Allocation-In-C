

// *    --------------------->    Title: Memory Allocation Failure Handling Using malloc()   --------------> //

//* Purpose:
            //? Attempts to allocate a huge memory block with malloc(), checks if the allocation fails, and exits the program if ptr == NULL.



                                    #include<stdio.h>
                                        int main() {
                                            int *ptr=(int*)malloc(40000000000000*sizeof(int));
                                                if (ptr==NULL)
                                                {
                                                    printf("--> Memory Allocation is Failed\n");
                                                    exit(1);
                                                }
                                        return 0;
                                    }

