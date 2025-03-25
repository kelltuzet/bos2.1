CC = gcc
CFLAGS = -Wall
LDFLAGS = -L../libmysyslog -lmysyslog

SRC = src/main.c
OBJ = $(SRC:.c=.o)
TARGET = mysyslog-client

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)
