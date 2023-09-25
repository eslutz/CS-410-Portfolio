# Assignment 4.4

## GDB Commands

### Identify the functions in the binary file

```bash
(gdb) info functions
All defined functions:

Non-debugging symbols:
0x0000000000000000  main
0x0000000000000147  __static_initialization_and_destruction_0(int, int)
0x0000000000000190  _GLOBAL__sub_I_main
```

### Assembly code for the main function

```bash
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000000000 <+0>:     push   %rbp
   0x0000000000000001 <+1>:     mov    %rsp,%rbp
   0x0000000000000004 <+4>:     sub    $0x30,%rsp
   0x0000000000000008 <+8>:     mov    %fs:0x28,%rax
   0x0000000000000011 <+17>:    mov    %rax,-0x8(%rbp)
   0x0000000000000015 <+21>:    xor    %eax,%eax
   0x0000000000000017 <+23>:    movq   $0x0,-0x20(%rbp)
   0x000000000000001f <+31>:    movq   $0x1,-0x18(%rbp)
   0x0000000000000027 <+39>:    lea    0x0(%rip),%rsi        # 0x2e <main+46>
   0x000000000000002e <+46>:    lea    0x0(%rip),%rdi        # 0x35 <main+53>
   0x0000000000000035 <+53>:    callq  0x3a <main+58>
   0x000000000000003a <+58>:    mov    %rax,%rdx
   0x000000000000003d <+61>:    mov    0x0(%rip),%rax        # 0x44 <main+68>
   0x0000000000000044 <+68>:    mov    %rax,%rsi
   0x0000000000000047 <+71>:    mov    %rdx,%rdi
   0x000000000000004a <+74>:    callq  0x4f <main+79>
   0x000000000000004f <+79>:    lea    -0x28(%rbp),%rax
   0x0000000000000053 <+83>:    mov    %rax,%rsi
   0x0000000000000056 <+86>:    lea    0x0(%rip),%rdi        # 0x5d <main+93>
   0x000000000000005d <+93>:    callq  0x62 <main+98>
   0x0000000000000062 <+98>:    mov    -0x28(%rbp),%rax
   0x0000000000000066 <+102>:   test   %rax,%rax
   0x0000000000000069 <+105>:   je     0xf2 <main+242>
   0x000000000000006f <+111>:   mov    -0x28(%rbp),%rcx
   0x0000000000000073 <+115>:   movabs $0x6666666666666667,%rdx
   0x000000000000007d <+125>:   mov    %rcx,%rax
   0x0000000000000080 <+128>:   imul   %rdx
   0x0000000000000083 <+131>:   sar    $0x2,%rdx
   0x0000000000000087 <+135>:   mov    %rcx,%rax
   0x000000000000008a <+138>:   sar    $0x3f,%rax
   0x000000000000008e <+142>:   sub    %rax,%rdx
   0x0000000000000091 <+145>:   mov    %rdx,%rax
   0x0000000000000094 <+148>:   mov    %rax,-0x10(%rbp)
   0x0000000000000098 <+152>:   mov    -0x10(%rbp),%rdx
   0x000000000000009c <+156>:   mov    %rdx,%rax
   0x000000000000009f <+159>:   shl    $0x2,%rax
   0x00000000000000a3 <+163>:   add    %rdx,%rax
   0x00000000000000a6 <+166>:   add    %rax,%rax
   0x00000000000000a9 <+169>:   sub    %rax,%rcx
   0x00000000000000ac <+172>:   mov    %rcx,%rax
   0x00000000000000af <+175>:   mov    %rax,-0x10(%rbp)
   0x00000000000000b3 <+179>:   mov    -0x10(%rbp),%rax
   0x00000000000000b7 <+183>:   imul   -0x18(%rbp),%rax
   0x00000000000000bc <+188>:   add    %rax,-0x20(%rbp)
   0x00000000000000c0 <+192>:   shlq   -0x18(%rbp)
   0x00000000000000c4 <+196>:   mov    -0x28(%rbp),%rcx
   0x00000000000000c8 <+200>:   movabs $0x6666666666666667,%rdx
   0x00000000000000d2 <+210>:   mov    %rcx,%rax
   0x00000000000000d5 <+213>:   imul   %rdx
   0x00000000000000d8 <+216>:   sar    $0x2,%rdx
   0x00000000000000dc <+220>:   mov    %rcx,%rax
   0x00000000000000df <+223>:   sar    $0x3f,%rax
   0x00000000000000e3 <+227>:   sub    %rax,%rdx
   0x00000000000000e6 <+230>:   mov    %rdx,%rax
   0x00000000000000e9 <+233>:   mov    %rax,-0x28(%rbp)
   0x00000000000000ed <+237>:   jmpq   0x62 <main+98>
   0x00000000000000f2 <+242>:   lea    0x0(%rip),%rsi        # 0xf9 <main+249>
   0x00000000000000f9 <+249>:   lea    0x0(%rip),%rdi        # 0x100 <main+256>
   0x0000000000000100 <+256>:   callq  0x105 <main+261>
   0x0000000000000105 <+261>:   mov    %rax,%rdx
   0x0000000000000108 <+264>:   mov    -0x20(%rbp),%rax
   0x000000000000010c <+268>:   mov    %rax,%rsi
   0x000000000000010f <+271>:   mov    %rdx,%rdi
   0x0000000000000112 <+274>:   callq  0x117 <main+279>
   0x0000000000000117 <+279>:   mov    %rax,%rdx
   0x000000000000011a <+282>:   mov    0x0(%rip),%rax        # 0x121 <main+289>
   0x0000000000000121 <+289>:   mov    %rax,%rsi
   0x0000000000000124 <+292>:   mov    %rdx,%rdi
   0x0000000000000127 <+295>:   callq  0x12c <main+300>
   0x000000000000012c <+300>:   mov    $0x0,%eax
   0x0000000000000131 <+305>:   mov    -0x8(%rbp),%rsi
   0x0000000000000135 <+309>:   xor    %fs:0x28,%rsi
   0x000000000000013e <+318>:   je     0x145 <main+325>
   0x0000000000000140 <+320>:   callq  0x145 <main+325>
   0x0000000000000145 <+325>:   leaveq
   0x0000000000000146 <+326>:   retq
End of assembler dump.
```
