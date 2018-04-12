#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *request = {98, 183, 37, 122, 14, 124, 65, 67};
    int size = (int) sizeof(request)/sizeof(request[0]); 
    int newRequest[8]; 
    int current = 53; 
    int min = abs(current - request[0]); 
    int i, j; 
    int temp; 
    int index; 

    for(j = 0; j<size; j++){
        for(i = 0; i < size; i++){
            if(min >= abs(current - request[i])&&request[i] < 200) {
                min = abs(current - request[i]); 
                temp = request[i]; 
                index = i; 
                
            }
        
        } 
        
        current = temp;  
        request[index] = 210; 
        newRequest[j] = current; 
        min = abs(current - request[0]); 
       
        
    }
     
    //printf("min: %d", min); 
    //printf("pos: %d", current);
    printf("new list\n");  
    for(int i = 0; i < 8; i++){
        printf("%d\n", newRequest[i]); 
    }

    return 0; 
}