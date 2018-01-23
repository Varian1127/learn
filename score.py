#!/usr/bin/python

import random
import logging
logging.getLogger().setLevel(logging.INFO)


names=[]
scores={}

def add_to_dict(name):
    scores[name]= {"language and literature":random.randint(1,100), "math": random.randint(1, 100), "english": random.randint(1, 100)}

def add_to_list(number):
    numbers=str(number)+"#"
    names.append(numbers)

logging.info("Studentnumber\tLanguage and literature\tMath\tEnglish")

for looper in range(1, 37):
    add_to_list(looper)

for studentnumber in names:
    add_to_dict(studentnumber)

for i in names:
    ll = scores[i]['language and literature']
    ma = scores[i]['math']
    en = scores[i]['english']
    logging.info(i+"\t\t"+str(ll)+'\t\t\t'+str(ma)+'\t'+str(en))