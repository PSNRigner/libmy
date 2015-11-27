if [ $# == 0 ]
then
    echo $0 "<directory>"
else
    if [ -f ./libmy.a ]
    then
	mkdir -p $1/lib > /dev/null
	mkdir -p $1/include > /dev/null
	cp ./libmy.a $1/lib
	cp ./include/* $1/include
    else
	echo "Please compile lib first."
    fi
fi