#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

staload "acker.sats"
dynload "acker.dats"

implement main0 () = {
  val () = assertloc (acker(3, 3) = 61)
}
