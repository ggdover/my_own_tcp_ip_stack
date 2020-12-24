
testapp: testapp.c graph.c graph.h sll.c sll.h
	gcc testapp.c graph.c sll.c -o testapp
