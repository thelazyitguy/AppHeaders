//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIViewController;
@protocol MDXAutoplayViewProtocol;

@protocol MDXWatchMiniBarViewControllerProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType verifyDismissMiniBarWhileCasting;
- (void)updateViewWithDismissAutoplayButtonImage:(UIImage *)arg1 accessibilityId:(NSString *)arg2 accessibilityLabel:(NSString *)arg3;
- (UIViewController<MDXAutoplayViewProtocol> *)watchMiniBarView;
- (void)resetMiniBarForMDX;
- (void)updateVideoDetailsWithMDXByline:(NSString *)arg1;
@end
