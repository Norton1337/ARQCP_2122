void putRestWithZero(int matrixCopy[num][num][num]){
    for(int x=0;x<num;x++)
    {
        for(int y=0;y<num;y++)
        {
            for(int z=0;z<num;z++){
                matrixCopy[x][y][z] = 0;
            }
        }
    }
}
