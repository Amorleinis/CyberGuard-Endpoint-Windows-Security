CC=gcc
CFLAGS=-Iinclude -Wall -Wextra
LDFLAGS=-Llib
SRC=src/main.c src/antivirus.c src/firewall.c src/ids.c src/utils.c src/unix_utils.c
OBJ=$(SRC:.c=.o)
TARGET=CyberGuardEndpointSecurity

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)