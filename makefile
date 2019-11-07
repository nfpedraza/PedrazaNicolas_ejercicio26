areglo.dat : areglo.x
	./areglos.x 

multiplicados.dat : clase26.x
	./clase26.x > multiplicados.dat

clase26.x : clase26.cpp
	c++ clase26.cpp -o clase26.x
	
areglo.x : areglo.cpp
	c++ areglo.cpp -o areglo.x
	
clean : 
	rm clase26.x multiplicados.dat areglos.x