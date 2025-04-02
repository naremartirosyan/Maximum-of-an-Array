int max(int array[], int size)
{
    int MaxOfArray = 0;
    
    for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(array[i] >= array[j] && array[i] >= MaxOfArray)
                {
                    MaxOfArray = array[i];
                }
                else if(array[i] <= array[j] && array[j] >= MaxOfArray)
                {
                    MaxOfArray = array[j];
                }
            }
        }
        
    return MaxOfArray;
}