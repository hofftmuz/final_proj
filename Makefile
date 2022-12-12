SRCS = get_pro.c dec_product.c read.c add.c main.c
OBJS =$(SRCS: .c = .o)
TARG = final

CC = gcc

all: $(TARG)

$(TARG) : $(SRCS)
		$(CC) -o $(TARG) $(OBJS)

%.o : %.c
		$(CC) $(OPTS) -c $< -o $@

clean:
		rm -f $(OBJS) $(TARG)

# all: get_product.c dec_product.c read.c add.c main.c

# 	gcc -c main.c
# 	gcc -c add.c
# 	gcc -c read.c
# 	gcc -c dec_product.c
# 	gcc -c get_pro.c


# clean:
# 	rm *.o final

