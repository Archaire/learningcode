# klo nama idk.cpp nya di ganti ini juga harus diganti
# ini kaya variable
# gimana? haha
# masih bingung? klo masih bingung manual dulu deh.. nah iya hehe ._. kwkwkw
SOURCECODE=idk.cpp
COMPILER=g++
OUTPUT=idk

#$(CXX) main.cpp -o $(OUT)

build: main.cpp 
	$(COMPILER) $(SOURCECODE) -o $(OUTPUT)
#	g++ idk.cpp -o idk
	echo "compile beres boss"
#jadi ini script yg tadi `g++ idk.cpp -o idk` sama kan? cuman di bikin script doang jadi tingall ketik `make` ini klo project nya udh gede pasti make `Makefile`
#kayanya lebih gampang ya , tapi gw belom bener bener pahamin caranya wk
#
#
#tinggal buat file copy paste we asal nama file na ulah di ganti. lamun ganti ya makefile na kudu ganti. 
