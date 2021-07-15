obj-m += example.o

KDIR = /usr/src/linux-headers-(username -r)<<

all:
		$(MAKE) -C &{KDIR} SUBDIRS=&(PWD modules

clean:
		rm -rf *.o *.ko *.mod.* *.s