#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# File              : B.py
# Author            : Bao To Hoai
# Date              : 02.11.2020 19:51:28 UTC+7
# Last Modified Date: 02.11.2020 20:07:57 UTC+7
# Last Modified By  : Bao To Hoai

s1, s2 = input(), input()
lst1, lst2, ans = [], [], 0
s = "abcdefghijklmnopqrstuvwxyz"
for ch in s:
    lst1.append(s1.count(ch))
    lst2.append(s2.count(ch))
for i in range(26):
    if (lst2[i] > 0 and lst1[i] == 0):
        print("-1")
        exit()
    if (lst2[i] > 0 and lst1[i] > 0):
        ans += min(lst1[i], lst2[i])
print(ans)
