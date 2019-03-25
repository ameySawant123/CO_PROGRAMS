data segment
      num db 04h
      fact db ?
data ends
code segment  
    assume cs:code,ds:data
    start:mov ax,data
          mov ds,ax
          xor ax,ax
          mov al,01h
          mov cl,num
       l1:mul cl
          loop l1
          mov fact,al
          mov ax, 4ch
          int 21h  

code ends
end start
