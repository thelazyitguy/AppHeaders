//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, UIImage, UIView, UIViewController, _TtC11FeatureAPIs23ConnectNowConfiguration;
@protocol _TtP11FeatureAPIs19CreditCardEntryView_, _TtP11FeatureAPIs20WMCreditCardDelegate_, _TtP11FeatureAPIs23CreditCardEntryDelegate_, _TtP11FeatureAPIs25WalmartCreditCardProvider_;

@protocol _TtP11FeatureAPIs20WalmartCreditCardAPI_
- (UIImage *)getImageWithNamed:(NSString *)arg1;
- (void)unregisterListener:(id <_TtP11FeatureAPIs20WMCreditCardDelegate_>)arg1;
- (void)registerListener:(id <_TtP11FeatureAPIs20WMCreditCardDelegate_>)arg1;
- (void)navigateToSingleAccountStatusSceneWithPaymentPreferenceId:(NSString *)arg1;
- (void)presentConnectNowSceneWithConfiguration:(_TtC11FeatureAPIs23ConnectNowConfiguration *)arg1;
- (void)navigateToLearnMoreScene;
- (void)navigateToAppropriateSceneForUser;
- (void)navigateToApplicationLandingPageSceneWithPresentModally:(_Bool)arg1 on:(UIViewController *)arg2 referrer:(NSString *)arg3;
- (UIViewController *)singleAccountStatusSceneWithPaymentPreferenceId:(NSString *)arg1;
- (UIView<_TtP11FeatureAPIs19CreditCardEntryView_> *)creditCardEntryViewWithDelegate:(id <_TtP11FeatureAPIs23CreditCardEntryDelegate_>)arg1;
- (UIViewController *)animatedCreditCardEntryViewWithDelegate:(id <_TtP11FeatureAPIs23CreditCardEntryDelegate_>)arg1;
- (UIViewController *)connectNowSceneWithConfiguration:(_TtC11FeatureAPIs23ConnectNowConfiguration *)arg1;
- (UIViewController *)learnMoreScene;
- (UIViewController *)contextuallyAwareScene;
@property(nonatomic, readonly) id <_TtP11FeatureAPIs25WalmartCreditCardProvider_> provider;
@property(nonatomic, readonly) _Bool isESBEnabled;
@property(nonatomic, readonly) _Bool annotateAsNew;
@property(nonatomic, readonly) _Bool isWalmartCapitalOnePlusCardEnabled;
@property(nonatomic, readonly) _Bool isWalmartCapitalOneCardEnabled;
@end
