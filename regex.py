import regex

url="https://www.google.com"
regex1=regex.search("((http||https)://)(www.).*\.[a-z]{1,3}")

if regex1 in url:
    print("True")
else:
    print("False")