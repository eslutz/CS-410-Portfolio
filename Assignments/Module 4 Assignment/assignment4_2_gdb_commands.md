# Assignment 4.2

## GDB Commands

### Identify the functions in the binary file

```bash
(gdb) info functions
All defined functions:

Non-debugging symbols:
0x0000000000000000  main
0x00000000000000c2  __static_initialization_and_destruction_0(int, int)
0x000000000000010b  _GLOBAL__sub_I_main
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
   0x0000000000000017 <+23>:    lea    0x0(%rip),%rsi        # 0x1e <main+30>
   0x000000000000001e <+30>:    lea    0x0(%rip),%rdi        # 0x25 <main+37>
   0x0000000000000025 <+37>:    callq  0x2a <main+42>
   0x000000000000002a <+42>:    mov    %rax,%rdx
   0x000000000000002d <+45>:    mov    0x0(%rip),%rax        # 0x34 <main+52>
   0x0000000000000034 <+52>:    mov    %rax,%rsi
   0x0000000000000037 <+55>:    mov    %rdx,%rdi
   0x000000000000003a <+58>:    callq  0x3f <main+63>
   0x000000000000003f <+63>:    lea    -0x14(%rbp),%rax
   0x0000000000000043 <+67>:    mov    %rax,%rsi
   0x0000000000000046 <+70>:    lea    0x0(%rip),%rdi        # 0x4d <main+77>
   0x000000000000004d <+77>:    callq  0x52 <main+82>
   0x0000000000000052 <+82>:    mov    -0x14(%rbp),%edx
   0x0000000000000055 <+85>:    mov    -0x14(%rbp),%eax
   0x0000000000000058 <+88>:    imul   %eax,%edx
   0x000000000000005b <+91>:    mov    -0x14(%rbp),%eax
   0x000000000000005e <+94>:    imul   %edx,%eax
   0x0000000000000061 <+97>:    mov    %eax,-0x14(%rbp)
   0x0000000000000064 <+100>:   mov    -0x14(%rbp),%eax
   0x0000000000000067 <+103>:   cvtsi2sd %eax,%xmm0
   0x000000000000006b <+107>:   movsd  0x0(%rip),%xmm1        # 0x73 <main+115>
   0x0000000000000073 <+115>:   mulsd  %xmm1,%xmm0
   0x0000000000000077 <+119>:   movsd  %xmm0,-0x10(%rbp)
   0x000000000000007c <+124>:   lea    0x0(%rip),%rsi        # 0x83 <main+131>
   0x0000000000000083 <+131>:   lea    0x0(%rip),%rdi        # 0x8a <main+138>
   0x000000000000008a <+138>:   callq  0x8f <main+143>
   0x000000000000008f <+143>:   mov    %rax,%rdx
   0x0000000000000092 <+146>:   mov    -0x10(%rbp),%rax
   0x0000000000000096 <+150>:   mov    %rax,-0x28(%rbp)
   0x000000000000009a <+154>:   movsd  -0x28(%rbp),%xmm0
   0x000000000000009f <+159>:   mov    %rdx,%rdi
   0x00000000000000a2 <+162>:   callq  0xa7 <main+167>
   0x00000000000000a7 <+167>:   mov    $0x0,%eax
   0x00000000000000ac <+172>:   mov    -0x8(%rbp),%rcx
   0x00000000000000b0 <+176>:   xor    %fs:0x28,%rcx
   0x00000000000000b9 <+185>:   je     0xc0 <main+192>
   0x00000000000000bb <+187>:   callq  0xc0 <main+192>
   0x00000000000000c0 <+192>:   leaveq
   0x00000000000000c1 <+193>:   retq
End of assembler dump.
```
