#include  "scriber.h"


#include  "dda.h"
#include  "dda_queue.h"
#include  "pinio.h"
#include  "gcode_parse.h"
#include  "sersendf.h"
#include "delay.h"
#include "analog.h"
#include "memory_barrier.h"




// DREMEL defines and functions
void dremel_on(){
  //digitalWrite(DREMEL_PIN, 1);
  WRITE(DREMEL_PIN, 1);
}

void dremel_off(){
  //digitalWrite(DREMEL_PIN, 0);
  WRITE(DREMEL_PIN, 0);
}

