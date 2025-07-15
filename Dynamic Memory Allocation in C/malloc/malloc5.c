
//*  --------------->>>  Title: Out-of-Bounds Access in Dynamically Allocated Memory.   ------> //

//* Purpose:
            //? Allocates space for 4 integers, but assigns and accesses a 5th element (ptr[4]), which causes undefined behavior (buffer overflow).

                    #include<stdio.h>
                    int main() {
                            int *ptr=(int*)malloc(4*sizeof(int));
                            ptr[0]=1;
                            ptr[1]=2;
                            ptr[2]=3;
                            ptr[3]=4;
                            ptr[4]=5;

                            for (int i = 0; i <5; i++)
                            {
                                printf("Value %d = %d\n",(i+1),ptr[i]);
                            }
                        return 0;
                    }