CONFIG_MODULE_SIG=n
obj-m += hello-3.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	rm *.o *.symvers *.order *.mod.c

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

insmod:
	sudo insmod ./hello-3.ko

rmmod:
	sudo rmmod hello-3

showmessage:
	cat /var/log/syslog


