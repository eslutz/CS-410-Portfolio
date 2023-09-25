# Assignment 4.1

## GDB Commands

### Identify the functions in the binary file

```bash
(gdb) info functions
All defined functions:

Non-debugging symbols:
0x0000000000000000  main
0x00000000000000aa  __static_initialization_and_destruction_0(int, int)
0x00000000000000f3  _GLOBAL__sub_I_main
```

### Assembly code for the main function

```bash
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000000000 <+0>:     push   %rbp
   0x0000000000000001 <+1>:     mov    %rsp,%rbp
   0x0000000000000004 <+4>:     sub    $0x10,%rsp
   0x0000000000000008 <+8>:     movl   $0x1,-0x8(%rbp)
   0x000000000000000f <+15>:    cmpl   $0x9,-0x8(%rbp)
   0x0000000000000013 <+19>:    jg     0xa3 <main+163>
   0x0000000000000019 <+25>:    movl   $0x1,-0xc(%rbp)
   0x0000000000000020 <+32>:    cmpl   $0x9,-0xc(%rbp)
   0x0000000000000024 <+36>:    jg     0x9a <main+154>
   0x0000000000000026 <+38>:    mov    -0x8(%rbp),%eax
   0x0000000000000029 <+41>:    imul   -0xc(%rbp),%eax
   0x000000000000002d <+45>:    mov    %eax,-0x4(%rbp)
   0x0000000000000030 <+48>:    mov    -0x8(%rbp),%eax
   0x0000000000000033 <+51>:    mov    %eax,%esi
   0x0000000000000035 <+53>:    lea    0x0(%rip),%rdi        # 0x3c <main+60>
   0x000000000000003c <+60>:    callq  0x41 <main+65>
   0x0000000000000041 <+65>:    lea    0x0(%rip),%rsi        # 0x48 <main+72>
   0x0000000000000048 <+72>:    mov    %rax,%rdi
   0x000000000000004b <+75>:    callq  0x50 <main+80>
   0x0000000000000050 <+80>:    mov    %rax,%rdx
   0x0000000000000053 <+83>:    mov    -0xc(%rbp),%eax
   0x0000000000000056 <+86>:    mov    %eax,%esi
   0x0000000000000058 <+88>:    mov    %rdx,%rdi
   0x000000000000005b <+91>:    callq  0x60 <main+96>
   0x0000000000000060 <+96>:    lea    0x0(%rip),%rsi        # 0x67 <main+103>
   0x0000000000000067 <+103>:   mov    %rax,%rdi
   0x000000000000006a <+106>:   callq  0x6f <main+111>
   0x000000000000006f <+111>:   mov    %rax,%rdx
   0x0000000000000072 <+114>:   mov    -0x4(%rbp),%eax
   0x0000000000000075 <+117>:   mov    %eax,%esi
   0x0000000000000077 <+119>:   mov    %rdx,%rdi
   0x000000000000007a <+122>:   callq  0x7f <main+127>
   0x000000000000007f <+127>:   mov    %rax,%rdx
   0x0000000000000082 <+130>:   mov    0x0(%rip),%rax        # 0x89 <main+137>
   0x0000000000000089 <+137>:   mov    %rax,%rsi
   0x000000000000008c <+140>:   mov    %rdx,%rdi
   0x000000000000008f <+143>:   callq  0x94 <main+148>
   0x0000000000000094 <+148>:   addl   $0x1,-0xc(%rbp)
   0x0000000000000098 <+152>:   jmp    0x20 <main+32>
   0x000000000000009a <+154>:   addl   $0x1,-0x8(%rbp)
   0x000000000000009e <+158>:   jmpq   0xf <main+15>
   0x00000000000000a3 <+163>:   mov    $0x0,%eax
   0x00000000000000a8 <+168>:   leaveq
   0x00000000000000a9 <+169>:   retq
End of assembler dump.
```
