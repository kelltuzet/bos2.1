CC = gcc
CFLAGS = -Wall -fPIC
LDFLAGS = -shared

SRC = src/text_driver.c
OBJ = $(SRC:.c=.o)
TARGET = libmysyslog-text.so

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(TARGET)
