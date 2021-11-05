CC = gcc
CFLAGS  = -O3 -Wall -Wextra

# the build target executable:
TARGET = pyramid

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	$(RM) $(TARGET)
