find . -name "*.sh" | cut -c 3- | rev | cut -d "." -f2 | rev | cut -d "/" -f2
