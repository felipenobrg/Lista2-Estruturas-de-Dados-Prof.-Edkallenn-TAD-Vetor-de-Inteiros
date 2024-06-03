CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEPS = vector/vector.h
OBJ = output/main.o output/vector/vector.o
EXECUTABLE = output/main

output/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(EXECUTABLE): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

compilar: 
	if not exist output\vector (mkdir output\vector)
	$(MAKE) $(EXECUTABLE)

exec: compilar
	./$(EXECUTABLE)