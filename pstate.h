#ifndef _PSTAT_H_
#defind _PSTAT_H_
#include "param.h"

struct pstat {
    int inuse[NPROC];
    int pid[NPROC];
    int hticks[NPROC];
    int lticks[NPROC];
    int killed[NPROC];
}
#endif