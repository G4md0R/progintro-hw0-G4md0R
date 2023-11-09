#include <stdio.h>
#include <time.h>
int main ()
{   //initialize x,y
    int x,y = 0; 
    //open files
    FILE *inputf = fopen("../test/input.txt", "r");
    FILE *outputf = fopen("../test/output.txt", "w");
    //assign numbers to the variables
    fscanf(inputf, "%d %d", &x, &y);
    int z;
    int count = 0;
    int maxcount = 0;
    double start_time, end_time;
    //start clock
    start_time = ((double) clock()) / CLOCKS_PER_SEC;
    //find the length
    for (; x < y; x++){
        if (x<1){
        count = 0;
        break;
        }
        else
        z = x;
        while (z>1){
            if (z % 2 == 0){
                z = z / 2;
            }
            else z = z * 3 + 1;
            count ++;
        }
        //find the max length of the numbers
        if (count>maxcount){
        maxcount = count + 1;
        //restart count
        count = 0;
        }
        else 
        //restart count
        count = 0;
    }
    //End clock
    end_time = ((double) clock()) / CLOCKS_PER_SEC;
    printf("Time: %f seconds\n", end_time - start_time);
    //print max length
    fprintf(outputf, "%d", maxcount);
    //close the files
    fclose(inputf);
    fclose(outputf);
}
