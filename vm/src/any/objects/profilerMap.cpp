/* Sun-$Revision: 30.8 $ $ */

/* Copyright 1992-2012 AUTHORS.
   See the LICENSE file for license information. */

# include "byteVectorOop.hh"
# include "debug.hh"
# include "enumeration.hh"
# include "label_inline.hh"
# include "mapOop.hh"
# include "mirrorOop.hh"
# include "profilerMap.hh"
# include "vmStrings.hh"
# include "zone.hh"

profilerOop profilerMap::create_profiler() {
  slotList* slots = new slotList(VMString[PARENT], 
                                 parent_map_slotType,
                                 create_slots((slotList*)NULL));
  profilerMap pm;
  profilerOop prof;
  profilerMap* m= (profilerMap*)create_map(sizeof(profilerMap), slots,
                                           &pm, (oop*)&prof);
  Unused(m); // profiling
  prof->initialize();
  return prof;
}

void profilerMap::kill(oop p) {
  profilerOop(p)->initialize();
}

bool profilerMap::is_live(oop p) {
 return profilerOop(p)->get_profiler() != NULL;
}

fint profilerMap::empty_object_size() {
  return sizeof(profilerOopClass) / oopSize; 
}

bool profilerMap::verify(oop obj) {
  Unused(obj);
  return true;
}

void profilerMap::print(oop obj) {
  ResourceMark rm;
  lprintf("profiler ");
  if (WizardMode && !obj->is_map()) {
    lprintf("(FILL OUT)");
  }
  slotsMapDeps::print(obj);
}

void profilerMap::print_string(oop, char* buf) {
  sprintf(buf, "<a profilerOop>");
}

void profilerMap::print_oop(oop obj) {
  lprintf("<a profilerOop");
  lprintf(" (%#lx) ", (void*)obj);
  lprintf(">");
}

// enumerating
// bool profilerMap::is_enumerable(oop obj,  oop* matching_cell) { }

void profilerMap::dummy_initialize(oop obj, oop filler) {
  Unused(filler);
  assert(obj->is_profiler(), "a profiler object is expected");
  profilerOop(obj)->initialize();
}
