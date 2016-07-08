//
// Created by Jonathan Pham on 6/27/16.
//

#include "TestCommandLineInterface.h"

/* ####### TEST DEFINITION ####### */
TEST_F(TestCommandLineInterfaceBase,IntroductoryText)
{
  testing::internal::CaptureStdout();
  CommandLineInterface uut_Cli;
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("C++"));
  ASSERT_THAT(output,::testing::HasSubstr("training"));
}

TEST_F(TestCommandLineInterface,DisplayMenu)
{
  // Setup
  testing::internal::CaptureStdout();
  // Test Function
  uut_Cli.displayTopMenu();
  // Validate Results
  std::string output = ::testing::internal::GetCapturedStdout();
  ASSERT_THAT(output,::testing::HasSubstr("[0]"));
  ASSERT_THAT(output,::testing::HasSubstr("[exit]"));
}


TEST_F(TestCommandLineInterface,GetUserInput){
  // Use Google Mock to Fake User Input
  ASSERT_TRUE(false);
}

//### Test Fixture Definition ###
void TestCommandLineInterface::SetUp() {

}

void TestCommandLineInterface::TearDown() {

}
