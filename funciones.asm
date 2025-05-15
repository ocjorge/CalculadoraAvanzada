; funciones.asm (Sintaxis Intel, 64-bit)
section .text
global calcularMCD
global sumarArreglo

; int calcularMCD(int a, int b)
; Parámetros: EDI = a, ESI = b (Convención System V AMD64)
calcularMCD:
    mov eax, edi    ; a
    mov ebx, esi    ; b

.loop_mcd:
    test ebx, ebx
    jz .done_mcd
    xor edx, edx
    div ebx         ; EDX:EAX / EBX -> Cociente: EAX, Residuo: EDX
    mov eax, ebx
    mov ebx, edx
    jmp .loop_mcd

.done_mcd:
    ret             ; Resultado en EAX

; int sumarArreglo(int* arr, int size)
; Parámetros: RDI = arr, ESI = size
sumarArreglo:
    xor eax, eax    ; suma = 0
    test esi, esi
    jz .done_sum    ; Si size == 0, salir

.loop_sum:
    add eax, [rdi]  ; Sumar elemento actual
    add rdi, 4      ; Mover al siguiente elemento (int = 4 bytes)
    dec esi
    jnz .loop_sum

.done_sum:
    ret             ; Resultado en EAX