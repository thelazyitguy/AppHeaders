//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIProfileEntity, NSNumber, NSString, PlaybackRequest;
@protocol _TtP8ArgoCore15ACFSubscription_;

@interface PINEntryValidator : NSObject
{
    _Bool _pinResettable;
    _Bool _didCancelValidation;
    long long _type;
    NSString *_title;
    PlaybackRequest *_request;
    NFUIProfileEntity *_profile;
    NSNumber *_validationActionId;
    id <_TtP8ArgoCore15ACFSubscription_> _validatePINOperation;
}

+ (id)lockPINPlaybackValidatorForProfile:(id)arg1;
+ (id)lockPINValidatorForProfile:(id)arg1 isCreation:(_Bool)arg2;
+ (id)preReleasePINValidatorForRequest:(id)arg1;
+ (id)maturityPINValidatorForRequest:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP8ArgoCore15ACFSubscription_> validatePINOperation; // @synthesize validatePINOperation=_validatePINOperation;
@property(retain, nonatomic) NSNumber *validationActionId; // @synthesize validationActionId=_validationActionId;
@property(copy, nonatomic) NFUIProfileEntity *profile; // @synthesize profile=_profile;
@property(copy, nonatomic) PlaybackRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool didCancelValidation; // @synthesize didCancelValidation=_didCancelValidation;
@property(nonatomic, getter=isPINResettable) _Bool pinResettable; // @synthesize pinResettable=_pinResettable;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void)handleRefresh;
@property(readonly, nonatomic) NSString *profileGuid;
- (void)validateProfileLockPin:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validatePreReleasePIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateMaturityPIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validatePIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end
