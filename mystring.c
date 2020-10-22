int mystrlen(char *s) {
  int i = 0;
  while (*(s + i) != '\0') {
    i++;
  }
  return i;
}

char * mystrcpy(char *dest, char *source) {
  int i = 0;
  while (i < mystrlen(source)) {
    dest[i] = source[i];
    i++;
  }
  dest[i+1] = '\0';
  return dest;
}

char * mystrncat(char *dest, char *source, int n) {
  int i = 0;
  while (i < n) {
    i++;
    dest[mystrlen(dest) + i] = source[i];
  }
  return dest;
}

int mystrcmp( char *s1, char *s2 ) {
  int i = 0;
  while ((s1[i] != '\0') || (s2[i] != '\0')) {
    if (s1[i] > s2[i]) {
      return 1;
    }
    if (s2[i] > s1[i]) {
      return -1;
    }
    i++;
  }
  return 0;
}

char * mystrchr( char *s, char c ) {
  int i = 0;
  if (c == 0) {
    return s + mystrlen(s);
  }
  while (*s) {
    if (*s == c) {
      return s;
    }
    s++;
  }
  return 0;
}
