if (argc >= 4 && strcmp(argv[1], "--child") == 0) { /* режим ребёнка */
  sleep_ms(atoi(argv[3])); /* поработать N мс */
  return atoi(argv[2]); /* вернуть заданный код */
}
const char *self = argv[0]; /* путь к себе для тестов */   
