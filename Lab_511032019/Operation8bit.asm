data segment
   a db 02h
   b db 03h
   addi db ?
   subt db ?
   mult db ?
   rem db ?
   quo db ?
data ends
code segment
assume cs:code,ds:data
start:mov ax,data
      mov ds,ax
      mov al,a
      add al,b
      mov addi,al
      mov al,a
      sub al,b
      mov subt,al
      mov al,a
      mul b
      mov mult,al
      mov al,a
      div b
      mov rem,ah
      mov quo,al
      mov ax, 4ch
      int 21h  
code ends
end start
