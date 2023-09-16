# Assignment 3.4

## Binary file to hex

[assignment3_4.o hex dump](assignment3_4_hex_dump.txt)

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
0x000000000040062d  PrintFact
0x0000000000400688  PrintSum
0x00000000004006df  DisplayMenu
0x0000000000400717  main
0x00000000004007c0  __libc_csu_init
0x0000000000400830  __libc_csu_fini
0x0000000000400834  _fini
```

### Assembly code for the main function

```bash
   0x0000000000400717 <+0>:     push   %rbp
   0x0000000000400718 <+1>:     mov    %rsp,%rbp
   0x000000000040071b <+4>:     sub    $0x10,%rsp
   0x000000000040071f <+8>:     movl   $0x0,-0x8(%rbp)
   0x0000000000400726 <+15>:    jmp    0x4007a0 <main+137>
   0x0000000000400728 <+17>:    mov    $0x0,%eax
   0x000000000040072d <+22>:    callq  0x4006df <DisplayMenu>
   0x0000000000400732 <+27>:    mov    $0x400886,%edi
   0x0000000000400737 <+32>:    callq  0x4004e0 <puts@plt>
   0x000000000040073c <+37>:    lea    -0x8(%rbp),%rax
   0x0000000000400740 <+41>:    mov    %rax,%rsi
   0x0000000000400743 <+44>:    mov    $0x400899,%edi
   0x0000000000400748 <+49>:    mov    $0x0,%eax
   0x000000000040074d <+54>:    callq  0x400520 <__isoc99_scanf@plt>
   0x0000000000400752 <+59>:    mov    -0x8(%rbp),%eax
   0x0000000000400755 <+62>:    cmp    $0x3,%eax
   0x0000000000400758 <+65>:    je     0x40077a <main+99>
   0x000000000040075a <+67>:    mov    $0x40089c,%edi
   0x000000000040075f <+72>:    callq  0x4004e0 <puts@plt>
   0x0000000000400764 <+77>:    lea    -0x4(%rbp),%rax
   0x0000000000400768 <+81>:    mov    %rax,%rsi
   0x000000000040076b <+84>:    mov    $0x400899,%edi
   0x0000000000400770 <+89>:    mov    $0x0,%eax
   0x0000000000400775 <+94>:    callq  0x400520 <__isoc99_scanf@plt>
   0x000000000040077a <+99>:    mov    -0x8(%rbp),%eax
   0x000000000040077d <+102>:   cmp    $0x1,%eax
   0x0000000000400780 <+105>:   jne    0x40078e <main+119>
   0x0000000000400782 <+107>:   mov    -0x4(%rbp),%eax
   0x0000000000400785 <+110>:   mov    %eax,%edi
   0x0000000000400787 <+112>:   callq  0x40062d <PrintFact>
   0x000000000040078c <+117>:   jmp    0x4007a0 <main+137>
   0x000000000040078e <+119>:   mov    -0x8(%rbp),%eax
   0x0000000000400791 <+122>:   cmp    $0x2,%eax
   0x0000000000400794 <+125>:   jne    0x4007a0 <main+137>
   0x0000000000400796 <+127>:   mov    -0x4(%rbp),%eax
   0x0000000000400799 <+130>:   mov    %eax,%edi
   0x000000000040079b <+132>:   callq  0x400688 <PrintSum>
   0x00000000004007a0 <+137>:   mov    -0x8(%rbp),%eax
   0x00000000004007a3 <+140>:   cmp    $0x3,%eax
   0x00000000004007a6 <+143>:   jne    0x400728 <main+17>
   0x00000000004007a8 <+145>:   mov    $0x0,%edi
   0x00000000004007ad <+150>:   callq  0x400530 <exit@plt>
```

## Assembly code for the DisplayMenu function

```bash
(gdb) disassemble DisplayMenu
Dump of assembler code for function DisplayMenu:
   0x00000000004006df <+0>:     push   %rbp
   0x00000000004006e0 <+1>:     mov    %rsp,%rbp
   0x00000000004006e3 <+4>:     mov    $0x400851,%edi
   0x00000000004006e8 <+9>:     callq  0x4004e0 <puts@plt>
   0x00000000004006ed <+14>:    mov    $0x400864,%edi
   0x00000000004006f2 <+19>:    callq  0x4004e0 <puts@plt>
   0x00000000004006f7 <+24>:    mov    $0x400871,%edi
   0x00000000004006fc <+29>:    callq  0x4004e0 <puts@plt>
   0x0000000000400701 <+34>:    mov    $0x40087e,%edi
   0x0000000000400706 <+39>:    callq  0x4004e0 <puts@plt>
   0x000000000040070b <+44>:    mov    $0x400851,%edi
   0x0000000000400710 <+49>:    callq  0x4004e0 <puts@plt>
   0x0000000000400715 <+54>:    pop    %rbp
   0x0000000000400716 <+55>:    retq
End of assembler dump.
```

## Assembly code for the PrintFact function

```bash
(gdb) disassemble PrintFact
Dump of assembler code for function PrintFact:
   0x000000000040062d <+0>:     push   %rbp
   0x000000000040062e <+1>:     mov    %rsp,%rbp
   0x0000000000400631 <+4>:     sub    $0x20,%rsp
   0x0000000000400635 <+8>:     mov    %edi,-0x14(%rbp)
   0x0000000000400638 <+11>:    movl   $0x1,-0x4(%rbp)
   0x000000000040063f <+18>:    mov    -0x14(%rbp),%eax
   0x0000000000400642 <+21>:    mov    %eax,-0x8(%rbp)
   0x0000000000400645 <+24>:    jmp    0x400669 <PrintFact+60>
   0x0000000000400647 <+26>:    mov    -0x4(%rbp),%eax
   0x000000000040064a <+29>:    imul   -0x8(%rbp),%eax
   0x000000000040064e <+33>:    mov    %eax,-0x4(%rbp)
   0x0000000000400651 <+36>:    mov    -0x8(%rbp),%eax
   0x0000000000400654 <+39>:    mov    %eax,%esi
   0x0000000000400656 <+41>:    mov    $0x400844,%edi
   0x000000000040065b <+46>:    mov    $0x0,%eax
   0x0000000000400660 <+51>:    callq  0x4004f0 <printf@plt>
   0x0000000000400665 <+56>:    subl   $0x1,-0x8(%rbp)
   0x0000000000400669 <+60>:    cmpl   $0x0,-0x8(%rbp)
   0x000000000040066d <+64>:    jg     0x400647 <PrintFact+26>
   0x000000000040066f <+66>:    mov    -0x4(%rbp),%eax
   0x0000000000400672 <+69>:    mov    %eax,%esi
   0x0000000000400674 <+71>:    mov    $0x400848,%edi
   0x0000000000400679 <+76>:    mov    $0x0,%eax
   0x000000000040067e <+81>:    callq  0x4004f0 <printf@plt>
   0x0000000000400683 <+86>:    mov    -0x4(%rbp),%eax
   0x0000000000400686 <+89>:    leaveq
   0x0000000000400687 <+90>:    retq
End of assembler dump.
```

## Assembly code for the PrintSum function

```bash
(gdb) disassemble PrintSum
Dump of assembler code for function PrintSum:
   0x0000000000400688 <+0>:     push   %rbp
   0x0000000000400689 <+1>:     mov    %rsp,%rbp
   0x000000000040068c <+4>:     sub    $0x20,%rsp
   0x0000000000400690 <+8>:     mov    %edi,-0x14(%rbp)
   0x0000000000400693 <+11>:    movl   $0x0,-0x4(%rbp)
   0x000000000040069a <+18>:    mov    -0x14(%rbp),%eax
   0x000000000040069d <+21>:    mov    %eax,-0x8(%rbp)
   0x00000000004006a0 <+24>:    jmp    0x4006c0 <PrintSum+56>
   0x00000000004006a2 <+26>:    mov    -0x8(%rbp),%eax
   0x00000000004006a5 <+29>:    add    %eax,-0x4(%rbp)
   0x00000000004006a8 <+32>:    mov    -0x8(%rbp),%eax
   0x00000000004006ab <+35>:    mov    %eax,%esi
   0x00000000004006ad <+37>:    mov    $0x400844,%edi
   0x00000000004006b2 <+42>:    mov    $0x0,%eax
   0x00000000004006b7 <+47>:    callq  0x4004f0 <printf@plt>
   0x00000000004006bc <+52>:    subl   $0x1,-0x8(%rbp)
   0x00000000004006c0 <+56>:    cmpl   $0x0,-0x8(%rbp)
   0x00000000004006c4 <+60>:    jg     0x4006a2 <PrintSum+26>
   0x00000000004006c6 <+62>:    mov    -0x4(%rbp),%eax
   0x00000000004006c9 <+65>:    mov    %eax,%esi
   0x00000000004006cb <+67>:    mov    $0x400848,%edi
   0x00000000004006d0 <+72>:    mov    $0x0,%eax
   0x00000000004006d5 <+77>:    callq  0x4004f0 <printf@plt>
   0x00000000004006da <+82>:    mov    -0x4(%rbp),%eax
   0x00000000004006dd <+85>:    leaveq
   0x00000000004006de <+86>:    retq
End of assembler dump.
```
