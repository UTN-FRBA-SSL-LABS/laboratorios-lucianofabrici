# Nombre del ejecutable final
PROGRAMA := calc3

# Compilador
CC := gcc

# Regla principal
all: $(PROGRAMA)

# Regla para construir la calculadora a partir del parser y el scanner
# Bison genera: parser3.tab.c y parser3.tab.h
# Flex genera:  lex.yy.c
$(PROGRAMA): parser3.y scanner3.l
	# TODO 1: Bison genera parser3.tab.c y parser3.tab.h (por la opción -d)
	bison -d parser3.y

	# TODO 2: Flex genera lex.yy.c (necesita que ya exista parser3.tab.h)
	flex scanner3.l

	# TODO 3: Compilar y linkear scanner y parser juntos
	$(CC) lex.yy.c parser3.tab.c -o $(PROGRAMA)

# Regla para limpiar todos los archivos generados
clean:
	# TODO 4: Eliminá el ejecutable y todos los archivos generados
	rm -f $(PROGRAMA) lex.yy.c parser3.tab.c parser3.tab.h

.PHONY: all clean
