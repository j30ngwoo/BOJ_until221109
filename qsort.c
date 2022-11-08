int compare(const void *a, const void *b) {
    int num1 = *(int *)a;  
    int num2 = *(int *)b;   

    if (num1 < num2)  
        return -1;    
    
    if (num1 > num2)    
        return 1;       
    
    return 0; 
}

// qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);