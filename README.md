ESP32 attempt

Emulator of the EDSAC computer built in 1949.  This project implements the EDSAC emulator on Linux and currently consists of three separate emulators:
1. Console emulator.  This version provides no physical output during run, but gives a command line options during stop mode to see the state of the registers or memory.  This is the fastest version of the emulator.
2. Text emulator.  This version runs purley in a text terminal but provides output during run of the memory store and registers.  Since the emulator must write text to the screen each cycle, this version is slower than the pure console version.
3. GUI emulator.  This version provides a full graphical interface for the emulator and gives the best representation of what it was like to use the EDSAC. The CPU emulation itself runs in a separate thread from the ui, so the CPU can run anywhere from authentic speed to as fast as possible without regard for the time it takes for the ui to update the screen.
