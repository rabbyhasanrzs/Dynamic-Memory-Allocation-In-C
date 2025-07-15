

//*    ----------------->> Title: Remaining memory holds garbage values -------------------->//

                    #include<stdio.h>
                    int main() {
                            int *ptr=(int*)malloc(4*sizeof(int));
                            for (int i = 0; i <4; i++)
                            {
                                printf("Value %d = %d\n",(i+1),ptr[i]);
                            }
                        return 0;
                    }