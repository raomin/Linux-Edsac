#ifndef _READER_H
#define _READER_H

#include <stdio.h>
#include <SmrFramework.h>

// using namespace SmrFramework;

#define Byte unsigned char
#define UInt32 uint32_t
#define UInt16 uint16_t
#define Int32  int32_t

class Reader {
  protected:
    FILE*   tape;
    bool tapeRemark;
  public:
    Reader();
    ~Reader();
    bool Mount(char* filename);
    Byte    Read();
    Byte    Translate(Byte in);
  };

#endif

