
if [[ "$OSTYPE" =~ ^darwin ]]; then
    if [[ ! $LDFLAGS =~ "/opt/homebrew/lib" ]]; then
        export LDFLAGS="$LDFLAGS -L /opt/homebrew/lib"
    fi

    if [[ ! $CFLAGS =~ "/opt/homebrew/include" ]]; then
        export CFLAGS="$CFLAGS -I /opt/homebrew/include"
    fi
fi

if [[ "$OSTYPE" =~ ^linux ]]; then

    if [[ ! $LDFLAGS =~ "/home/linuxbrew/.linuxbrew/lib" ]]; then
        export LDFLAGS="$LDFLAGS -L /home/linuxbrew/.linuxbrew/lib"
    fi

    if [[ ! $CFLAGS =~ "/home/linuxbrew/.linuxbrew/lib" ]]; then
        export CFLAGS="$CFLAGS -I /home/linuxbrew/.linuxbrew/include"
    fi

fi
