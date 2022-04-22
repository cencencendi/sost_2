CONFIG_MODULE_SIG=n
obj-m += hellokernel.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	rm *.o *.symvers *.order *.mod.c

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

insmod:
	sudo insmod ./hellokernel.ko

rmmod:
	sudo rmmod hellokernel

showmessage:
	cat /var/log/syslog


