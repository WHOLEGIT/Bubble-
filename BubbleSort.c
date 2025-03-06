#include <stdio.h>

int main(void) {
    int count = 0, num = 0, array[100];

    printf("Enter the numbers (enter 0 to stop): \n");

    while(1){
        scanf("%d", &num);
        if(num==0){break;}

        array[count] = num;
        count=count+1;
    }



    for (int i = 0; i < count; i++) {
        for ( int a = 0; a < (count - 1); a++) {
            if (array[a] > array[a+1]) {
                int temp = array[a];
                array[a] = array[a+1];
                array[a+1] = temp;
            }
        }
    }

    for(int i= 0; i < count; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
