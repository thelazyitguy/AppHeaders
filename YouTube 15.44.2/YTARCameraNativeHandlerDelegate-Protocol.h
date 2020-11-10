//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@protocol YTARCameraNativeHandlerDelegate <NSObject>
- (void)startARForward;
- (void)startCamera;
- (void)captureEnded;
- (void)captureStartWithBannerTitle:(NSString *)arg1 bannerDescription:(NSString *)arg2 iconURL:(NSURL *)arg3;
- (void)openLink:(NSString *)arg1;
- (void)logInteraction:(int)arg1 withEffectID:(NSString *)arg2 withActiveEffects:(NSArray *)arg3;
- (void)setEffectInputs:(NSDictionary *)arg1;
- (void)captureImageWithBannerTitle:(NSString *)arg1 bannerDescription:(NSString *)arg2 iconURL:(NSURL *)arg3;
@end
