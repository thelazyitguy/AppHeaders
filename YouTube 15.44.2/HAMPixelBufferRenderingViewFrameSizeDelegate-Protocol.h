//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol HAMPixelBufferRenderingView;

@protocol HAMPixelBufferRenderingViewFrameSizeDelegate <NSObject>
- (void)pixelBufferRenderingView:(id <HAMPixelBufferRenderingView>)arg1 renderedSizeDidChange:(struct CGSize)arg2;
- (void)pixelBufferRenderingView:(id <HAMPixelBufferRenderingView>)arg1 pixelBufferSizeDidChange:(struct CGSize)arg2;
@end

