#include "header.h"

byte translateOutput(byte in) {
  if (shiftMode == 0) {
    switch (in) {
      case 0: return 'P';
      case 1: return 'Q';
      case 2: return 'W';
      case 3: return 'E';
      case 4: return 'R';
      case 5: return 'T';
      case 6: return 'Y';
      case 7: return 'U';
      case 8: return 'I';
      case 9: return 'O';
      case 10: return 'J';
      case 11: return 201;
      case 12: return 'S';
      case 13: return 'Z';
      case 14: return 'K';
      case 15: return 200;
      case 16: return ' ';
      case 17: return 'F';
      case 18: return 13;
      case 19: return 'D';
      case 20: return ' ';
      case 21: return 'H';
      case 22: return 'N';
      case 23: return 'M';
      case 24: return 10;
      case 25: return 'L';
      case 26: return 'X';
      case 27: return 'G';
      case 28: return 'A';
      case 29: return 'B';
      case 30: return 'C';
      case 31: return 'V';
      }
    return ' ';
    }
  switch (in) {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return ' ';
    case 11: return 201;
    case 12: return '"';
    case 13: return '+';
    case 14: return '(';
    case 15: return 200;
    case 16: return ' ';
    case 17: return '$';
    case 18: return 13;
    case 19: return ';';
    case 20: return ' ';
    case 21: return 'l';
    case 22: return ',';
    case 23: return '.';
    case 24: return 10;
    case 25: return ')';
    case 26: return '/';
    case 27: return '#';
    case 28: return '-';
    case 29: return '?';
    case 30: return ':';
    case 31: return '=';
    }
  return ' ';
  }

void print(byte out) {
  out = translateOutput(out);
  if (out == 200) shiftMode = 0;
    else if (out == 201) shiftMode = 1;
    else printf("%c",out);
  }

