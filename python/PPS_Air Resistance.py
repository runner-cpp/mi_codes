import math
import matplotlib.pyplot as plt
import numpy as np

class Projectile:
    def __init__(self, velocity, angle_deg, drag = 0.0):    # drag = air resistance default at 0 (vacuum)
        self.angle_rad = math.radians(angle_deg)            # Convert Degrees to Radians
        self.Vx = velocity * math.cos(self.angle_rad)
        self.Vy = velocity * math.sin(self.angle_rad)
        self.gravity = 9.81
        self.drag = drag                                    # save the inputed drag value

    def get_flight_time(self):
        return (2 * self.Vy)/ self.gravity
    
    def get_trajectory(self):
        # List to store
        t_values = [0]
        x_values = [0]
        y_values = [0]

        dt = 0.1        # step size / smoothness of the line
        t = 0
        x = 0
        y = 0

        current_Vx = self.Vx
        current_Vy = self.Vy

        while y >= 0:            # this will keep flying until we hit the ground
            
            # Calculate Drag Force
            acc_x = -(current_Vx * self.drag)
            acc_y = -self.gravity - (current_Vy * self.drag)
            
            # Update Velocity
            current_Vx += acc_x * dt
            current_Vy += acc_y * dt

            # Update Position
            x += current_Vx * dt
            y += current_Vy * dt
            t += dt

            # Save data
            t_values.append(t)
            x_values.append(x)
            y_values.append(y)
            
        return t_values, x_values, y_values
    
# Test Zone

velocity = float(input("Enter Launch Velocity (m/s): "))
angle = float(input("Enter Launch Angle (deg): "))
drag = float(input("Enter Air Resistance (0.0 to 0.2): "))

shot = Projectile(velocity, angle, drag)

t_data, x_data, y_data = shot.get_trajectory()

plt.plot(x_data, y_data)                                    # Plot the graph
plt.title(f"Simultaion: {velocity}m/s at {angle}deg")       # title of the graph
plt.xlabel("Distance (m)")
plt.ylabel("Height (m)")
plt.axis('equal')                                           # to make it physically accurate (1 meter up x 1 meter wide)
plt.grid(True)                                              # adds grid
plt.show()                                                  # to show the graph

