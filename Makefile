BIN := main

BIN_DIR := ./bin
SRC_DIR := ./src
INC_DIR := ./inc
OBJ_DIR := ./obj
DEP_DIR := ./dep
LIB_DIR := ./lib

CC := gcc
CFLAGS := -Wall -Wextra -Werror -std=c99 -ggdb3
IFLAGS := -I$(INC_DIR)
LFLAGS := -lm
DFLAGS := -MMD -MP

SRCS := $(wildcard $(SRC_DIR)/*.c)
DEPS := $(patsubst $(SRC_DIR)/%.c, $(DEP_DIR)/%.d, $(SRCS))
OBJS := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))
LIBS := $(wildcard $(LIB_DIR)/*.o)

all : $(BIN_DIR)/$(BIN)

$(BIN_DIR)/$(BIN): $(OBJS)
	@echo "linking all the file to create $@ ..."
	@$(CC) $(LFLAGS) $(LIBS) -o $@ $^
	@echo done.

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "compiling $< to $@ ..."
	@$(CC) $(CFLAGS) $(IFLAGS) $(DFLAGS) -c -o $@ $<
	@mv -u $(OBJ_DIR)/*.d $(DEP_DIR)/

clean:
	@echo "cleaning binary, object and dependency files ..."
	@rm -rf $(BIN_DIR)/$(BIN) $(DEPS) $(OBJS)
	@echo done.

run:
	@$(BIN_DIR)/$(BIN)

-include $(DEPS)


print_cconfig:
	@echo $(CC)
	@echo $(CFLAGS)
	@echo $(IFLAGS)
	@echo $(LFLAGS)
	@echo $(DFLAGS)

print_dconfig:
	@echo $(BIN_DIR)
	@echo $(SRC_DIR)
	@echo $(INC_DIR)
	@echo $(OBJ_DIR)
	@echo $(DEP_DIR)
	@echo $(LIB_DIR)

print_files:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(DEPS)
	@echo $(LIBS)