OPTS := -Wall -std=c99
TARGET := main

all: $(TARGET)


main: main.o fibDev.o fibDvr.o
	$(CC) $(OPTS) -o main $^

%.o: %.c %.h
	$(CC) $(OPTS) -c $<

clean:
	@echo cleaning...
	@rm -f $(TARGET) *.o
.PHONY: clean
