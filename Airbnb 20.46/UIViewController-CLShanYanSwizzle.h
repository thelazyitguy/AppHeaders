//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CLShanYanSwizzleToken;

@interface UIViewController (CLShanYanSwizzle)
+ (void)load;
+ (int)cl_shanYan_didFailureSwizzle;
- (id)cl_addDeallocBlockParasite;
- (void)cl_secondGetPhoneAndTokenWithButton:(id)arg1 BgView:(id)arg2 Activity:(id)arg3;
- (void)hand_cl_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cl_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)startClPresentViewControllerSwizzle:(Class)arg1;
@property(retain, nonatomic) CLShanYanSwizzleToken *clShanYanSwizzleToken;
@end
