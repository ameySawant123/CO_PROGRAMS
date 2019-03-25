data segment
    expo db ?
    num db ?
    power db ?
    msg db "Enter number: $"
    msg2 db "Enter exponent: $"
data ends
code segment
      assume cs:code,ds:data
start:mov ax,data
      mov ds,ax
      lea dx,msg
      mov ah,09h
      int 21h
      mov ah,01h
      int 21h
      sub al,30h
      mov num,al
      lea dx,msg2
      mov ah,09h
      int 21h
      mov ah,01h
      int 21h
      sub al,30h
      mov expo,al
      xor ax,ax
      mov bl,num
      mov al,01h
      xor cx,cx
      mov cl,expo
   l1:mul bl
      loop l1
      add al,30h
      mov bl,'a'
      mov power,al
     l2:div bl
        add ah,30h
        mov dl,ah
        mov ah,02h
        int 21h
        mov cl,al
        jnz l2
      mov ah, 4ch
      int 21h  
code ends
end start
