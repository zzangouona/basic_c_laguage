# Mac Clion 개발환경 세팅

clion IDE를 추천해줘서 검색해보니깐 Jetbrains 회사 제품이길래  라이센스가 있던 나는 바로 개발환경을 세팅했다. 

 

[https://www.jetbrains.com/ko-kr/clion/](https://www.jetbrains.com/ko-kr/clion/)

1. 사이트 들어가서 다운로드 받는다.

굉장히 쉬워서 만족하고 예제 파일을 따라 치고 빌드하는데  오류 발생!

```c
duplicate symbol '_main' in:
    CMakeFiles/ex03.dir/run/ex03_01_variable.c.o
    CMakeFiles/ex03.dir/run/ex03_03_int64.c.o
```

이게 뭐지..? 난 분명 ex03_03_in64.c 파일만 빌드 시켰는데 ex03_01_variable.c 파일은 왜 같이 빌드 되는 걸까? 

해결방법

CMakeList.txt

```
cmake_minimum_required(VERSION 3.17)
project(ex03 C)

set(CMAKE_C_STANDARD 99)

add_executable(ex03 run/ex03_01_variable.c run/ex03_03_int64.c)
```

CMakeList 파일에서

add_executable(ex03 run/ex03_01_variable.c run/ex03_03_int64.c) 에서

실행할 파일명 제외 나머지 다 삭제한다.

```
cmake_minimum_required(VERSION 3.17)
project(ex03 C)

set(CMAKE_C_STANDARD 99)

add_executable(ex03 run/ex03_03_int64.c)
```

확실히 빌드하니깐 이제 된다. 이 간단한 걸 왜 난 뻘 짓 하고 있었을까...?

# git hub 연동

vcs > git > remote > git 추가

commit 

push

## **Branch**

- 별다른 설정을 하지 않았지만 master branch에서 계속 작업을 하고 있었다.
- **master branch**란 모든 repository의 기본 혹은 메인이라고 보면 된다. 일반적으로 repo의 모든 것은 master branch를 중심으로 행해진다.
- 큰 프로젝트든 개인 프로젝트이든 최종 결과물은 master branch에 있기 마련이며, master branch로부터 파생된 다른 branch들로부터 수정 사항을 만든 다음 master에 병합하는 과정을 거치게 된다.
- 여러 사람이 협업할 경우 각자 따로 브랜치를 쓰게 되며, 각 브랜치에서는 새로운 기능을 개발하거나 버그 수정이 이루어진다. 물론 완료되면 master branch에 병합되게 된다.
