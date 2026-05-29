bool rotateString(char* s, char* goal) {
    int n = strlen(s);
    if (n != strlen(goal))
        return false;

    char *temp = (char *)malloc(2 * n + 1);

    strcpy(temp, s);
    strcat(temp, s);

    bool result = (strstr(temp, goal) != NULL);

    free(temp);
    return result;
}