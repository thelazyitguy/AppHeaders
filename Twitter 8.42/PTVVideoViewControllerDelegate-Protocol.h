//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVVideoViewController;

@protocol PTVVideoViewControllerDelegate <NSObject>

@optional
- (void)videoViewControllerDidUpdateVideoDimensions:(PTVVideoViewController *)arg1;
- (void)videoViewControllerDidShowVideoView:(PTVVideoViewController *)arg1;
- (void)videoViewControllerWillShowVideoView:(PTVVideoViewController *)arg1;
@end

