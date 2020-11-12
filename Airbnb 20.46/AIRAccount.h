//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRUser, NSArray, NSString, NSURL;

@interface AIRAccount : AIRModel
{
    _Bool _accountExists;
    _Bool _isComplete;
    _Bool _isVRPlatformPoweredHost;
    _Bool _isHotelHost;
    AIRUser *_user;
    NSString *_locale;
    NSString *_currency;
    NSArray *_badges;
    NSString *_firstName;
    NSURL *_pictureURL;
    NSArray *_requiredSteps;
    NSArray *_pendingActions;
    NSString *_rawExistingAccountMethod;
}

+ (id)idAttributeName;
+ (id)accountFromResponse:(id)arg1 error:(id *)arg2;
+ (id)_verificationCodeRequestWithParams:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_validateAccountWithMethod:(long long)arg1 usernameParams:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_validateVerificationCode:(id)arg1 phone:(id)arg2 feature:(id)arg3 session:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)validateCreateAccountVerificationCode:(id)arg1 phone:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)sendCreateAccountVerificationCodeToPhone:(id)arg1 session:(id)arg2 isIntensiveVerificationCode:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)sendVerificationCodeToPhone:(id)arg1 with:(id)arg2 session:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)validateAccountWithPhone:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)validateAccountWithEmail:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)customTransformers;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rawExistingAccountMethod; // @synthesize rawExistingAccountMethod=_rawExistingAccountMethod;
@property(readonly, copy, nonatomic) NSArray *pendingActions; // @synthesize pendingActions=_pendingActions;
@property(readonly, copy, nonatomic) NSArray *requiredSteps; // @synthesize requiredSteps=_requiredSteps;
@property(readonly, nonatomic) _Bool isHotelHost; // @synthesize isHotelHost=_isHotelHost;
@property(readonly, nonatomic) _Bool isVRPlatformPoweredHost; // @synthesize isVRPlatformPoweredHost=_isVRPlatformPoweredHost;
@property(readonly, nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(readonly, copy, nonatomic) NSURL *pictureURL; // @synthesize pictureURL=_pictureURL;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) _Bool accountExists; // @synthesize accountExists=_accountExists;
@property(readonly, copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) AIRUser *user; // @synthesize user=_user;
- (long long)pendingActionFromString:(id)arg1;
- (long long)requiredStepFromString:(id)arg1;
- (_Bool)hasOutstandingPendingAction:(long long)arg1;
- (_Bool)hasOutstandingRequiredStep:(long long)arg1;
@property(readonly, nonatomic) long long existingAccountMethod;
- (id)updateAccountWithResponseToCommunityCommitment:(_Bool)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
