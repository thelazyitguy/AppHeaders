//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAEAGLLayer, EAGLContext;
@protocol GVRGlViewDelegate;

@interface GVRGlView : UIView
{
    CAEAGLLayer *_layer;
    int _framebufferWidth;
    int _framebufferHeight;
    unsigned int _defaultFramebuffer;
    unsigned int _colorRenderbuffer;
    unsigned int _depthStencilRenderbuffer;
    _Bool _needsResize;
    EAGLContext *_context;
    id <GVRGlViewDelegate> _delegate;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GVRGlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void)resizeFramebuffer;
- (void)deleteFramebuffer;
- (void)createFramebuffer;
@property(readonly, nonatomic) struct CGRect layerBounds;
- (_Bool)presentFramebuffer;
- (void)setFramebufferAsCurrent;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

