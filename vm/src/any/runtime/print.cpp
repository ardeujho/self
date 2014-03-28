/* Sun-$Revision: 30.7 $ */

/* Copyright 1992-2012 AUTHORS.
   See the LICENSE file for license information. */

# include "abstract_interpreter_inline.hh"
# include "debugPrintable.hh"
# include "label_inline.hh"
# include "prim.hh"
# include "print.hh"
# include "slotRef.hh"
# include "space_inline.hh"

void printName(methodMap* mm, oop selector) {
  lprintf(sprintName(mm, selector));
}

const char* sprintName(methodMap* mm, oop selector) {
  // used for debugging only; use static buffer for result string
  static char buf[800];
  const char* sel = selector == NULL ? "" : selector_string(selector);
  if (mm) {
    stringOop file = mm->file();
    smiOop line = mm->line();
    const char *f,   *fn = selector_string(file);
    // drop path name from file name to avoid excessive length
    for (f = fn + strlen(fn); f > fn && *f != '/'; f--) ;
    if (*f == '/') f++;
    if (file->length() > 0) {
      sprintf(buf, "%s (%s:%ld)", sel, f, long(line->value()));
      return buf;
    }
  } 
  return sel;
}

// should factor out last part of this and previous methods:

const char* sprintValueMethod( oop rcvr ) {
  // used for debugging only, if rcvr is block, print out source info for block
  if (!rcvr->is_block_with_code())
    return const_cast<char*>("");
  methodMap* mm = (methodMap*)blockOop(rcvr)->value()->map();
  // get outermost method map
  methodMap* omm = mm;
  for (;;) {
    methodMap* nmm = omm->get_lexical_link_map();
    if (!nmm)
      break;
    omm = nmm;
  }
  stringOop file = omm->file();
  smiOop line = omm->line();
  const char *f,  *fn = selector_string(file);
  // drop path name from file name to avoid excessive length
  for (f = fn + strlen(fn); f > fn && *f != '/'; f--) ;
  if (*f == '/') f++;
  static char buf[800];
  if (file->length() > 0) {
    sprintf(buf, "(%s:%ld)", f, long(line->value()));
    return buf;
  }
  return const_cast<char*>("");
}


void CList::print_short() {
  if (isEmpty()) {
    lprintf("{}");
  } else {
    lprintf("{ ");
    bool first = true;
    for (CListElem* e = head(); e; e = e->next()) {
      if (first) first = false; else lprintf(", ");
      pp_short(e->data());
    }
    lprintf(" }");
  }
}

oop printVMObj_prim(oop rcvr) {
  // rcvr is address of a C++ object
  if (rcvr->is_smi()) {
    VMObj* obj = (VMObj*)smiOop(rcvr)->value();
    obj->print();
  } else {
    return ErrorCodes::vmString_prim_error(BADTYPEERROR);
  }
  return rcvr;
}

void CList::print() {
  if (isEmpty()) {
    lprintf("{}");
  } else {
    lprintf("{ ");
    bool first = true;
    for (CListElem* e = head(); e; e = e->next()) {
      if (first) first = false; else lprintf(", ");
      lprintf("%d", e->data());
    }
    lprintf(" }");
  }
}

void TableElem::print_short() {
  pp_short(key);
  lprintf("=");
  pp_short(value);
}

void TableElem::print() {
  print_short();
}

