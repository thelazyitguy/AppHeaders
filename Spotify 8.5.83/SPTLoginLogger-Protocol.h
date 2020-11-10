//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, SPTLoginLoggerUserAuthEventAttributes;

@protocol SPTLoginLogger <NSObject>
- (void)trackMLComponentWithName:(NSString *)arg1;
- (void)trackFeatureFlagFallbackWithFlagsAndFallbackState:(NSDictionary *)arg1;
- (void)trackFeatureFlagExposureWithEnabledFlags:(NSArray *)arg1 disabledFlags:(NSArray *)arg2 fromCache:(_Bool)arg3;
- (void)userDidCompleteRequestWithType:(NSString *)arg1 error:(NSError *)arg2 attemptId:(NSString *)arg3 result:(NSString *)arg4;
- (void)userDidCompleteRequestWithType:(NSString *)arg1 error:(NSError *)arg2 attemptId:(NSString *)arg3;
- (NSString *)userDidStartRequestWithType:(NSString *)arg1;
- (void)trackGuestAccountCreationFailedWithError:(long long)arg1;
- (void)trackGuestAccountCreated;
- (void)trackForcedLogoutWithError:(long long)arg1;
- (void)trackExplicitLogout;
- (void)userDidAttemptLoginWithSuccess:(_Bool)arg1 usingEmail:(_Bool)arg2 credentialsIdentifier:(long long)arg3;
- (void)trackGenericEventWithName:(NSString *)arg1 parameters:(NSDictionary *)arg2;
- (void)trackGenericEventWithName:(NSString *)arg1;
- (void)userIsAboutToSeeLoginFlow;
- (void)userDidRegister;
- (void)userDidAuthenticateWithUserAuthEventAttributes:(SPTLoginLoggerUserAuthEventAttributes *)arg1;
- (void)loginLayoutReceived:(NSString *)arg1 layout:(NSString *)arg2;
- (void)trackKeychainEventWithIdentifier:(NSString *)arg1;
- (void)userExperiencedError:(NSString *)arg1 withCode:(long long)arg2 onScreen:(NSString *)arg3;
- (void)userExperiencedError:(NSString *)arg1 withCode:(long long)arg2 onField:(NSString *)arg3 onScreen:(NSString *)arg4;
- (void)userInteractedWithField:(NSString *)arg1 onScreen:(NSString *)arg2 inDialog:(NSString *)arg3;
- (void)userInteractedWithField:(NSString *)arg1 onScreen:(NSString *)arg2;
- (void)userClickedButton:(NSString *)arg1 onScreen:(NSString *)arg2 inDialog:(NSString *)arg3;
- (void)userClickedButton:(NSString *)arg1 onScreen:(NSString *)arg2;
- (void)userDidSeeDialog:(NSString *)arg1 onScreen:(NSString *)arg2;
- (void)userDidSeeScreen:(NSString *)arg1;
@end
