//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GHKGLReadable-Protocol.h"

@class NSString;

@interface GHKGLCVImageBuffer : NSObject <GHKGLReadable>
{
    unsigned int _width;
    unsigned int _height;
    struct __CVBuffer *_imageBufferRef;
    struct __CVBuffer *_textureRef;
    struct __CVOpenGLESTextureCache *_textureCacheRef;
}

@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCacheRef; // @synthesize textureCacheRef=_textureCacheRef;
@property(readonly, nonatomic) struct __CVBuffer *textureRef; // @synthesize textureRef=_textureRef;
@property(readonly, nonatomic) struct __CVBuffer *imageBufferRef; // @synthesize imageBufferRef=_imageBufferRef;
@property(readonly, nonatomic) unsigned int height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned int width; // @synthesize width=_width;
- (_Bool)createGLTexture;
- (void)bindAsTexture:(unsigned int)arg1;
@property(copy, nonatomic) NSString *debugLabel;
@property(readonly, nonatomic) unsigned int glTextureName;
- (void)tearDown;
@property(readonly, nonatomic) _Bool isFlipped;
- (void)dealloc;
- (id)initWithImageBufferRef:(struct __CVBuffer *)arg1 textureCacheRef:(struct __CVOpenGLESTextureCache *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
