# if  TARGET_ARCH == PPC_ARCH
/* Sun-$Revision: 30.6 $ */

/* Copyright 1992-2006 Sun Microsystems, Inc. and Stanford University.
   See the LICENSE file for license information. */


# include "allocation.hh"
# include "fields.hh"
# include "label_inline.hh"
# include "nmethod.hh"
# include "uncommonBranch.hh"


# if defined(SIC_COMPILER)

bool shouldRestartSend(int32* instp) {
  Unused(instp);
  fatal("unimp mac");
  return false;
}

unsigned trapCount(int32* instp) {
  Unused(instp);
  fatal("unimp mac");
  return 0;
}

void setTrapCount(int32* instp, unsigned count) {
  Unused(instp); Unused(count);
  fatal("unimp mac");
}

# endif


bool isMapLoad(int* instp) {
  return is_lwz(*(inst_t*)instp) && SI(*(inst_t*)instp) == map_offset();
}


void handleMapLoadTrap(InterruptedContext* c) {
  Unused(c);
  fatal("unimp mac");
}
# endif // TARGET_ARCH == PPC_ARCH
