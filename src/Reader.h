#ifndef _READER_H
#define _READER_H

#include <stdio.h>
#include <SmrFramework.h>


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

