from conan import ConanFile

class Recipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps", "VirtualRunEnv"

    def layout(self):
        self.folders.generators = "conan"

    def requirements(self):
        self.requires("fmt/10.2.1")
        self.requires("glfw/3.4")
        self.requires("opengl/system")
        self.requires("glew/2.2.0")

    def build_requirements(self):
        self.test_requires("gtest/1.14.0")
