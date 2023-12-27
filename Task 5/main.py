import cv2
import cvzone
from  cvzone.ColorModule import  ColorFinder

# Initialize the Video
cap = cv2.VideoCapture('Videos/vid (1).mp4')

# Create the color Finder object
myColorFinder = ColorFinder(True)
hsvVals = {'hmin' :0, 'smin':84 , 'vmin':59, 'hmax':18, 'smax':255, 'vmax':255}
while True:
     # Grab the image
     # success, img = cap.read()
     img =  cv2.imread("Ball.png")
     img = img[0:900, :]    # Cropping the image to get a single color for ball and not confuse it with other

    # Find the Color Ball
     imgColor, max = myColorFinder.update(img,hsvVals)

     # Display
     img = cv2.resize(img, (0,0), None, 0.7,0.7)
     cv2.imshow("Image", img)
     cv2.imshow("Image", imgColor)
     cv2.waitKey(50)

