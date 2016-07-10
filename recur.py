import turtle
def tree(branchLe,tn):
if branchLe > 5:
tn.forward(branchLe)
tn.right(20)
tree(branchLe-15,tn)
tn.left(40)
tree(branchLe-15,tn)
tn.right(20)
tn.backward(branchLe)
def main():
tn = turtle.Turtle()
myWin = turtle.Screen()
tn.left(90)
tn.up()
tn.backward(100)
tn.down()
tn.colo r("green")
tree(75,t)
myWin.exitonclick()
main()
