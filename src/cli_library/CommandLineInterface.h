//
// Created by Jonathan Pham on 6/21/16.
//

#ifndef CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
#define CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <memory>

#include "CliMenu.h"

class CommandLineInterface
{
public:
  // CommandLineInterface(&Menu);
  CommandLineInterface();
  void displayTopMenu();
protected:
  void displayCliIntroduction();
  std::string getUserInput();
  void processMenuItem();
};



#endif //CTA_CLI_LIBRARY_COMMAND_LINE_INTERFACE_H_
