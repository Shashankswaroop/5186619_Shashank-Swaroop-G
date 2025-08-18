CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -g

APP = program
TEST = test_runner

APP_SRCS = main.c math_utils.c
TEST_SRCS = test_math.c math_utils.c unity/unity.c

APP_OBJS = $(APP_SRCS:.c=.o)
TEST_OBJS = $(TEST_SRCS:.c=.o)

all: $(APP) $(TEST)

# Build application
$(APP): $(APP_OBJS)
	$(CC) $(CFLAGS) -o $(APP) $(APP_OBJS)

# Build tests with Unity
$(TEST): $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST) $(TEST_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(APP) $(TEST) *.o

