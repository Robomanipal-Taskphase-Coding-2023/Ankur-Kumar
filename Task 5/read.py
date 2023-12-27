import cv2 as cv

img = cv.imread('Wallpapers/the amazing spider-man_2.jpg')

# cv.imshow('the amazing spider-man_2', img)          # For reading images.

# cv.waitKey(0)

# For reading videos
# It is done frame by frame

capture = cv.VideoCapture('Videos/dog.mp4')

while True:
    isTrue, frame = capture.read()
    cv.imshow('Video', frame)

    if cv.waitKey(20) & 0xFF==ord('d'):                      # if letter d is pressed stop video
        break

capture.release()
cv.destroyAllWindows()

