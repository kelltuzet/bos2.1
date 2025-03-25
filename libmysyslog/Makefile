CC = gcc
CFLAGS = -Wall -fPIC
LDFLAGS = -shared

SRC = src/mysyslog.c
OBJ = $(SRC:.c=.o)
TARGET = libmysyslog.so

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
