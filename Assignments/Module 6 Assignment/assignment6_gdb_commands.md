# Assignment 6

## GDB Commands

### Identify the functions in the binary file

```bash
(gdb) info functions
All defined functions:

Non-debugging symbols:
0x0000000000000000  DisplayMenu()
0x0000000000000079  main
0x0000000000000323  __static_initialization_and_destruction_0(int, int)
0x000000000000036c  _GLOBAL__sub_I__Z11DisplayMenuv
```

### Assembly code for the main function

```bash
(gdb) disassemble main
Dump of assembler code for function main:
   0x0000000000000079 <+0>:     push   %rbp
   0x000000000000007a <+1>:     mov    %rsp,%rbp
   0x000000000000007d <+4>:     sub    $0x20,%rsp
   0x0000000000000081 <+8>:     mov    %fs:0x28,%rax
   0x000000000000008a <+17>:    mov    %rax,-0x8(%rbp)
   0x000000000000008e <+21>:    xor    %eax,%eax
   0x0000000000000090 <+23>:    movl   $0x0,-0x14(%rbp)
   0x0000000000000097 <+30>:    mov    -0x14(%rbp),%eax
   0x000000000000009a <+33>:    cmp    $0x5,%eax
   0x000000000000009d <+36>:    je     0x308 <main+655>
   0x00000000000000a3 <+42>:    lea    0x0(%rip),%rsi        # 0xaa <main+49>
   0x00000000000000aa <+49>:    lea    0x0(%rip),%rdi        # 0xb1 <main+56>
   0x00000000000000b1 <+56>:    callq  0xb6 <main+61>
   0x00000000000000b6 <+61>:    lea    0x0(%rip),%rsi        # 0xbd <main+68>
   0x00000000000000bd <+68>:    lea    0x0(%rip),%rdi        # 0xc4 <main+75>
   0x00000000000000c4 <+75>:    callq  0xc9 <main+80>
   0x00000000000000c9 <+80>:    lea    0x0(%rip),%rsi        # 0xd0 <main+87>
   0x00000000000000d0 <+87>:    lea    0x0(%rip),%rdi        # 0xd7 <main+94>
   0x00000000000000d7 <+94>:    callq  0xdc <main+99>
   0x00000000000000dc <+99>:    lea    0x0(%rip),%rsi        # 0xe3 <main+106>
   0x00000000000000e3 <+106>:   lea    0x0(%rip),%rdi        # 0xea <main+113>
   0x00000000000000ea <+113>:   callq  0xef <main+118>
   0x00000000000000ef <+118>:   lea    0x0(%rip),%rsi        # 0xf6 <main+125>
   0x00000000000000f6 <+125>:   lea    0x0(%rip),%rdi        # 0xfd <main+132>
   0x00000000000000fd <+132>:   callq  0x102 <main+137>
   0x0000000000000102 <+137>:   lea    0x0(%rip),%rsi        # 0x109 <main+144>
   0x0000000000000109 <+144>:   lea    0x0(%rip),%rdi        # 0x110 <main+151>
   0x0000000000000110 <+151>:   callq  0x115 <main+156>
   0x0000000000000115 <+156>:   lea    -0x14(%rbp),%rax
   0x0000000000000119 <+160>:   mov    %rax,%rsi
   0x000000000000011c <+163>:   lea    0x0(%rip),%rdi        # 0x123 <main+170>
   0x0000000000000123 <+170>:   callq  0x128 <main+175>
   0x0000000000000128 <+175>:   mov    -0x14(%rbp),%eax
   0x000000000000012b <+178>:   cmp    $0x1,%eax
   0x000000000000012e <+181>:   jne    0x1c9 <main+336>
   0x0000000000000134 <+187>:   lea    -0x10(%rbp),%rax
   0x0000000000000138 <+191>:   mov    %rax,%rsi
   0x000000000000013b <+194>:   lea    0x0(%rip),%rdi        # 0x142 <main+201>
   0x0000000000000142 <+201>:   callq  0x147 <main+206>
   0x0000000000000147 <+206>:   mov    %rax,%rdx
   0x000000000000014a <+209>:   lea    -0xc(%rbp),%rax
   0x000000000000014e <+213>:   mov    %rax,%rsi
   0x0000000000000151 <+216>:   mov    %rdx,%rdi
   0x0000000000000154 <+219>:   callq  0x159 <main+224>
   0x0000000000000159 <+224>:   mov    -0x10(%rbp),%eax
   0x000000000000015c <+227>:   mov    %eax,%esi
   0x000000000000015e <+229>:   lea    0x0(%rip),%rdi        # 0x165 <main+236>
   0x0000000000000165 <+236>:   callq  0x16a <main+241>
   0x000000000000016a <+241>:   lea    0x0(%rip),%rsi        # 0x171 <main+248>
   0x0000000000000171 <+248>:   mov    %rax,%rdi
   0x0000000000000174 <+251>:   callq  0x179 <main+256>
   0x0000000000000179 <+256>:   mov    %rax,%rdx
   0x000000000000017c <+259>:   mov    -0xc(%rbp),%eax
   0x000000000000017f <+262>:   mov    %eax,%esi
   0x0000000000000181 <+264>:   mov    %rdx,%rdi
   0x0000000000000184 <+267>:   callq  0x189 <main+272>
   0x0000000000000189 <+272>:   lea    0x0(%rip),%rsi        # 0x190 <main+279>
   0x0000000000000190 <+279>:   mov    %rax,%rdi
   0x0000000000000193 <+282>:   callq  0x198 <main+287>
   0x0000000000000198 <+287>:   mov    %rax,%rcx
   0x000000000000019b <+290>:   mov    -0x10(%rbp),%edx
   0x000000000000019e <+293>:   mov    -0xc(%rbp),%eax
   0x00000000000001a1 <+296>:   sub    %eax,%edx
   0x00000000000001a3 <+298>:   mov    %edx,%eax
   0x00000000000001a5 <+300>:   mov    %eax,%esi
   0x00000000000001a7 <+302>:   mov    %rcx,%rdi
   0x00000000000001aa <+305>:   callq  0x1af <main+310>
   0x00000000000001af <+310>:   mov    %rax,%rdx
   0x00000000000001b2 <+313>:   mov    0x0(%rip),%rax        # 0x1b9 <main+320>
   0x00000000000001b9 <+320>:   mov    %rax,%rsi
   0x00000000000001bc <+323>:   mov    %rdx,%rdi
   0x00000000000001bf <+326>:   callq  0x1c4 <main+331>
   0x00000000000001c4 <+331>:   jmpq   0x97 <main+30>
   0x00000000000001c9 <+336>:   mov    -0x14(%rbp),%eax
   0x00000000000001cc <+339>:   cmp    $0x2,%eax
   0x00000000000001cf <+342>:   jne    0x268 <main+495>
   0x00000000000001d5 <+348>:   lea    -0x10(%rbp),%rax
   0x00000000000001d9 <+352>:   mov    %rax,%rsi
   0x00000000000001dc <+355>:   lea    0x0(%rip),%rdi        # 0x1e3 <main+362>
   0x00000000000001e3 <+362>:   callq  0x1e8 <main+367>
   0x00000000000001e8 <+367>:   mov    %rax,%rdx
   0x00000000000001eb <+370>:   lea    -0xc(%rbp),%rax
   0x00000000000001ef <+374>:   mov    %rax,%rsi
   0x00000000000001f2 <+377>:   mov    %rdx,%rdi
   0x00000000000001f5 <+380>:   callq  0x1fa <main+385>
   0x00000000000001fa <+385>:   mov    -0x10(%rbp),%eax
   0x00000000000001fd <+388>:   mov    %eax,%esi
   0x00000000000001ff <+390>:   lea    0x0(%rip),%rdi        # 0x206 <main+397>
   0x0000000000000206 <+397>:   callq  0x20b <main+402>
   0x000000000000020b <+402>:   lea    0x0(%rip),%rsi        # 0x212 <main+409>
   0x0000000000000212 <+409>:   mov    %rax,%rdi
   0x0000000000000215 <+412>:   callq  0x21a <main+417>
   0x000000000000021a <+417>:   mov    %rax,%rdx
   0x000000000000021d <+420>:   mov    -0xc(%rbp),%eax
   0x0000000000000220 <+423>:   mov    %eax,%esi
   0x0000000000000222 <+425>:   mov    %rdx,%rdi
   0x0000000000000225 <+428>:   callq  0x22a <main+433>
   0x000000000000022a <+433>:   lea    0x0(%rip),%rsi        # 0x231 <main+440>
   0x0000000000000231 <+440>:   mov    %rax,%rdi
   0x0000000000000234 <+443>:   callq  0x239 <main+448>
   0x0000000000000239 <+448>:   mov    %rax,%rcx
   0x000000000000023c <+451>:   mov    -0x10(%rbp),%edx
   0x000000000000023f <+454>:   mov    -0xc(%rbp),%eax
   0x0000000000000242 <+457>:   add    %edx,%eax
   0x0000000000000244 <+459>:   mov    %eax,%esi
   0x0000000000000246 <+461>:   mov    %rcx,%rdi
   0x0000000000000249 <+464>:   callq  0x24e <main+469>
   0x000000000000024e <+469>:   mov    %rax,%rdx
   0x0000000000000251 <+472>:   mov    0x0(%rip),%rax        # 0x258 <main+479>
   0x0000000000000258 <+479>:   mov    %rax,%rsi
   0x000000000000025b <+482>:   mov    %rdx,%rdi
   0x000000000000025e <+485>:   callq  0x263 <main+490>
   0x0000000000000263 <+490>:   jmpq   0x97 <main+30>
   0x0000000000000268 <+495>:   mov    -0x14(%rbp),%eax
   0x000000000000026b <+498>:   cmp    $0x3,%eax
   0x000000000000026e <+501>:   jne    0x97 <main+30>
   0x0000000000000274 <+507>:   lea    -0x10(%rbp),%rax
   0x0000000000000278 <+511>:   mov    %rax,%rsi
   0x000000000000027b <+514>:   lea    0x0(%rip),%rdi        # 0x282 <main+521>
   0x0000000000000282 <+521>:   callq  0x287 <main+526>
   0x0000000000000287 <+526>:   mov    %rax,%rdx
   0x000000000000028a <+529>:   lea    -0xc(%rbp),%rax
   0x000000000000028e <+533>:   mov    %rax,%rsi
   0x0000000000000291 <+536>:   mov    %rdx,%rdi
   0x0000000000000294 <+539>:   callq  0x299 <main+544>
   0x0000000000000299 <+544>:   mov    -0x10(%rbp),%eax
   0x000000000000029c <+547>:   mov    %eax,%esi
   0x000000000000029e <+549>:   lea    0x0(%rip),%rdi        # 0x2a5 <main+556>
   0x00000000000002a5 <+556>:   callq  0x2aa <main+561>
   0x00000000000002aa <+561>:   lea    0x0(%rip),%rsi        # 0x2b1 <main+568>
   0x00000000000002b1 <+568>:   mov    %rax,%rdi
   0x00000000000002b4 <+571>:   callq  0x2b9 <main+576>
   0x00000000000002b9 <+576>:   mov    %rax,%rdx
   0x00000000000002bc <+579>:   mov    -0xc(%rbp),%eax
   0x00000000000002bf <+582>:   mov    %eax,%esi
   0x00000000000002c1 <+584>:   mov    %rdx,%rdi
   0x00000000000002c4 <+587>:   callq  0x2c9 <main+592>
   0x00000000000002c9 <+592>:   lea    0x0(%rip),%rsi        # 0x2d0 <main+599>
   0x00000000000002d0 <+599>:   mov    %rax,%rdi
   0x00000000000002d3 <+602>:   callq  0x2d8 <main+607>
   0x00000000000002d8 <+607>:   mov    %rax,%rcx
   0x00000000000002db <+610>:   mov    -0x10(%rbp),%eax
   0x00000000000002de <+613>:   mov    -0xc(%rbp),%esi
   0x00000000000002e1 <+616>:   cltd
   0x00000000000002e2 <+617>:   idiv   %esi
   0x00000000000002e4 <+619>:   mov    %eax,%esi
   0x00000000000002e6 <+621>:   mov    %rcx,%rdi
   0x00000000000002e9 <+624>:   callq  0x2ee <main+629>
   0x00000000000002ee <+629>:   mov    %rax,%rdx
   0x00000000000002f1 <+632>:   mov    0x0(%rip),%rax        # 0x2f8 <main+639>
   0x00000000000002f8 <+639>:   mov    %rax,%rsi
   0x00000000000002fb <+642>:   mov    %rdx,%rdi
   0x00000000000002fe <+645>:   callq  0x303 <main+650>
   0x0000000000000303 <+650>:   jmpq   0x97 <main+30>
   0x0000000000000308 <+655>:   mov    $0x0,%eax
   0x000000000000030d <+660>:   mov    -0x8(%rbp),%rcx
   0x0000000000000311 <+664>:   xor    %fs:0x28,%rcx
   0x000000000000031a <+673>:   je     0x321 <main+680>
   0x000000000000031c <+675>:   callq  0x321 <main+680>
   0x0000000000000321 <+680>:   leaveq
   0x0000000000000322 <+681>:   retq
---Type <return> to continue, or q <return> to quit---
End of assembler dump.
```

### Assembly code for the DisplayMenu function

```bash
(gdb) disassemble DisplayMenu
Dump of assembler code for function _Z11DisplayMenuv:
   0x0000000000000000 <+0>:     push   %rbp
   0x0000000000000001 <+1>:     mov    %rsp,%rbp
   0x0000000000000004 <+4>:     lea    0x0(%rip),%rsi        # 0xb <_Z11DisplayMenuv+11>
   0x000000000000000b <+11>:    lea    0x0(%rip),%rdi        # 0x12 <_Z11DisplayMenuv+18>
   0x0000000000000012 <+18>:    callq  0x17 <_Z11DisplayMenuv+23>
   0x0000000000000017 <+23>:    lea    0x0(%rip),%rsi        # 0x1e <_Z11DisplayMenuv+30>
   0x000000000000001e <+30>:    lea    0x0(%rip),%rdi        # 0x25 <_Z11DisplayMenuv+37>
   0x0000000000000025 <+37>:    callq  0x2a <_Z11DisplayMenuv+42>
   0x000000000000002a <+42>:    lea    0x0(%rip),%rsi        # 0x31 <_Z11DisplayMenuv+49>
   0x0000000000000031 <+49>:    lea    0x0(%rip),%rdi        # 0x38 <_Z11DisplayMenuv+56>
   0x0000000000000038 <+56>:    callq  0x3d <_Z11DisplayMenuv+61>
   0x000000000000003d <+61>:    lea    0x0(%rip),%rsi        # 0x44 <_Z11DisplayMenuv+68>
   0x0000000000000044 <+68>:    lea    0x0(%rip),%rdi        # 0x4b <_Z11DisplayMenuv+75>
   0x000000000000004b <+75>:    callq  0x50 <_Z11DisplayMenuv+80>
   0x0000000000000050 <+80>:    lea    0x0(%rip),%rsi        # 0x57 <_Z11DisplayMenuv+87>
   0x0000000000000057 <+87>:    lea    0x0(%rip),%rdi        # 0x5e <_Z11DisplayMenuv+94>
   0x000000000000005e <+94>:    callq  0x63 <_Z11DisplayMenuv+99>
   0x0000000000000063 <+99>:    lea    0x0(%rip),%rsi        # 0x6a <_Z11DisplayMenuv+106>
   0x000000000000006a <+106>:   lea    0x0(%rip),%rdi        # 0x71 <_Z11DisplayMenuv+113>
   0x0000000000000071 <+113>:   callq  0x76 <_Z11DisplayMenuv+118>
   0x0000000000000076 <+118>:   nop
   0x0000000000000077 <+119>:   pop    %rbp
   0x0000000000000078 <+120>:   retq
End of assembler dump.
```

## Hexdump of the binary file

```text
> hexdump -C assignment6_1.o
00000000  7f 45 4c 46 02 01 01 00  00 00 00 00 00 00 00 00  |.ELF............|
00000010  01 00 3e 00 01 00 00 00  00 00 00 00 00 00 00 00  |..>.............|
00000020  00 00 00 00 00 00 00 00  60 12 00 00 00 00 00 00  |........`.......|
00000030  00 00 00 00 40 00 00 00  00 00 40 00 0f 00 0e 00  |....@.....@.....|
00000040  55 48 89 e5 48 8d 35 00  00 00 00 48 8d 3d 00 00  |UH..H.5....H.=..|
00000050  00 00 e8 00 00 00 00 48  8d 35 00 00 00 00 48 8d  |.......H.5....H.|
00000060  3d 00 00 00 00 e8 00 00  00 00 48 8d 35 00 00 00  |=.........H.5...|
00000070  00 48 8d 3d 00 00 00 00  e8 00 00 00 00 48 8d 35  |.H.=.........H.5|
00000080  00 00 00 00 48 8d 3d 00  00 00 00 e8 00 00 00 00  |....H.=.........|
00000090  48 8d 35 00 00 00 00 48  8d 3d 00 00 00 00 e8 00  |H.5....H.=......|
000000a0  00 00 00 48 8d 35 00 00  00 00 48 8d 3d 00 00 00  |...H.5....H.=...|
000000b0  00 e8 00 00 00 00 90 5d  c3 55 48 89 e5 48 83 ec  |.......].UH..H..|
000000c0  20 64 48 8b 04 25 28 00  00 00 48 89 45 f8 31 c0  | dH..%(...H.E.1.|
000000d0  c7 45 ec 00 00 00 00 8b  45 ec 83 f8 05 0f 84 65  |.E......E......e|
000000e0  02 00 00 48 8d 35 00 00  00 00 48 8d 3d 00 00 00  |...H.5....H.=...|
000000f0  00 e8 00 00 00 00 48 8d  35 00 00 00 00 48 8d 3d  |......H.5....H.=|
00000100  00 00 00 00 e8 00 00 00  00 48 8d 35 00 00 00 00  |.........H.5....|
00000110  48 8d 3d 00 00 00 00 e8  00 00 00 00 48 8d 35 00  |H.=.........H.5.|
00000120  00 00 00 48 8d 3d 00 00  00 00 e8 00 00 00 00 48  |...H.=.........H|
00000130  8d 35 00 00 00 00 48 8d  3d 00 00 00 00 e8 00 00  |.5....H.=.......|
00000140  00 00 48 8d 35 00 00 00  00 48 8d 3d 00 00 00 00  |..H.5....H.=....|
00000150  e8 00 00 00 00 48 8d 45  ec 48 89 c6 48 8d 3d 00  |.....H.E.H..H.=.|
00000160  00 00 00 e8 00 00 00 00  8b 45 ec 83 f8 01 0f 85  |.........E......|
00000170  95 00 00 00 48 8d 45 f0  48 89 c6 48 8d 3d 00 00  |....H.E.H..H.=..|
00000180  00 00 e8 00 00 00 00 48  89 c2 48 8d 45 f4 48 89  |.......H..H.E.H.|
00000190  c6 48 89 d7 e8 00 00 00  00 8b 45 f0 89 c6 48 8d  |.H........E...H.|
000001a0  3d 00 00 00 00 e8 00 00  00 00 48 8d 35 00 00 00  |=.........H.5...|
000001b0  00 48 89 c7 e8 00 00 00  00 48 89 c2 8b 45 f4 89  |.H.......H...E..|
000001c0  c6 48 89 d7 e8 00 00 00  00 48 8d 35 00 00 00 00  |.H.......H.5....|
000001d0  48 89 c7 e8 00 00 00 00  48 89 c1 8b 55 f0 8b 45  |H.......H...U..E|
000001e0  f4 29 c2 89 d0 89 c6 48  89 cf e8 00 00 00 00 48  |.).....H.......H|
000001f0  89 c2 48 8b 05 00 00 00  00 48 89 c6 48 89 d7 e8  |..H......H..H...|
00000200  00 00 00 00 e9 ce fe ff  ff 8b 45 ec 83 f8 02 0f  |..........E.....|
00000210  85 93 00 00 00 48 8d 45  f0 48 89 c6 48 8d 3d 00  |.....H.E.H..H.=.|
00000220  00 00 00 e8 00 00 00 00  48 89 c2 48 8d 45 f4 48  |........H..H.E.H|
00000230  89 c6 48 89 d7 e8 00 00  00 00 8b 45 f0 89 c6 48  |..H........E...H|
00000240  8d 3d 00 00 00 00 e8 00  00 00 00 48 8d 35 00 00  |.=.........H.5..|
00000250  00 00 48 89 c7 e8 00 00  00 00 48 89 c2 8b 45 f4  |..H.......H...E.|
00000260  89 c6 48 89 d7 e8 00 00  00 00 48 8d 35 00 00 00  |..H.......H.5...|
00000270  00 48 89 c7 e8 00 00 00  00 48 89 c1 8b 55 f0 8b  |.H.......H...U..|
00000280  45 f4 01 d0 89 c6 48 89  cf e8 00 00 00 00 48 89  |E.....H.......H.|
00000290  c2 48 8b 05 00 00 00 00  48 89 c6 48 89 d7 e8 00  |.H......H..H....|
000002a0  00 00 00 e9 2f fe ff ff  8b 45 ec 83 f8 03 0f 85  |..../....E......|
000002b0  23 fe ff ff 48 8d 45 f0  48 89 c6 48 8d 3d 00 00  |#...H.E.H..H.=..|
000002c0  00 00 e8 00 00 00 00 48  89 c2 48 8d 45 f4 48 89  |.......H..H.E.H.|
000002d0  c6 48 89 d7 e8 00 00 00  00 8b 45 f0 89 c6 48 8d  |.H........E...H.|
000002e0  3d 00 00 00 00 e8 00 00  00 00 48 8d 35 00 00 00  |=.........H.5...|
000002f0  00 48 89 c7 e8 00 00 00  00 48 89 c2 8b 45 f4 89  |.H.......H...E..|
00000300  c6 48 89 d7 e8 00 00 00  00 48 8d 35 00 00 00 00  |.H.......H.5....|
00000310  48 89 c7 e8 00 00 00 00  48 89 c1 8b 45 f0 8b 75  |H.......H...E..u|
00000320  f4 99 f7 fe 89 c6 48 89  cf e8 00 00 00 00 48 89  |......H.......H.|
00000330  c2 48 8b 05 00 00 00 00  48 89 c6 48 89 d7 e8 00  |.H......H..H....|
00000340  00 00 00 e9 8f fd ff ff  b8 00 00 00 00 48 8b 4d  |.............H.M|
00000350  f8 64 48 33 0c 25 28 00  00 00 74 05 e8 00 00 00  |.dH3.%(...t.....|
00000360  00 c9 c3 55 48 89 e5 48  83 ec 10 89 7d fc 89 75  |...UH..H....}..u|
00000370  f8 83 7d fc 01 75 32 81  7d f8 ff ff 00 00 75 29  |..}..u2.}.....u)|
00000380  48 8d 3d 00 00 00 00 e8  00 00 00 00 48 8d 15 00  |H.=.........H...|
00000390  00 00 00 48 8d 35 00 00  00 00 48 8b 05 00 00 00  |...H.5....H.....|
000003a0  00 48 89 c7 e8 00 00 00  00 90 c9 c3 55 48 89 e5  |.H..........UH..|
000003b0  be ff ff 00 00 bf 01 00  00 00 e8 a4 ff ff ff 5d  |...............]|
000003c0  c3 00 2d 2d 2d 2d 2d 2d  2d 2d 2d 2d 2d 2d 2d 2d  |..--------------|
000003d0  2d 2d 00 2d 20 31 29 41  64 64 20 2d 00 2d 20 32  |--.- 1)Add -.- 2|
000003e0  29 53 75 62 74 72 61 63  74 20 2d 00 2d 20 33 29  |)Subtract -.- 3)|
000003f0  4d 75 6c 74 69 70 6c 79  20 2d 00 2d 20 34 29 45  |Multiply -.- 4)E|
00000400  78 69 74 20 2d 00 2d 2d  2d 2d 2d 2d 2d 2d 2d 2d  |xit -.----------|
00000410  2d 2d 2d 2d 2d 2d 0a 00  2d 20 31 29 41 64 64 20  |------..- 1)Add |
00000420  2d 0a 00 2d 20 32 29 53  75 62 74 72 61 63 74 20  |-..- 2)Subtract |
00000430  2d 0a 00 2d 20 33 29 4d  75 6c 74 69 70 6c 79 20  |-..- 3)Multiply |
00000440  2d 0a 00 2d 20 34 29 45  78 69 74 20 2d 0a 00 20  |-..- 4)Exit -.. |
00000450  2d 20 00 20 3d 20 00 00  00 00 00 00 00 00 00 00  |- . = ..........|
00000460  00 47 43 43 3a 20 28 55  62 75 6e 74 75 20 37 2e  |.GCC: (Ubuntu 7.|
00000470  35 2e 30 2d 33 75 62 75  6e 74 75 31 7e 31 38 2e  |5.0-3ubuntu1~18.|
00000480  30 34 29 20 37 2e 35 2e  30 00 00 00 00 00 00 00  |04) 7.5.0.......|
00000490  14 00 00 00 00 00 00 00  01 7a 52 00 01 78 10 01  |.........zR..x..|
000004a0  1b 0c 07 08 90 01 00 00  1c 00 00 00 1c 00 00 00  |................|
000004b0  00 00 00 00 79 00 00 00  00 41 0e 10 86 02 43 0d  |....y....A....C.|
000004c0  06 02 74 0c 07 08 00 00  1c 00 00 00 3c 00 00 00  |..t.........<...|
000004d0  00 00 00 00 aa 02 00 00  00 41 0e 10 86 02 43 0d  |.........A....C.|
000004e0  06 03 a5 02 0c 07 08 00  1c 00 00 00 5c 00 00 00  |............\...|
000004f0  00 00 00 00 49 00 00 00  00 41 0e 10 86 02 43 0d  |....I....A....C.|
00000500  06 02 44 0c 07 08 00 00  1c 00 00 00 7c 00 00 00  |..D.........|...|
00000510  00 00 00 00 15 00 00 00  00 41 0e 10 86 02 43 0d  |.........A....C.|
00000520  06 50 0c 07 08 00 00 00  00 00 00 00 00 00 00 00  |.P..............|
00000530  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000540  01 00 00 00 04 00 f1 ff  00 00 00 00 00 00 00 00  |................|
00000550  00 00 00 00 00 00 00 00  00 00 00 00 03 00 01 00  |................|
00000560  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000570  00 00 00 00 03 00 03 00  00 00 00 00 00 00 00 00  |................|
00000580  00 00 00 00 00 00 00 00  00 00 00 00 03 00 04 00  |................|
00000590  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000005a0  00 00 00 00 03 00 05 00  00 00 00 00 00 00 00 00  |................|
000005b0  00 00 00 00 00 00 00 00  13 00 00 00 01 00 05 00  |................|
000005c0  00 00 00 00 00 00 00 00  01 00 00 00 00 00 00 00  |................|
000005d0  2e 00 00 00 01 00 04 00  00 00 00 00 00 00 00 00  |................|
000005e0  01 00 00 00 00 00 00 00  3d 00 00 00 02 00 01 00  |........=.......|
000005f0  23 03 00 00 00 00 00 00  49 00 00 00 00 00 00 00  |#.......I.......|
00000600  6d 00 00 00 02 00 01 00  6c 03 00 00 00 00 00 00  |m.......l.......|
00000610  15 00 00 00 00 00 00 00  00 00 00 00 03 00 06 00  |................|
00000620  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000630  00 00 00 00 03 00 09 00  00 00 00 00 00 00 00 00  |................|
00000640  00 00 00 00 00 00 00 00  00 00 00 00 03 00 0a 00  |................|
00000650  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000660  00 00 00 00 03 00 08 00  00 00 00 00 00 00 00 00  |................|
00000670  00 00 00 00 00 00 00 00  7c 00 00 00 12 00 01 00  |........|.......|
00000680  00 00 00 00 00 00 00 00  79 00 00 00 00 00 00 00  |........y.......|
00000690  8d 00 00 00 10 00 00 00  00 00 00 00 00 00 00 00  |................|
000006a0  00 00 00 00 00 00 00 00  97 00 00 00 10 00 00 00  |................|
000006b0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000006c0  ad 00 00 00 10 00 00 00  00 00 00 00 00 00 00 00  |................|
000006d0  00 00 00 00 00 00 00 00  e5 00 00 00 12 00 01 00  |................|
000006e0  79 00 00 00 00 00 00 00  aa 02 00 00 00 00 00 00  |y...............|
000006f0  ea 00 00 00 10 00 00 00  00 00 00 00 00 00 00 00  |................|
00000700  00 00 00 00 00 00 00 00  f3 00 00 00 10 00 00 00  |................|
00000710  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000720  fe 00 00 00 10 00 00 00  00 00 00 00 00 00 00 00  |................|
00000730  00 00 00 00 00 00 00 00  08 01 00 00 10 00 00 00  |................|
00000740  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000750  43 01 00 00 10 00 00 00  00 00 00 00 00 00 00 00  |C...............|
00000760  00 00 00 00 00 00 00 00  54 01 00 00 10 00 00 00  |........T.......|
00000770  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00000780  65 01 00 00 10 00 00 00  00 00 00 00 00 00 00 00  |e...............|
00000790  00 00 00 00 00 00 00 00  7d 01 00 00 10 02 00 00  |........}.......|
000007a0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000007b0  8a 01 00 00 10 00 00 00  00 00 00 00 00 00 00 00  |................|
000007c0  00 00 00 00 00 00 00 00  a2 01 00 00 10 00 00 00  |................|
000007d0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000007e0  00 61 73 73 69 67 6e 6d  65 6e 74 36 5f 31 2e 63  |.assignment6_1.c|
000007f0  70 70 00 5f 5a 53 74 4c  31 39 70 69 65 63 65 77  |pp._ZStL19piecew|
00000800  69 73 65 5f 63 6f 6e 73  74 72 75 63 74 00 5f 5a  |ise_construct._Z|
00000810  53 74 4c 38 5f 5f 69 6f  69 6e 69 74 00 5f 5a 34  |StL8__ioinit._Z4|
00000820  31 5f 5f 73 74 61 74 69  63 5f 69 6e 69 74 69 61  |1__static_initia|
00000830  6c 69 7a 61 74 69 6f 6e  5f 61 6e 64 5f 64 65 73  |lization_and_des|
00000840  74 72 75 63 74 69 6f 6e  5f 30 69 69 00 5f 47 4c  |truction_0ii._GL|
00000850  4f 42 41 4c 5f 5f 73 75  62 5f 49 5f 5f 5a 31 31  |OBAL__sub_I__Z11|
00000860  44 69 73 70 6c 61 79 4d  65 6e 75 76 00 5f 5a 53  |DisplayMenuv._ZS|
00000870  74 34 63 6f 75 74 00 5f  47 4c 4f 42 41 4c 5f 4f  |t4cout._GLOBAL_O|
00000880  46 46 53 45 54 5f 54 41  42 4c 45 5f 00 5f 5a 53  |._ZS|
00000890  74 6c 73 49 53 74 31 31  63 68 61 72 5f 74 72 61  |tlsISt11char_tra|
000008a0  69 74 73 49 63 45 45 52  53 74 31 33 62 61 73 69  |itsIcEERSt13basi|
000008b0  63 5f 6f 73 74 72 65 61  6d 49 63 54 5f 45 53 35  |c_ostreamIcT_ES5|
000008c0  5f 50 4b 63 00 6d 61 69  6e 00 5f 5a 53 74 33 63  |_PKc.main._ZSt3c|
000008d0  69 6e 00 5f 5a 4e 53 69  72 73 45 52 69 00 5f 5a  |in._ZNSirsERi._Z|
000008e0  4e 53 6f 6c 73 45 69 00  5f 5a 53 74 34 65 6e 64  |NSolsEi._ZSt4FFSET_TABLE_end|
000008f0  6c 49 63 53 74 31 31 63  68 61 72 5f 74 72 61 69  |lIcSt11char_trai|
00000900  74 73 49 63 45 45 52 53  74 31 33 62 61 73 69 63  |tsIcEERSt13basic|
00000910  5f 6f 73 74 72 65 61 6d  49 54 5f 54 30 5f 45 53  |_ostreamIT_T0_ES|
00000920  36 5f 00 5f 5a 4e 53 6f  6c 73 45 50 46 52 53 6f  |6_._ZNSolsEPFRSo|
00000930  53 5f 45 00 5f 5f 73 74  61 63 6b 5f 63 68 6b 5f  |S_E.__stack_chk_|
00000940  66 61 69 6c 00 5f 5a 4e  53 74 38 69 6f 73 5f 62  |fail._ZNSt8ios_b|
00000950  61 73 65 34 49 6e 69 74  43 31 45 76 00 5f 5f 64  |ase4InitC1Ev.__d|
00000960  73 6f 5f 68 61 6e 64 6c  65 00 5f 5a 4e 53 74 38  |so_handle._ZNSt8|
00000970  69 6f 73 5f 62 61 73 65  34 49 6e 69 74 44 31 45  |ios_base4InitD1E|
00000980  76 00 5f 5f 63 78 61 5f  61 74 65 78 69 74 00 00  |v.__cxa_atexit..|
00000990  07 00 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |................|
000009a0  fd ff ff ff ff ff ff ff  0e 00 00 00 00 00 00 00  |................|
000009b0  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
000009c0  13 00 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |................|
000009d0  fc ff ff ff ff ff ff ff  1a 00 00 00 00 00 00 00  |................|
000009e0  02 00 00 00 05 00 00 00  0e 00 00 00 00 00 00 00  |................|
000009f0  21 00 00 00 00 00 00 00  02 00 00 00 0f 00 00 00  |!...............|
00000a00  fc ff ff ff ff ff ff ff  26 00 00 00 00 00 00 00  |........&.......|
00000a10  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000a20  2d 00 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |-...............|
00000a30  18 00 00 00 00 00 00 00  34 00 00 00 00 00 00 00  |........4.......|
00000a40  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000a50  39 00 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |9...............|
00000a60  fc ff ff ff ff ff ff ff  40 00 00 00 00 00 00 00  |........@.......|
00000a70  02 00 00 00 05 00 00 00  27 00 00 00 00 00 00 00  |........'.......|
00000a80  47 00 00 00 00 00 00 00  02 00 00 00 0f 00 00 00  |G...............|
00000a90  fc ff ff ff ff ff ff ff  4c 00 00 00 00 00 00 00  |........L.......|
00000aa0  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000ab0  53 00 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |S...............|
00000ac0  36 00 00 00 00 00 00 00  5a 00 00 00 00 00 00 00  |6.......Z.......|
00000ad0  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000ae0  5f 00 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |_...............|
00000af0  fc ff ff ff ff ff ff ff  66 00 00 00 00 00 00 00  |........f.......|
00000b00  02 00 00 00 05 00 00 00  fd ff ff ff ff ff ff ff  |................|
00000b10  6d 00 00 00 00 00 00 00  02 00 00 00 0f 00 00 00  |m...............|
00000b20  fc ff ff ff ff ff ff ff  72 00 00 00 00 00 00 00  |........r.......|
00000b30  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000b40  a6 00 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |................|
00000b50  41 00 00 00 00 00 00 00  ad 00 00 00 00 00 00 00  |A...............|
00000b60  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000b70  b2 00 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |................|
00000b80  fc ff ff ff ff ff ff ff  b9 00 00 00 00 00 00 00  |................|
00000b90  02 00 00 00 05 00 00 00  53 00 00 00 00 00 00 00  |........S.......|
00000ba0  c0 00 00 00 00 00 00 00  02 00 00 00 0f 00 00 00  |................|
00000bb0  fc ff ff ff ff ff ff ff  c5 00 00 00 00 00 00 00  |................|
00000bc0  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000bd0  cc 00 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |................|
00000be0  5e 00 00 00 00 00 00 00  d3 00 00 00 00 00 00 00  |^...............|
00000bf0  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000c00  d8 00 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |................|
00000c10  fc ff ff ff ff ff ff ff  df 00 00 00 00 00 00 00  |................|
00000c20  02 00 00 00 05 00 00 00  6e 00 00 00 00 00 00 00  |........n.......|
00000c30  e6 00 00 00 00 00 00 00  02 00 00 00 0f 00 00 00  |................|
00000c40  fc ff ff ff ff ff ff ff  eb 00 00 00 00 00 00 00  |................|
00000c50  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000c60  f2 00 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |................|
00000c70  7e 00 00 00 00 00 00 00  f9 00 00 00 00 00 00 00  |~...............|
00000c80  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000c90  fe 00 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |................|
00000ca0  fc ff ff ff ff ff ff ff  05 01 00 00 00 00 00 00  |................|
00000cb0  02 00 00 00 05 00 00 00  41 00 00 00 00 00 00 00  |........A.......|
00000cc0  0c 01 00 00 00 00 00 00  02 00 00 00 0f 00 00 00  |................|
00000cd0  fc ff ff ff ff ff ff ff  11 01 00 00 00 00 00 00  |................|
00000ce0  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000cf0  1f 01 00 00 00 00 00 00  02 00 00 00 13 00 00 00  |................|
00000d00  fc ff ff ff ff ff ff ff  24 01 00 00 00 00 00 00  |........$.......|
00000d10  04 00 00 00 14 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000d20  3e 01 00 00 00 00 00 00  02 00 00 00 13 00 00 00  |>...............|
00000d30  fc ff ff ff ff ff ff ff  43 01 00 00 00 00 00 00  |........C.......|
00000d40  04 00 00 00 14 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000d50  55 01 00 00 00 00 00 00  04 00 00 00 14 00 00 00  |U...............|
00000d60  fc ff ff ff ff ff ff ff  61 01 00 00 00 00 00 00  |........a.......|
00000d70  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000d80  66 01 00 00 00 00 00 00  04 00 00 00 15 00 00 00  |f...............|
00000d90  fc ff ff ff ff ff ff ff  6d 01 00 00 00 00 00 00  |........m.......|
00000da0  02 00 00 00 05 00 00 00  8a 00 00 00 00 00 00 00  |................|
00000db0  75 01 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |u...............|
00000dc0  fc ff ff ff ff ff ff ff  85 01 00 00 00 00 00 00  |................|
00000dd0  04 00 00 00 15 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000de0  8c 01 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |................|
00000df0  8e 00 00 00 00 00 00 00  94 01 00 00 00 00 00 00  |................|
00000e00  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000e10  ab 01 00 00 00 00 00 00  04 00 00 00 15 00 00 00  |................|
00000e20  fc ff ff ff ff ff ff ff  b5 01 00 00 00 00 00 00  |................|
00000e30  2a 00 00 00 16 00 00 00  fc ff ff ff ff ff ff ff  |*...............|
00000e40  c0 01 00 00 00 00 00 00  04 00 00 00 17 00 00 00  |................|
00000e50  fc ff ff ff ff ff ff ff  df 01 00 00 00 00 00 00  |................|
00000e60  02 00 00 00 13 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000e70  e4 01 00 00 00 00 00 00  04 00 00 00 14 00 00 00  |................|
00000e80  fc ff ff ff ff ff ff ff  f6 01 00 00 00 00 00 00  |................|
00000e90  04 00 00 00 14 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000ea0  02 02 00 00 00 00 00 00  02 00 00 00 0f 00 00 00  |................|
00000eb0  fc ff ff ff ff ff ff ff  07 02 00 00 00 00 00 00  |................|
00000ec0  04 00 00 00 15 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000ed0  0e 02 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |................|
00000ee0  8a 00 00 00 00 00 00 00  16 02 00 00 00 00 00 00  |................|
00000ef0  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000f00  26 02 00 00 00 00 00 00  04 00 00 00 15 00 00 00  |&...............|
00000f10  fc ff ff ff ff ff ff ff  2d 02 00 00 00 00 00 00  |........-.......|
00000f20  02 00 00 00 05 00 00 00  8e 00 00 00 00 00 00 00  |................|
00000f30  35 02 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |5...............|
00000f40  fc ff ff ff ff ff ff ff  4a 02 00 00 00 00 00 00  |........J.......|
00000f50  04 00 00 00 15 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000f60  54 02 00 00 00 00 00 00  2a 00 00 00 16 00 00 00  |T.......*.......|
00000f70  fc ff ff ff ff ff ff ff  5f 02 00 00 00 00 00 00  |........_.......|
00000f80  04 00 00 00 17 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000f90  7e 02 00 00 00 00 00 00  02 00 00 00 13 00 00 00  |~...............|
00000fa0  fc ff ff ff ff ff ff ff  83 02 00 00 00 00 00 00  |................|
00000fb0  04 00 00 00 14 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000fc0  95 02 00 00 00 00 00 00  04 00 00 00 14 00 00 00  |................|
00000fd0  fc ff ff ff ff ff ff ff  a1 02 00 00 00 00 00 00  |................|
00000fe0  02 00 00 00 0f 00 00 00  fc ff ff ff ff ff ff ff  |................|
00000ff0  a6 02 00 00 00 00 00 00  04 00 00 00 15 00 00 00  |................|
00001000  fc ff ff ff ff ff ff ff  ad 02 00 00 00 00 00 00  |................|
00001010  02 00 00 00 05 00 00 00  8a 00 00 00 00 00 00 00  |................|
00001020  b5 02 00 00 00 00 00 00  04 00 00 00 11 00 00 00  |................|
00001030  fc ff ff ff ff ff ff ff  c5 02 00 00 00 00 00 00  |................|
00001040  04 00 00 00 15 00 00 00  fc ff ff ff ff ff ff ff  |................|
00001050  cc 02 00 00 00 00 00 00  02 00 00 00 05 00 00 00  |................|
00001060  8e 00 00 00 00 00 00 00  d4 02 00 00 00 00 00 00  |................|
00001070  04 00 00 00 11 00 00 00  fc ff ff ff ff ff ff ff  |................|
00001080  ea 02 00 00 00 00 00 00  04 00 00 00 15 00 00 00  |................|
00001090  fc ff ff ff ff ff ff ff  f4 02 00 00 00 00 00 00  |................|
000010a0  2a 00 00 00 16 00 00 00  fc ff ff ff ff ff ff ff  |*...............|
000010b0  ff 02 00 00 00 00 00 00  04 00 00 00 17 00 00 00  |................|
000010c0  fc ff ff ff ff ff ff ff  1d 03 00 00 00 00 00 00  |................|
000010d0  04 00 00 00 18 00 00 00  fc ff ff ff ff ff ff ff  |................|
000010e0  43 03 00 00 00 00 00 00  02 00 00 00 04 00 00 00  |C...............|
000010f0  fc ff ff ff ff ff ff ff  48 03 00 00 00 00 00 00  |........H.......|
00001100  04 00 00 00 19 00 00 00  fc ff ff ff ff ff ff ff  |................|
00001110  4f 03 00 00 00 00 00 00  02 00 00 00 1a 00 00 00  |O...............|
00001120  fc ff ff ff ff ff ff ff  56 03 00 00 00 00 00 00  |........V.......|
00001130  02 00 00 00 04 00 00 00  fc ff ff ff ff ff ff ff  |................|
00001140  5d 03 00 00 00 00 00 00  2a 00 00 00 1b 00 00 00  |].......*.......|
00001150  fc ff ff ff ff ff ff ff  65 03 00 00 00 00 00 00  |........e.......|
00001160  04 00 00 00 1c 00 00 00  fc ff ff ff ff ff ff ff  |................|
00001170  00 00 00 00 00 00 00 00  01 00 00 00 02 00 00 00  |................|
00001180  6c 03 00 00 00 00 00 00  20 00 00 00 00 00 00 00  |l....... .......|
00001190  02 00 00 00 02 00 00 00  00 00 00 00 00 00 00 00  |................|
000011a0  40 00 00 00 00 00 00 00  02 00 00 00 02 00 00 00  |@...............|
000011b0  79 00 00 00 00 00 00 00  60 00 00 00 00 00 00 00  |y.......`.......|
000011c0  02 00 00 00 02 00 00 00  23 03 00 00 00 00 00 00  |........#.......|
000011d0  80 00 00 00 00 00 00 00  02 00 00 00 02 00 00 00  |................|
000011e0  6c 03 00 00 00 00 00 00  00 2e 73 79 6d 74 61 62  |l.........symtab|
000011f0  00 2e 73 74 72 74 61 62  00 2e 73 68 73 74 72 74  |..strtab..shstrt|
00001200  61 62 00 2e 72 65 6c 61  2e 74 65 78 74 00 2e 64  |ab..rela.text..d|
00001210  61 74 61 00 2e 62 73 73  00 2e 72 6f 64 61 74 61  |ata..bss..rodata|
00001220  00 2e 72 65 6c 61 2e 69  6e 69 74 5f 61 72 72 61  |..rela.init_arra|
00001230  79 00 2e 63 6f 6d 6d 65  6e 74 00 2e 6e 6f 74 65  |y..comment..note|
00001240  2e 47 4e 55 2d 73 74 61  63 6b 00 2e 72 65 6c 61  |.GNU-stack..rela|
00001250  2e 65 68 5f 66 72 61 6d  65 00 00 00 00 00 00 00  |.eh_frame.......|
00001260  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
000012a0  20 00 00 00 01 00 00 00  06 00 00 00 00 00 00 00  | ...............|
000012b0  00 00 00 00 00 00 00 00  40 00 00 00 00 00 00 00  |........@.......|
000012c0  81 03 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000012d0  01 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000012e0  1b 00 00 00 04 00 00 00  40 00 00 00 00 00 00 00  |........@.......|
000012f0  00 00 00 00 00 00 00 00  90 09 00 00 00 00 00 00  |................|
00001300  e0 07 00 00 00 00 00 00  0c 00 00 00 01 00 00 00  |................|
00001310  08 00 00 00 00 00 00 00  18 00 00 00 00 00 00 00  |................|
00001320  26 00 00 00 01 00 00 00  03 00 00 00 00 00 00 00  |&...............|
00001330  00 00 00 00 00 00 00 00  c1 03 00 00 00 00 00 00  |................|
00001340  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00001350  01 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00001360  2c 00 00 00 08 00 00 00  03 00 00 00 00 00 00 00  |,...............|
00001370  00 00 00 00 00 00 00 00  c1 03 00 00 00 00 00 00  |................|
00001380  01 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
*
000013a0  31 00 00 00 01 00 00 00  02 00 00 00 00 00 00 00  |1...............|
000013b0  00 00 00 00 00 00 00 00  c1 03 00 00 00 00 00 00  |................|
000013c0  96 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000013d0  01 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000013e0  3e 00 00 00 0e 00 00 00  03 00 00 00 00 00 00 00  |>...............|
000013f0  00 00 00 00 00 00 00 00  58 04 00 00 00 00 00 00  |........X.......|
00001400  08 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00001410  08 00 00 00 00 00 00 00  08 00 00 00 00 00 00 00  |................|
00001420  39 00 00 00 04 00 00 00  40 00 00 00 00 00 00 00  |9.......@.......|
00001430  00 00 00 00 00 00 00 00  70 11 00 00 00 00 00 00  |........p.......|
00001440  18 00 00 00 00 00 00 00  0c 00 00 00 06 00 00 00  |................|
00001450  08 00 00 00 00 00 00 00  18 00 00 00 00 00 00 00  |................|
00001460  4a 00 00 00 01 00 00 00  30 00 00 00 00 00 00 00  |J.......0.......|
00001470  00 00 00 00 00 00 00 00  60 04 00 00 00 00 00 00  |........`.......|
00001480  2a 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |*...............|
00001490  01 00 00 00 00 00 00 00  01 00 00 00 00 00 00 00  |................|
000014a0  53 00 00 00 01 00 00 00  00 00 00 00 00 00 00 00  |S...............|
000014b0  00 00 00 00 00 00 00 00  8a 04 00 00 00 00 00 00  |................|
000014c0  00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000014d0  01 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000014e0  68 00 00 00 01 00 00 00  02 00 00 00 00 00 00 00  |h...............|
000014f0  00 00 00 00 00 00 00 00  90 04 00 00 00 00 00 00  |................|
00001500  98 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00001510  08 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00001520  63 00 00 00 04 00 00 00  40 00 00 00 00 00 00 00  |c.......@.......|
00001530  00 00 00 00 00 00 00 00  88 11 00 00 00 00 00 00  |................|
00001540  60 00 00 00 00 00 00 00  0c 00 00 00 0a 00 00 00  |`...............|
00001550  08 00 00 00 00 00 00 00  18 00 00 00 00 00 00 00  |................|
00001560  01 00 00 00 02 00 00 00  00 00 00 00 00 00 00 00  |................|
00001570  00 00 00 00 00 00 00 00  28 05 00 00 00 00 00 00  |........(.......|
00001580  b8 02 00 00 00 00 00 00  0d 00 00 00 0e 00 00 00  |................|
00001590  08 00 00 00 00 00 00 00  18 00 00 00 00 00 00 00  |................|
000015a0  09 00 00 00 03 00 00 00  00 00 00 00 00 00 00 00  |................|
000015b0  00 00 00 00 00 00 00 00  e0 07 00 00 00 00 00 00  |................|
000015c0  af 01 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000015d0  01 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
000015e0  11 00 00 00 03 00 00 00  00 00 00 00 00 00 00 00  |................|
000015f0  00 00 00 00 00 00 00 00  e8 11 00 00 00 00 00 00  |................|
00001600  72 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |r...............|
00001610  01 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  |................|
00001620
```