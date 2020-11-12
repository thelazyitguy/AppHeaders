//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/NSObject-Protocol.h>

@class NSArray, NSError, NSObject, NSString, SCServiceCloud, UIViewController;
@protocol UIViewControllerTransitioningDelegate;

@protocol SCServiceCloudDelegate <NSObject>

@optional
- (void)serviceCloud:(SCServiceCloud *)arg1 didLogMessage:(NSArray *)arg2 type:(NSString *)arg3;
- (_Bool)serviceCloud:(SCServiceCloud *)arg1 authenticationFailed:(NSError *)arg2 forServiceType:(NSString *)arg3;
- (_Bool)serviceCloud:(SCServiceCloud *)arg1 shouldAuthenticateServiceType:(NSString *)arg2 completion:(void (^)(SCSAuthenticationSettings *))arg3;
- (void)serviceCloud:(SCServiceCloud *)arg1 serviceAuthenticationFailedWithError:(NSError *)arg2;
- (_Bool)serviceCloud:(SCServiceCloud *)arg1 shouldAuthenticateService:(NSString *)arg2 completion:(void (^)(SFUserAccount *))arg3;
- (_Bool)serviceCloud:(SCServiceCloud *)arg1 shouldShowActionWithName:(NSString *)arg2;
- (NSObject<UIViewControllerTransitioningDelegate> *)serviceCloud:(SCServiceCloud *)arg1 transitioningDelegateForPresentedController:(UIViewController *)arg2 presentingController:(UIViewController *)arg3;
- (NSObject<UIViewControllerTransitioningDelegate> *)serviceCloud:(SCServiceCloud *)arg1 transitioningDelegateForViewController:(UIViewController *)arg2;
- (void)serviceCloud:(SCServiceCloud *)arg1 didDisplayViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)serviceCloud:(SCServiceCloud *)arg1 willDisplayViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end
