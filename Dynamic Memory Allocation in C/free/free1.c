

//*     --------->>>>>>>>  Title: Free and Reallocate Memory Using calloc()

//* Purpose:
            //? Allocates memory for 4 floats using calloc().
            //? Initializes and prints them.
            //? Frees memory using free().
            //? Then reallocates a smaller block (2 floats) and prints (zeros, since calloc() zero-initializes).


                        #include<stdio.h>
                        int main() {
                                    float *ptr=(float*)calloc(4,sizeof(float));
                                ptr[0]=1;
                                ptr[1]=2;
                                ptr[2]=3;
                                ptr[3]=4;

                                for (int i = 0; i <4; i++)
                                {
                                    printf("Value %d = %f\n",(i+1),ptr[i]);
                                }

                                free(ptr);
                                ptr=(float*)calloc(2,sizeof(float));
                                
                                for (int i = 0; i <2; i++)
                                {
                                    printf("Value %d = %f\n",(i+1),ptr[i]);
                                }
                            return 0;
                        }