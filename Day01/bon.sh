ldapsearch -Q "uid=*bon*" | grep cn | wc -l | tr ' ' '.' | rev | cut -d "." -f1
