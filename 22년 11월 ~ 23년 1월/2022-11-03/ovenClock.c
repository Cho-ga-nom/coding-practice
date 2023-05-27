/**
 * 백준 브론즈 3 문제
 * 오븐 시간 구하기
 */

#include <stdio.h>

int main()
{
  int hour, minute, cookTime, temp; // 현재 시간, 분, 요리하는데 걸리는 시간, 연산 중간값을 저장할 변수
  int resultHour = 0;               // 결과값 저장할 변수들
  int resultMinute = 0;

  scanf("%d %d", &hour, &minute);
  scanf("%d", &cookTime);

  if (cookTime >= (60 - minute)) // 요리 시간이 다음 정각까지 남은 시간보다 오래 걸릴 경우
  {
    resultMinute = minute + cookTime; // 일단 분 단위로 더하기
    temp = resultMinute / 60;         // 60분으로 나눔
    resultHour = hour + temp;         // 현재 시간에 위의 값을 더함
    resultMinute -= temp * 60;        // 더한 시간만큼 분에서 뺌
  }
  else // 다음 정각 전에 요리가 끝날 경우
  {
    resultHour = hour;
    resultMinute = minute + cookTime;
  }

  if (resultHour > 23) // 24시가 넘으면 00시로 초기화
  {
    resultHour -= 24;
  }

  printf("%d %d", resultHour, resultMinute);
  return 0;
}