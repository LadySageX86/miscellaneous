# a quick pygame starter file
import pygame

if __name__ == "__main__":
    running = True
    pygame.init()
    size = (640, 480)
    screen = pygame.display.set_mode(size)
    color = (0,255,255)

while(running):
    for event in pygame.event.get():
        if event.type == pygame.QUIT: 
            running = False
        elif event.type == pygame.KEYDOWN:
            color = (255,0,255)
        elif event.type == pygame.KEYUP:
            color = (0,255,255)

    screen.fill(color)
    pygame.display.flip()

pygame.quit()
exit()
