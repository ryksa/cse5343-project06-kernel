bcc -ansi -c -o kernel.o kernel.c
ld86 -o kernel -d kernel.o kernel.asm.o
dd if=kernel of=floppya.img bs=512 conv=notrunc seek=3
bochs -f opsys.bxrc