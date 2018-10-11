#!/usr/bin/env python3
# coding=utf-8
import requests
from bs4 import BeautifulSoup
import urllib.request
import re

print("============================================")
# r=requests.get("http://python123.io/ws/demo.html")
# soup=BeautifulSoup(r.text,"lxml")
# print(soup.prettify())
# print(soup.title.string)



#如果是网址，可以用这个办法来读取网页
html_doc = "https://www.bilibili.com/video/av18586085/?p=1"
req = urllib.request.Request(html_doc)  
webpage = urllib.request.urlopen(req)  
html = webpage.read()
# print(html.prettify())
#can not get webpage as you like


jsonurl = requests.get("https://www.bilibili.com/video/av18586085/?p=1")
soup = BeautifulSoup(jsonurl.text,"lxml")
# print(data.prettify())

# 类名为xxx而且文本内容为hahaha的div
# for k in soup.find_all('ul',class_='clearfix'):
    # print(k)

print("============================================div")
# for k in soup.find_all('div',class_="player-box"):
    # print(k)

print("============================================<a>")
# for k in soup.find_all('a'):
    # print(k)

print("==========================================href")
#re.compile来匹配需要抓取的href地址
# for k in  soup.find_all(href=re.compile("video")):
    # print(k)


url= 'http://www.baidu.com'
req = urllib.request.Request(url)
req.add_header('User-Agent','Mozilla/5.0 (Windows NT 6.1; WOW64; rv:53.0) Gecko/20100101 Firefox/53.0')
data = urllib.request.urlopen(req).read()
print(data)
