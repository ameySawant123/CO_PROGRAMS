data segment
   a dw 0102h
   b dw 0003h
   addi dw ?
   subt dw ?
   mult dw ?
data ends
code segment
assume cs:code,ds:data
start:mov ax,data
      mov ds,ax
      mov ax,a
      add ax,b
      mov addi,ax
      mov ax,a
      sub ax,b
      mov subt,ax
      mov ax,a
      mul b
      mov mult,ax
      mov ah, 4ch
      int 21h  
code ends
end start
