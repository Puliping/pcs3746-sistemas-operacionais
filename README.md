# pcs3746-sistemas-operacionais

Team 9 de Sistemas Operacionais, PCS3746-2021, prof. Jorge Kinoshita.

## Assignment 1

Disponível em http://linux-kernel-lab.blogspot.com/2018/04/assignments-1.html.

> How does really the kernel get the system call number? Is it from the svc instruction or is it passed by some register? Using gdb, explain step by step how scno is gotten. Tip: Use C-x 2 to switch from source code to machine code. Change the linux source code to externalize the last system call number in sys directory. Create an init file that calls some system calls and displays their numbers. Append gdb screenshots to your report.

O enunciado foi dividido em 3 partes:
1. Explicar como o kernel obtém o número da system call. É da instrução svc, ou de algum registrador?
2. Alterar o código fonte do linux e exponha o código da última syscall realizada no diretório sys.
3. Criar um arquivo init que chame algumas syscalls e mostre seus números.
