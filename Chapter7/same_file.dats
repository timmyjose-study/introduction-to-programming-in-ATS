#include "share/atspre_define.hats"
#include "share/atspre_staload.hats"

// these are interfaces for functions/values that will be resolved at link time
// these can be in the same file as shown here, or in a DATS file (where the keyword `extern` is not 
// required for the interface specifications)
extern fun add(x: int, y: int): int
extern fun sub(int, int): int
extern fun mul: (int, int) -> int
extern fun div(int, int): int

extern fun fact(int): int
extern val fact10: int

extern fun swap_boxed{a, b: type}(xy: (a, b)): (b, a)
extern fun{a, b: t@ype} swap_tmplt(xy: (a, b)): (b, a)

// implementations of the interfaces

implement add(x, y) =  x + y
implement sub(x, y) = x - y
implement mul(x, y) = x * y
implement div(x, y) = if y = 0 then 0 else x / y

implement fact(n) = 
  ifcase 
    | n <= 0 => 1
    | _ => n * fact(n - 1)

implement fact10 = fact(10)

implement swap_boxed{a, b}(xy) = (xy.1, xy.0)

implement{a, b} swap_tmplt(xy) = (xy.1, xy.0)

implement main0 (argc, argv) = {
  val () = if argc != 3 then prerrln!("Usage: ", argv[0], " <num1-> <num-2>")
  val () = assertloc(argc = 3)

  val x = g0string2int(argv[1])
  val y = g0string2int(argv[2])
  val () = println!(add(x, y))
  val () = println!(sub(x, y))
  val () = println!(mul(x, y))
  val () = println!(div(x, y))
  val () = println!(fact(x))
  val () = println!(fact(y))
  val () = println!(fact10)

  val t1 = (box("world"), box("hello"))
  val () = let val (f1, s1) = swap_boxed(t1) in
  println!(unbox(f1), ", " , unbox(s1)) end

  val t2 = (1, "again")
  val () = let val (f2, s2) = swap_tmplt<int, string>(t2) in
  println!(f2, ", " , s2) end
          
}
