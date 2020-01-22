launcher:encryption.o driveEncrypt.o
	gcc encryption.o driveEncrypt.o -o launcher
encryption.o:encryption.h encryption.c
	gcc -c encryption.c
driveEncrypt.o:driveEncrypt.c encryption.h
	gcc -c driveEncrypt.c
