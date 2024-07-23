# Kernel Module

Use this commmand to build a Makefile:
```
make -C /lib/modules/'uname -r'/build M=$PWD
```

Load the kernel module with this command:
```
insmod kern_module0.ko
```

Check for the kernel logs:
```
dmesg | tail -n 1
```
