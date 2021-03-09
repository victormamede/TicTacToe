CC = gcc
CFLAGS = -g -Wall

SRCDIR = src
BUILDDIR = build
OBJECTSDIR = $(BUILDDIR)/objects

SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(SOURCES:$(SRCDIR)/%.c=$(OBJECTSDIR)/%.o)
TARGET = $(BUILDDIR)/main

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(CFLAGS) -o $@

$(OBJECTSDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(TARGET) $(OBJECTS)
