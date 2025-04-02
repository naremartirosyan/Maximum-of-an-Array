#include <stdio.h> 
#include <gtest/gtest.h>
#include "declarations.h"

TEST(MaximumOfAnArray, ArrayOf1Element)
{
    int array[1] = {1};
    ASSERT_EQ(max(array, 1), 1);
}

TEST(MaximumOfAnArray, ArrayOf2ElementsInIncreasingOrder)
{
    int array[2] = {1, 2};
    ASSERT_EQ(max(array, 2), 2);
}

TEST(MaximumOfAnArray, ArrayOf3ElementsInIncreasingOrder)
{
    int array[3] = {1, 2, 3};
    ASSERT_EQ(max(array, 3), 3);
}

TEST(MaximumOfAnArray, ArrayOf3ElementsInRandomOrder)
{
    int array[3] = {1, 3, 2};
    ASSERT_EQ(max(array, 3), 3);
}

TEST(MaximumOfAnArray, ArrayOf4ElementsInRandomOrder)
{
    int array[4] = {5, 7, -4, 3};
    ASSERT_EQ(max(array, 4), 7);
} 

TEST(MaximumOfAnArray, ArrayOf7ElementsInRandomOrder)
{
    int array[7] = {5, 7, -4, 3, 78, -98, 159};
    ASSERT_EQ(max(array, 7), 159);
}