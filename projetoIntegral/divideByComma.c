int * divideByComma(char *pointer){
    int counter = 0;

    static int arr[elemSize];
    while (pointer != NULL) {
            int a = atoi(pointer);
            arr[counter] = a;
            //printf("%d\n", counter);
            pointer = strtok (NULL, ",");
            counter++;
    }

    return arr;
}
