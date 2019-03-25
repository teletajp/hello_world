#include <gtest/gtest.h>
#include "get_version.h"
TEST(TestVersion, get_version)
{
	ASSERT_EQ(PROJECT_VERSION_PATCH, get_version());
}

int main(int argc, char *argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}