all:
	cd common && $(MAKE) common
	cd app && $(MAKE) all
clean:
	cd common && $(MAKE) clean
	cd app && $(MAKE) clean
