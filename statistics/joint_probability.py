import math


def expectedValue_x():
    global E_x
    E_x = (1 * 0.12) + (2 * .20) + (1 * 0.09) + (2 * .15) + (1 * 0.09) + (2 * .15)
    print(E_x)

def expectedValue_y():
    global E_y
    E_y = (3 * 0.08) + (4 * .12) + (5 * 0.20) + (3 * .12) + (4 * .09) + (5 * 0.09) + (3 * 0.20) + (4 * .15) + (5 * .15)
    print(E_y)

def randomVariable_x():
    global var_x
    var_x = (0 - E_x)**2 * .08 + (1 - E_x)**2 * .12 + (2 - E_x)**2 * .20 + (0 - E_x)**2 * .06 + (1 - E_x)**2 * .09 + (2 - E_x)**2 * .15 + (0 - E_x)**2 * .06 + (1 - E_x)**2 * .09 + (2 - E_x)**2 * .12
    print(var_x)

def randomVariable_y():
    global var_y
    var_y = (3 - E_y)**2 * .08 + (4 - E_y)**2 * .06 + (5 - E_y)**2 * .06 + (3 - E_y)**2 * .12 + (4 - E_y)**2 * .09 + (5 - E_y)**2 * .09 + (3 - E_y)**2 * .20 + (4 - E_y)**2 * .15 + (5 - E_y)**2 * .15
    print(var_y)

def expectedValue_product():
    global productvalue
    productvalue = (3 * .12 + 4 * .09 + 5 * .15) + (6 * .20 + 8 * .15 + 10 * .15)
    print(productvalue)

def covarianceValue():
    global COV_xy
    COV_xy = productvalue - (E_x * E_y)
    print(COV_xy)

def correlationValue():
    global CORR_xy
    CORR_xy = COV_xy / (math.sqrt(var_x) * math.sqrt(var_y))
    print(CORR_xy)


expectedValue_x()
expectedValue_y()
randomVariable_x()
randomVariable_y()
expectedValue_product()
covarianceValue()
correlationValue()

print("The condition for independence does not hold for this table, because covariance doesn't equal 0")
