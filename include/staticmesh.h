#ifndef H_STATICMESH
#define H_STATICMESH

#include "gameobject.h"

#ifndef H_GL
#define H_GL
#include <GL/glew.h>
#endif


class StaticMesh: public Component
{
private:
    float *m_points;
    size_t m_numPoints;

    GLuint m_vbo;
    GLuint m_vao;

    GLuint m_vs;
    GLuint m_fs;
    GLuint m_shaderProgram;

public:
    StaticMesh();
    ~StaticMesh();

    virtual void update(GameObject &gameObject);
    virtual void render(const GameObject &gameObject);
};

#endif
