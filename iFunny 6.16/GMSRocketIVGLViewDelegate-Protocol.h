//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class GMSMarker, GMSRocketIVGLView;

@protocol GMSRocketIVGLViewDelegate <NSObject>

@optional
- (_Bool)rocketIVGLView:(GMSRocketIVGLView *)arg1 didTapMarker:(GMSMarker *)arg2;
- (void)rocketIVGLViewDidFinishRendering:(GMSRocketIVGLView *)arg1;
- (void)rocketIVGLViewDidStartRendering:(GMSRocketIVGLView *)arg1;
@end

