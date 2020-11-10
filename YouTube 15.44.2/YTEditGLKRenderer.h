//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/GLKViewDelegate-Protocol.h>

@class DrishtiGLViewRenderer, GLKView, NSString;

@interface YTEditGLKRenderer : NSObject <GLKViewDelegate>
{
    DrishtiGLViewRenderer *_drishtiRenderer;
    GLKView *_glView;
    long long _contentMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) __weak GLKView *glView; // @synthesize glView=_glView;
- (void)renderNextPixelBuffer:(struct __CVBuffer *)arg1;
@property(nonatomic) _Bool retainsLastPixelBuffer;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

