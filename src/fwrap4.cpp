#ifdef IPHREEQC_NO_FORTRAN_MODULE
#include "IPhreeqc.h"
#include "fwrap.h"

#if defined(_WIN32)

#if defined(__cplusplus)
extern "C" {
#endif

//
// Intel Fortran compiler 9.1 /iface:default /names:lowercase
//
#define IPQ_DECL 
#define IPQ_CASE_UND(name, NAME, name_, NAME_) name

#include "fimpl.h"

#if defined(__cplusplus)
}
#endif

#endif
#endif