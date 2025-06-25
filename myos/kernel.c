void _start() {
    char *video = (char*)0xb8000;
    video[0] = 'H';
    video[2] = 'i';

    while (1);  }
