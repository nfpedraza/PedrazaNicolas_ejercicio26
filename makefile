areglo.dat : areglo.x multiplicados.dat
	./areglo.x 

multiplicados.dat : clase26.x
	./clase26.x > multiplicados.dat
    
areglo.dat : areglo.x
	./areglo.x 

clase26.x : clase26.cpp
	c++ clase26.cpp -o clase26.x
	
areglo.x : areglo.cpp
	c++ areglo.cpp -o areglo.x
	
clean : 
	rm clase26.x multiplicados.dat areglo.x