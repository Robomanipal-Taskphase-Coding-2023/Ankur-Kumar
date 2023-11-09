import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

df = pd.read_csv('linear_regression_dataset.csv')
print(df)
x = df['APRDRG']
y = df['TOTCHG']

def gradient_descent(x,y):
    m_curr = b_curr = 0
    iterations = 3000
    n = len(x)
    learning_rate = 0.01

    for i in range(iterations):
        y_predicted = m_curr * x + b_curr
        cost = (1/n) * sum([val **2 for val in (y - y_predicted)])
        md = -(2/n) * sum(x * (y - y_predicted))
        bd = -(2/n) * sum(y - y_predicted)
        m_curr = m_curr - learning_rate * md
        b_curr = b_curr - learning_rate * md
        print ("m= {}, b= {}, cost= {}, iterations= {}".format(m_curr, b_curr, cost, i))

gradient_descent(x,y)

















