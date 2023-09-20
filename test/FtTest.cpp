#include <stdio.h>
#include <stdlib.h>
#include <gtest/gtest.h>
#include "Num.h"

struct FtTest : testing::Test
{
};
TEST_F(FtTest,should_save_num_correct)
{
    Num n(2);
    EXPECT_EQ(n.num,2);
}
