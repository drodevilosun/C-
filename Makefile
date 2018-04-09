# Makefile for cpp learning project
SOURCES  := main.cpp        \
            task1/task1.cpp \
            task2/task2.cpp \
            task3/task3.cpp \
                            
SRCPATHS := .               \
            app_structs     \
            definitions     \
            task1           \
            task2           \
            task3           \
                             
CXX        := g++
CPPFLAGS   := -Wall -O -g
TARGET     := fa_team
BUILDDIR   := build

SOURCE=$(SOURCES:%.cpp=$(BUILDDIR)/%.o)
HEADER=$(foreach d, $(SRCPATHS), -I$(d))

.PHONY: clean

all: $(SOURCE)
	$(CXX) $(CPPFLAGS)  -o $(TARGET) $^

$(BUILDDIR)/%.o: %.cpp
	@echo 'Building source file: $^ $(BUILDDIR)/$(<D) $(<F)'
	@mkdir -p $(BUILDDIR)/$(<D)
	$(CXX) $(CPPFLAGS) $(HEADER) -c $^ -o $@
	
clean:
	-@rm -rf $(BUILDDIR)
