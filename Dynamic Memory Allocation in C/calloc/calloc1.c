

//*    ---------->>>>        Title: Using calloc() to Allocate and Initialize Float Array

//* Purpose:
            //? Allocates memory for 4 floats using calloc(), initializes values, and prints them. calloc initializes memory to zero by default.

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
                            return 0;
                        }