## C 프로그램은 함수로 시작해서 함수로 끝난다
-   프로그램이 실행되자마자 컴퓨터는 main이라는 이름의 함수를 찾아서 호출을 한다.
- 따라서, C언어로 구현된 모든 프로그램에는 main이라는 이름의 함수가 정의되어야 한다.
</br>

## 표준 라이브러리와 printf 함수
- 함수 호출문에서 소괄호 안에는 전달할 인자정보를 표현한다
    - printf("Hello world! \n);
- printf라는 함수를 정의하지 않았는데 어떻게 호출한 것일까?
- 기본적으로 제공되는 함수를 가리켜 '표준함수'라 한다.
- 표준함수들의 모임을 '표준 라이브러리'라 한다.
</br>

## return의 두 가지 의미
- 함수를 호출한 영역으로 값을 반환
- 현재 실행중인 함수 종료 
</br>

## main함수의 return문
- main함수는 프로그램이 시작되면 자동으로 호출되는 함수다
- 호출의 주체는 운영체제다
- 따라서, return 값은 운영체제에게 전달된다.
- 일반적으로 0은 프로그램의 정상적인 종료 상황에서 리턴하는 값이다.
- 반면 비정상적인 상황으로 인한 종료 시, 0이 아닌 값을 리턴한다.
</br>

