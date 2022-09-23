#include <time.h>
#include <stdlib.h>
int randd(){
srand(time(NULL));   // to change every time.
int r = rand();
return r;
}
