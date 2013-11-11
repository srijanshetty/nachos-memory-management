#include "syscall.h"
#include "synchop.h"

#define SEMKEY 19

int
main()
{
    int id = SemGet(SEMKEY);
    int value = 3;
    SemCtl(id, SYNCH_SET, &value);
    int v2;
    SemCtl(id, SYNCH_GET, &v2);
    PrintInt(v2);
}
