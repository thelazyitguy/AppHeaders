//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ComposeController;

@protocol T1ComposeControllerDelegate <NSObject>

@optional
- (NSString * (^)(void))windowFrameStringBlockForComposeController:(T1ComposeController *)arg1;
- (void)composeControllerDidEndSession:(T1ComposeController *)arg1;
- (void)composeControllerDidBeginSession:(T1ComposeController *)arg1;
@end

