//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class UIViewController, VKError;

@protocol VKSdkUIDelegate <NSObject>
- (void)vkSdkNeedCaptchaEnter:(VKError *)arg1;
- (void)vkSdkShouldPresentViewController:(UIViewController *)arg1;

@optional
- (void)vkSdkDidDismissViewController:(UIViewController *)arg1;
- (void)vkSdkWillDismissViewController:(UIViewController *)arg1;
@end
