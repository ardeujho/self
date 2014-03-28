# if  TARGET_ARCH == I386_ARCH
/* Sun-$Revision: 1.3 $ */

/* Copyright 1992-2012 AUTHORS.
   See the LICENSE file for license information. */


# include "abstract_interpreter_inline.hh"
# include "nlrSupport.hh"
# include "node.hh"
# include "prim.hh"

# ifdef SIC_COMPILER

  PrimDesc* DeadBlockNode::non_lifo_abort;

  void initDeadBlockNode() {
    DeadBlockNode::non_lifo_abort
      = getPrimDescOfFunction(fntype(&NLRSupport::non_lifo_abort), true);
  }

# endif // SIC_COMPILER
# endif // TARGET_ARCH == I386_ARCH
