# pcs3746-sistemas-operacionais

Equipe 2 de Sistemas Operacionais, PCS3746-2021, prof. Jorge Kinoshita.
Luiz Guilherme Kasputis Zanini
Márcio Suguiyama de Abreu
Paulo Rubens Alvarenga Kerassiotis

## Assignment 1 - Team 9

Disponível em http://linux-kernel-lab.blogspot.com/2018/04/assignments-1.html.

> How does really the kernel get the system call number? Is it from the svc instruction or is it passed by some register? Using gdb, explain step by step how scno is gotten. Tip: Use C-x 2 to switch from source code to machine code. Change the linux source code to externalize the last system call number in sys directory. Create an init file that calls some system calls and displays their numbers. Append gdb screenshots to your report.

O enunciado foi dividido em 3 partes:
1. Explicar como o kernel obtém o número da system call. É da instrução svc, ou de algum registrador?
2. Alterar o código fonte do linux e exponha o código da última syscall realizada no diretório sys.
3. Criar um arquivo init que chame algumas syscalls e mostre seus números.

Código disponível na [master](https://github.com/Puliping/pcs3746-sistemas-operacionais/tree/master).

## Assignment 2 - Team 8

Disponível em https://linux-kernel-lab.blogspot.com/2020/07/assignments-2-2021.html.

> Study and explain in your report: http://www.ibm.com/developerworks/library/l-completely-fair-scheduler/. Create the system call cfs() which returns a string such as: "`pid1:virtualRuntime1 pid2:virtualRuntime2 pid3:virtualRuntime3 ...`" which is ordained from the lowest virtualRuntime to the highest. In oder to test, make an init which forks many other processes: some continually making arithmetic operations (cpu bound processes) and others getting chars from the keyboard (getc). From time to time, init must call cfs() and displays it.

O enunciado foi dividido em 3 partes:
1. Estudar o Completely Fair Scheduler segundo o site da IBM Developer, como pedido pelo professor.
2. Criar a syscall cfs(), que retorna uma lista de processos ordenada pelo respectivo virtual runtime.
3. Criar um init.c que, em processos filhos, executa tarefas diversas, como operações aritméticas  ou de I/O, e use o CFS para mostrá-los.

Código disponível na [cfs_sched](https://github.com/Puliping/pcs3746-sistemas-operacionais/tree/cfs_sched).

## Assignment 3 - Team 2

Disponível em https://linux-kernel-lab.blogspot.com/2020/06/assignment-3-2020.html.

> systemtap is a script language developed by RedHat that runs in kernel mode. It collects and displays kernel data (or even user data) as the user wishes. See [SystemTap Beginners Guide](https://sourceware.org/systemtap/SystemTap_Beginners_Guide/). The script [traceio2](https://sourceware.org/systemtap/SystemTap_Beginners_Guide/traceio2sect.html) shows how to monitor I/O activity on a specific device. For this assignment, use the centos distribution because it deals much better with SystemTap. Run this script to monitor different devices in your computer, specially, your mouse. Monitor your mouse in a X windows environment. Who uses it? Create a C program that opens the mouse device and continually reads it and displays the character received. At the same time, monitor the mouse use by the systemtap script.

O enunciado foi dividido em 2 partes:
1. Instalar e utilizar o SystemTap para monitorar o input do mouse.
2. Criar um programa em C que monitora o mouse, e comparar com os resultados do SystemTap.

No entanto, foi adicionada uma parte intermediária, para estudo dos arquivos em /dev/input.

Esta estapa não pode ser encontrada neste repositório, mas a VM utilizada está disponível no [Google Drive]().

## Assignment 4 - Team 7

Disponível em https://linux-kernel-lab.blogspot.com/2020/07/assignment-4-2020.html.

> Using phase 4 of Shibata's team, implement the program "large" that uses 2 times the physical memory (adjust memory size in qemu). Make sure the swap area is very large, greater than 4GB. This program declares a large vector. For each element of the vector, a new number is written sequentially. Make the program stop using getchar() after reading 1.5 times the physical memory so that many swaps must have happen. Study /proc/$PID/pagemap to inform what are the pages in the swap partition.
