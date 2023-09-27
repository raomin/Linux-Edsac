#ifndef _PRINTER_H
#define _PRINTER_H

#include <SmrFramework.h>

// using namespace SmrFramework;

#define UInt32 uint32_t
#define UInt16 uint16_t
#define Int32  int32_t
#define Byte   unsigned char

class Printer {
  protected:
    char    printer[16][80];
    int32_t   printerLine;
    Int32   printerPos;
    bool shiftMode;
  public:
    Printer();
    ~Printer();
    void Print(Byte out);
    void Print(const char* message);
    bool ShiftMode();
    bool ShiftMode(bool b);
    Byte    Translate(Byte in);
  };

#endif
