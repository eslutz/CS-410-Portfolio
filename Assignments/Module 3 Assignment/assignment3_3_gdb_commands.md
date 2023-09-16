# Assignment 3.3

## Binary file to hex

[assignment3_3.o hex dump](assignment3_3_hex_dump.txt)

## GDB Commands

### Identify the functions in the binary file

```bash
(gdb) info functions
All defined functions:

Non-debugging symbols:
0x00000000004004a8  _init
0x00000000004004e0  puts@plt
0x00000000004004f0  printf@plt
0x0000000000400500  __libc_start_main@plt
0x0000000000400510  __gmon_start__@plt
0x0000000000400520  __isoc99_scanf@plt
0x0000000000400530  exit@plt
0x0000000000400540  _start
0x0000000000400570  deregister_tm_clones
0x00000000004005a0  register_tm_clones
0x00000000004005e0  __do_global_dtors_aux
0x0000000000400600  frame_dummy
0x000000000040062d  AddNumbers
0x0000000000400641  main
0x00000000004006b0  __libc_csu_init
0x0000000000400720  __libc_csu_fini
0x0000000000400724  _fini
```

### Assembly code for the main function

```bash
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000400641 <+0>:     push   %rbp
   0x0000000000400642 <+1>:     mov    %rsp,%rbp
   0x0000000000400645 <+4>:     sub    $0x10,%rsp
   0x0000000000400649 <+8>:     mov    $0x400734,%edi
   0x000000000040064e <+13>:    callq  0x4004e0 <puts@plt>
   0x0000000000400653 <+18>:    lea    -0x8(%rbp),%rdx
   0x0000000000400657 <+22>:    lea    -0xc(%rbp),%rax
   0x000000000040065b <+26>:    mov    %rax,%rsi
   0x000000000040065e <+29>:    mov    $0x400747,%edi
   0x0000000000400663 <+34>:    mov    $0x0,%eax
   0x0000000000400668 <+39>:    callq  0x400520 <__isoc99_scanf@plt>
   0x000000000040066d <+44>:    mov    -0x8(%rbp),%edx
   0x0000000000400670 <+47>:    mov    -0xc(%rbp),%eax
   0x0000000000400673 <+50>:    mov    %edx,%esi
   0x0000000000400675 <+52>:    mov    %eax,%edi
   0x0000000000400677 <+54>:    callq  0x40062d <AddNumbers>
   0x000000000040067c <+59>:    mov    %eax,-0x4(%rbp)
   0x000000000040067f <+62>:    mov    -0x8(%rbp),%edx
   0x0000000000400682 <+65>:    mov    -0xc(%rbp),%eax
   0x0000000000400685 <+68>:    mov    -0x4(%rbp),%ecx
   0x0000000000400688 <+71>:    mov    %eax,%esi
   0x000000000040068a <+73>:    mov    $0x40074d,%edi
   0x000000000040068f <+78>:    mov    $0x0,%eax
   0x0000000000400694 <+83>:    callq  0x4004f0 <printf@plt>
   0x0000000000400699 <+88>:    mov    $0x0,%edi
   0x000000000040069e <+93>:    callq  0x400530 <exit@plt>
End of assembler dump.
```

## Assembly code for the AddNumbers function

```bash
(gdb) disassemble AddNumbers
Dump of assembler code for function AddNumbers:
   0x000000000040062d <+0>:     push   %rbp
   0x000000000040062e <+1>:     mov    %rsp,%rbp
   0x0000000000400631 <+4>:     mov    %edi,-0x4(%rbp)
   0x0000000000400634 <+7>:     mov    %esi,-0x8(%rbp)
   0x0000000000400637 <+10>:    mov    -0x8(%rbp),%eax
   0x000000000040063a <+13>:    mov    -0x4(%rbp),%edx
   0x000000000040063d <+16>:    add    %edx,%eax
   0x000000000040063f <+18>:    pop    %rbp
   0x0000000000400640 <+19>:    retq
End of assembler dump.
```
