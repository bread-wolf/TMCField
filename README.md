# TMCField

Simple C++ interface to abstract reading from / writting to Trinamic chip registers.
This can be used with any Trinamic chip interface.

Currently supported chips :
 - TMC22XX
 - TMC2300
 - TMC7300

Just include TMCXXX_Map.hpp and use the class methods on the predefined field objects.

ToDo:
 - [ ] Add TMC516X Field map
 - [ ] Start supporting SPI-interface chips