 
DIRS= $(shell seq -w 1 16) 18# all folders named from 01 to 18, skipping 17

all: 
	for d in $(DIRS); do \
		echo "== $$d =="; \
		make -C $$d; \
	     done

clean:
	for d in $(DIRS); do \
		make -C $$d clean; \
	     done

	
