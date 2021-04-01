# Kakao_tech_test_sol_practice
This is the repository to practice kakao_talk company's coding exam

#Kor
데이터 처리 전문가가 되고 싶은 “어피치”는 문자열을 압축하는 방법에 대해 공부를 하고 있습니다. 최근에 대량의 데이터 처리를 위한 간단한 비손실 압축 방법에 대해 공부를 하고 있는데, 문자열에서 같은 값이 연속해서 나타나는 것을 그 문자의 개수와 반복되는 값으로 표현하여 더 짧은 문자열로 줄여서 표현하는 알고리즘을 공부하고 있습니다. 간단한 예로 “aabbaccc”의 경우 “2a2ba3c”(문자가 반복되지 않아 한번만 나타난 경우 1은 생략함)와 같이 표현할 수 있는데, 이러한 방식은 반복되는 문자가 적은 경우 압축률이 낮다는 단점이 있습니다. 예를 들면, “abcabcdede”와 같은 문자열은 전혀 압축되지 않습니다. “어피치”는 이러한 단점을 해결하기 위해 문자열을 1개 이상의 단위로 잘라서 압축하여 더 짧은 문자열로 표현할 수 있는지 방법을 찾아보려고 합니다.

예를 들어, “ababcdcdababcdcd”의 경우 문자를 1개 단위로 자르면 전혀 압축되지 않지만, 2개 단위로 잘라서 압축한다면 “2ab2cd2ab2cd”로 표현할 수 있습니다. 다른 방법으로 8개 단위로 잘라서 압축한다면 “2ababcdcd”로 표현할 수 있으며, 이때가 가장 짧게 압축하여 표현할 수 있는 방법입니다.

다른 예로, “abcabcdede”와 같은 경우, 문자를 2개 단위로 잘라서 압축하면 “abcabc2de”가 되지만, 3개 단위로 자른다면 “2abcdede”가 되어 3개 단위가 가장 짧은 압축 방법이 됩니다. 이때 3개 단위로 자르고 마지막에 남는 문자열은 그대로 붙여주면 됩니다.

압축할 문자열 s가 매개변수로 주어질 때, 위에 설명한 방법으로 1개 이상 단위로 문자열을 잘라 압축하여 표현한 문자열 중 가장 짧은 것의 길이를 return 하도록 solution 함수를 완성해주세요.

#Eng
“A,” who wants to become a data processing expert, is studying how to compress strings. Recently, A is studying a simple lossless compression method for processing a large amount of data. A is studying an algorithm that expresses the same value consecutively in a string as the number of characters and repeated values, and reduces it to shorter strings. For a simple example, “aabbaccc” can be expressed as “2a2ba3c” (1 is omitted if the character is not repeated and appears only once). This method has the disadvantage that the compression rate is low when there are few repeated characters. For example, strings like “abcabcdede” are not compressed at all. To solve this shortcoming, “Apeach” tries to find a way to see if a string can be truncated and compressed into more than one unit and expressed as a shorter string.

For example, in the case of “ababcdcdababcdcd”, if a character is cut into one unit, it is not compressed at all, but if it is cut into two units and compressed, it can be expressed as “2ab2cd2ab2cd”. If you cut it into 8 units and compress it in another way, it can be expressed as “2ababcdcd”, which is the shortest way to express it.

As another example, in the case of “abcabcdede”, if the character is cut into two units and compressed, it becomes “abcabc2de”, but if it is cut into three units, it becomes “2abcdede” and 3 units is the shortest compression method. At this time, you can cut it in units of 3 and paste the remaining string as it is.

When the string s to be compressed is given as a parameter, complete the solution function to return the length of the shortest string expressed by cutting the string in units of one or more in the manner described above.
