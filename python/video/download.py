#!/usr/bin/env python
# -*- coding:utf-8 -*-
print "enter ..."
import urllib
import urllib2
import re #正则
def getVideo(page):
    req = urllib2.Request(' https://www.bilibili.com/video/av18586085/?p=%s' %page)  #请求页面
    # you-get -i https://www.bilibili.com/video/av18586085/?p=%page
    print "找到视频之前"
    req.add_header("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/55.0.2883.87 Safari/537.36")
    html = urllib2.urlopen(req).read()
    reg = r'data-mp4="(.*?)"'  #正则表达式
    for i in re.findall(reg, html):  #找到视频地址
       filename = i.split("/")[-1]   #视频文件名
       print "正在下载%s" %filename
       urllib.urlretrieve(i, "down_mp4/%s" %filename)  #下载到与py文件同目录下的down_mp4文件夹
print "解析1-5页"
for i in range(1,5):  #以下载前20页为例
    getVideo(i)
    print "finish a video"
