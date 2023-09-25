# Assignment 4.3

## GDB Commands

### Identify the functions in the binary file

```bash
(gdb) info functions
All defined functions:

Non-debugging symbols:
0x0000000000000000  main
0x000000000000018c  __static_initialization_and_destruction_0(int, int)
0x00000000000001d5  _GLOBAL__sub_I_main
```

### Assembly code for the main function

```bash
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000000000 <+0>:     push   %rbp
   0x0000000000000001 <+1>:     mov    %rsp,%rbp
   0x0000000000000004 <+4>:     sub    $0x20,%rsp
   0x0000000000000008 <+8>:     mov    %fs:0x28,%rax
   0x0000000000000011 <+17>:    mov    %rax,-0x8(%rbp)
   0x0000000000000015 <+21>:    xor    %eax,%eax
   0x0000000000000017 <+23>:    movl   $0x1,-0xc(%rbp)
   0x000000000000001e <+30>:    lea    0x0(%rip),%rsi        # 0x25 <main+37>
   0x0000000000000025 <+37>:    lea    0x0(%rip),%rdi        # 0x2c <main+44>
   0x000000000000002c <+44>:    callq  0x31 <main+49>
   0x0000000000000031 <+49>:    mov    %rax,%rdx
   0x0000000000000034 <+52>:    mov    0x0(%rip),%rax        # 0x3b <main+59>
   0x000000000000003b <+59>:    mov    %rax,%rsi
   0x000000000000003e <+62>:    mov    %rdx,%rdi
   0x0000000000000041 <+65>:    callq  0x46 <main+70>
   0x0000000000000046 <+70>:    lea    -0x18(%rbp),%rax
   0x000000000000004a <+74>:    mov    %rax,%rsi
   0x000000000000004d <+77>:    lea    0x0(%rip),%rdi        # 0x54 <main+84>
   0x0000000000000054 <+84>:    callq  0x59 <main+89>
   0x0000000000000059 <+89>:    mov    -0x18(%rbp),%eax
   0x000000000000005c <+92>:    sub    $0x1,%eax
   0x000000000000005f <+95>:    mov    %eax,-0xc(%rbp)
   0x0000000000000062 <+98>:    movl   $0x1,-0x10(%rbp)
   0x0000000000000069 <+105>:   mov    -0x18(%rbp),%eax
   0x000000000000006c <+108>:   cmp    %eax,-0x10(%rbp)
   0x000000000000006f <+111>:   jg     0xe3 <main+227>
   0x0000000000000071 <+113>:   movl   $0x1,-0x14(%rbp)
   0x0000000000000078 <+120>:   mov    -0x14(%rbp),%eax
   0x000000000000007b <+123>:   cmp    -0xc(%rbp),%eax
   0x000000000000007e <+126>:   jg     0x99 <main+153>
   0x0000000000000080 <+128>:   lea    0x0(%rip),%rsi        # 0x87 <main+135>
   0x0000000000000087 <+135>:   lea    0x0(%rip),%rdi        # 0x8e <main+142>
   0x000000000000008e <+142>:   callq  0x93 <main+147>
   0x0000000000000093 <+147>:   addl   $0x1,-0x14(%rbp)
   0x0000000000000097 <+151>:   jmp    0x78 <main+120>
   0x0000000000000099 <+153>:   subl   $0x1,-0xc(%rbp)
   0x000000000000009d <+157>:   movl   $0x1,-0x14(%rbp)
   0x00000000000000a4 <+164>:   mov    -0x10(%rbp),%eax
   0x00000000000000a7 <+167>:   add    %eax,%eax
   0x00000000000000a9 <+169>:   sub    $0x1,%eax
   0x00000000000000ac <+172>:   cmp    %eax,-0x14(%rbp)
   0x00000000000000af <+175>:   jg     0xca <main+202>
   0x00000000000000b1 <+177>:   lea    0x0(%rip),%rsi        # 0xb8 <main+184>
   0x00000000000000b8 <+184>:   lea    0x0(%rip),%rdi        # 0xbf <main+191>
   0x00000000000000bf <+191>:   callq  0xc4 <main+196>
   0x00000000000000c4 <+196>:   addl   $0x1,-0x14(%rbp)
   0x00000000000000c8 <+200>:   jmp    0xa4 <main+164>
   0x00000000000000ca <+202>:   lea    0x0(%rip),%rsi        # 0xd1 <main+209>
   0x00000000000000d1 <+209>:   lea    0x0(%rip),%rdi        # 0xd8 <main+216>
   0x00000000000000d8 <+216>:   callq  0xdd <main+221>
   0x00000000000000dd <+221>:   addl   $0x1,-0x10(%rbp)
   0x00000000000000e1 <+225>:   jmp    0x69 <main+105>
   0x00000000000000e3 <+227>:   movl   $0x1,-0xc(%rbp)
   0x00000000000000ea <+234>:   movl   $0x1,-0x10(%rbp)
   0x00000000000000f1 <+241>:   mov    -0x18(%rbp),%eax
   0x00000000000000f4 <+244>:   sub    $0x1,%eax
   0x00000000000000f7 <+247>:   cmp    %eax,-0x10(%rbp)
   0x00000000000000fa <+250>:   jg     0x171 <main+369>
   0x00000000000000fc <+252>:   movl   $0x1,-0x14(%rbp)
   0x0000000000000103 <+259>:   mov    -0x14(%rbp),%eax
   0x0000000000000106 <+262>:   cmp    -0xc(%rbp),%eax
   0x0000000000000109 <+265>:   jg     0x124 <main+292>
   0x000000000000010b <+267>:   lea    0x0(%rip),%rsi        # 0x112 <main+274>
   0x0000000000000112 <+274>:   lea    0x0(%rip),%rdi        # 0x119 <main+281>
   0x0000000000000119 <+281>:   callq  0x11e <main+286>
   0x000000000000011e <+286>:   addl   $0x1,-0x14(%rbp)
   0x0000000000000122 <+290>:   jmp    0x103 <main+259>
   0x0000000000000124 <+292>:   addl   $0x1,-0xc(%rbp)
   0x0000000000000128 <+296>:   movl   $0x1,-0x14(%rbp)
   0x000000000000012f <+303>:   mov    -0x18(%rbp),%eax
   0x0000000000000132 <+306>:   sub    -0x10(%rbp),%eax
   0x0000000000000135 <+309>:   add    %eax,%eax
   0x0000000000000137 <+311>:   sub    $0x1,%eax
   0x000000000000013a <+314>:   cmp    %eax,-0x14(%rbp)
   0x000000000000013d <+317>:   jg     0x158 <main+344>
   0x000000000000013f <+319>:   lea    0x0(%rip),%rsi        # 0x146 <main+326>
   0x0000000000000146 <+326>:   lea    0x0(%rip),%rdi        # 0x14d <main+333>
   0x000000000000014d <+333>:   callq  0x152 <main+338>
   0x0000000000000152 <+338>:   addl   $0x1,-0x14(%rbp)
   0x0000000000000156 <+342>:   jmp    0x12f <main+303>
   0x0000000000000158 <+344>:   lea    0x0(%rip),%rsi        # 0x15f <main+351>
   0x000000000000015f <+351>:   lea    0x0(%rip),%rdi        # 0x166 <main+358>
   0x0000000000000166 <+358>:   callq  0x16b <main+363>
   0x000000000000016b <+363>:   addl   $0x1,-0x10(%rbp)
   0x000000000000016f <+367>:   jmp    0xf1 <main+241>
   0x0000000000000171 <+369>:   mov    $0x1,%eax
   0x0000000000000176 <+374>:   mov    -0x8(%rbp),%rcx
   0x000000000000017a <+378>:   xor    %fs:0x28,%rcx
   0x0000000000000183 <+387>:   je     0x18a <main+394>
   0x0000000000000185 <+389>:   callq  0x18a <main+394>
   0x000000000000018a <+394>:   leaveq
   0x000000000000018b <+395>:   retq
End of assembler dump.
```
