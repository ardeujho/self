#pragma once
# ifdef __ppc__
/* Sun-$Revision: 30.13 $ */

/* Copyright 1992-2006 Sun Microsystems, Inc. and Stanford University.
   See the LICENSE file for license information. */


// included in genHelper.hh

private:

  void verifyOneImmediateParent(assignableSlotLink* l, 
                                Location parentOopReg,
                                Location scratchReg,
                                fint count);

  void verifyConstrainedOopOfParent(oop targetOop, 
                                    Location parentOopReg, 
                                    Location scratchReg, 
                                    Label* ok);
  void verifyMapOfParent(Map* targetMap,
                         Location parentOopReg, 
                         Location regForMap, 
                         Label* ok);
# endif // __ppc__
