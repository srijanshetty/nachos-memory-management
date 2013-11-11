#include "syscall.h"
#include "synchop.h"

#define SEMKEY 19

int
main()
{
    int id = SemGet(SEMKEY);
    PrintChar("\n");
    PrintInt(SemGet(SEMKEY));
}
