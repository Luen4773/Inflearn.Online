%include "io64.inc"

section .text
global CMAIN
CMAIN:
        mov rbp, rsp; for correct debugging


    PRINT_STRING msg
    
        xor rax, rax
    ret
    
    ; 초기화 된 데이터
    ; [변수 이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
    section .data
    
    msg db 'Hello World', 0x00
    a db 0x11 ;[0x11]
    b dw 0x2222
    c dd 0x33333333
    d dq 0x4444444444444444
    
    ;장단점이 교차한다.
    ;- 리틀 엔디언 : 캐스팅에 유리하다.
    ;b dd 0x12345678
    
    
    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]
    ; [크기] resb(1) resw(2) resd(4) resq(8) 
    section .bss
    e resb 10
   
    
    
    