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
