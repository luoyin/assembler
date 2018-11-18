#ifndef _UTIL_PARSER_H_
#define _UTIL_PARSER_H_

#include <string>

class Parser {
public:
  static const int PARSER_OK=0;
  static const int PARSER_ERROR=-1;
  
public:
  static int ParserInt(const std::string& str, int *retVal);
};

#endif