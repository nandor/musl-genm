
  .section .text
  .globl setjmp
setjmp:
  .call       setjmp
  .args       i64

  arg.i64     $0, 0

  mov.i64     $1, $frame_addr
  st          [$0], $1

  mov.i64     $2, 8
  add.i64     $3, $0, $2
  mov.i64     $4, $ret_addr
  st          [$3], $4

  mov.i32     $5, 0
  ret         $5
