//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CorrelationID, NSString, UIViewController;

@protocol _TtP7Economy24EconomyExternalUIFactory_
- (void)presentLogInRequestViewControllerInto:(UIViewController *)arg1 correlationID:(CorrelationID *)arg2;
- (UIViewController *)makePremiumMarketingViewControllerWithCorrelationID:(CorrelationID *)arg1;
- (UIViewController *)makeUserProfileViewControllerWithUsername:(NSString *)arg1 correlationID:(CorrelationID *)arg2;
@end

