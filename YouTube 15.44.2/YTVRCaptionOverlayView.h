//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTFormat3CaptionView.h>

@class YTGLPixelBufferNode;

@interface YTVRCaptionOverlayView : YTFormat3CaptionView
{
    YTGLPixelBufferNode *_canvasNode;
}

- (void).cxx_destruct;
@property(nonatomic) __weak YTGLPixelBufferNode *canvasNode; // @synthesize canvasNode=_canvasNode;
- (void)setCaptionsBottomPadding:(double)arg1;
- (void)layoutSubviews;

@end

