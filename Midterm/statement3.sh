echo "Your file has" `find -type f -exec grep -o '\.' {} \; | wc -l` "statements."
echo "Your file ($1) has" `wc -w $1` "words and" `wc -m $1` "letters." 


