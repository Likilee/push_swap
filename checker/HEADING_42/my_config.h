/* .c 소스파일이 있는 경로를 "" 사이에 적어주세요
ex) "../src" */
#define SRC_DIR "../src"

/* 헤더파일을 생성할 경로를 "" 사이에 적어주세요
ex) "../include" */
#define HEADER_PATH "../include"

/* 생성할 헤더파일의 이름을 적어주세요. */
#define HEADER_NAME "checker.h"

/* 사용할 헤더파일들을 "" 사이에 적어주세요 공백(space)로 구분하여 적어주세요.
** 사용자 헤더파일을 적을 때 쌍따옴표앞에 역슬래시를 붙여주세요 ( " -> \") */
#define LIB "<stdio.h> <stdlib.h> <unistd.h> \"libft.h\" \"get_next_line.h\" \"libftprintf.h\""

/* 사용할 매크로를 적어주세요 여러개가 있다면 ',' 로 구분해 주세요
** ex) #define MECRO "BUFFER_SIZE 32, MAX 1024"
** 쌍따옴표앞에 역슬래시를 붙여주세요 STR \"hello\" ( " -> \") */
#define MACRO "TRUE 1, FALSE 0"

/* 함수 선언부 위에 소스파일명을 코멘트로 추가하려면 값을 1로 수정해주세요
** ex) IF : SRC_NAME COMMENT 1
Src is : ./srcs/ft_memccpy.c
이런식으로 붙습니다. */
#define SRC_NAME_COMMENT 1

/* 소스파일이 200개 이상일 경우만 수정해주세요~ */
#define MAX_SOURCE_FILE 200
