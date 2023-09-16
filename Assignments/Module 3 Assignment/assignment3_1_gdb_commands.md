# Assignment 3.1

## Binary file to hex

[assignment3_1.o hex dump](assignment3_1_hex_dump.txt)

## GDB Commands

### Identify the functions in the binary file

```bash
(gdb) info functions
All defined functions:

Non-debugging symbols:
0x0000000000400418  _init
0x0000000000400450  puts@plt
0x0000000000400460  __libc_start_main@plt
0x0000000000400470  __gmon_start__@plt
0x0000000000400480  exit@plt
0x0000000000400490  _start
0x00000000004004c0  deregister_tm_clones
0x00000000004004f0  register_tm_clones
0x0000000000400530  __do_global_dtors_aux
0x0000000000400550  frame_dummy
0x000000000040057d  main
0x00000000004005b0  __libc_csu_init
0x0000000000400620  __libc_csu_fini
0x0000000000400624  _fini
```

### Assembly code for the main function

```bash
(gdb) disassemble main
Dump of assembler code for function main:
   0x000000000040057d <+0>:     push   %rbp
   0x000000000040057e <+1>:     mov    %rsp,%rbp
   0x0000000000400581 <+4>:     mov    $0x400634,%edi
   0x0000000000400586 <+9>:     callq  0x400450 <puts@plt>
   0x000000000040058b <+14>:    mov    $0x400648,%edi
   0x0000000000400590 <+19>:    callq  0x400450 <puts@plt>
   0x0000000000400595 <+24>:    mov    $0x40065c,%edi
   0x000000000040059a <+29>:    callq  0x400450 <puts@plt>
   0x000000000040059f <+34>:    mov    $0x0,%edi
   0x00000000004005a4 <+39>:    callq  0x400480 <exit@plt>
End of assembler dump.
```
