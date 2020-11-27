#version 460


in vec3 vertexIn;
in vec3 colorIn;
out vec3 colorOut;

//uniform mat4 model;
//uniform mat4 view;

void main(void)
{
    // Outputting the same color as 
    colorOut = colorIn;

    gl_Position = vec4(vertexIn, 1.0);
}