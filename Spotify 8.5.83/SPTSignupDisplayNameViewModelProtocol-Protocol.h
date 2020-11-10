//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTLoginSplitEmailSignupViewLogger, SPTSignupTermsAndPolicyViewModel;
@protocol SPTSignupDisplayNameViewModelDelegate;

@protocol SPTSignupDisplayNameViewModelProtocol <NSObject>
@property(readonly, nonatomic) SPTLoginSplitEmailSignupViewLogger *logger;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyViewModel *termsAndPolicyViewModel;
@property(nonatomic) __weak id <SPTSignupDisplayNameViewModelDelegate> delegate;
- (_Bool)isSouthKorea;
- (NSString *)requiredLabelText;
- (NSString *)displayNameSuggestion;
- (NSString *)createButtonLoadingText;
- (NSString *)createButtonText;
- (NSString *)displayNameDisclosureText;
- (NSString *)displayNameLabelText;
- (NSString *)titleLabelText;
- (void)textFieldUpdated:(NSString *)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)createUserAndPresentMainScreen;
@end
