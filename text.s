.MODEL SMALL
.DATA
        msg DB 'Hello World',13,10,'$'
.CODE
START:
        mov ax, @DATA
        mov ds, ax
        mov ax, 0900h
        lea dx, msg
        int 21h
        mov ax, 4C00h
        int 21h
END START