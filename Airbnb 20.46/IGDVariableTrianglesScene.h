//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGDScene.h"

@interface IGDVariableTrianglesScene : IGDScene
{
    basic_string_90719d97 _vertexShader;
    basic_string_90719d97 _fragmentShader;
    vector_ebb6ef3e _shaderVariables;
    float *_vertices;
    float *_colors;
    int _vertexCount;
    _Bool _useBlending;
    _Bool _useDepthDetection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanupScene;
- (_Bool)bindShaderVariablesToProgram:(unsigned int)arg1;
- (const char *)getFragmentShader;
- (const char *)getVertexShader;
- (_Bool)renderWithProgram:(unsigned int)arg1;
-     // Error parsing type: B24@0:8r^{IOSGuassoSceneDescriptor=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedField<float>=ii^v}{RepeatedField<float>=ii^v}^{IOSGuassoVariableSceneDescriptor}ii}16, name: processSceneDescriptor:
- (void)dealloc;

@end

