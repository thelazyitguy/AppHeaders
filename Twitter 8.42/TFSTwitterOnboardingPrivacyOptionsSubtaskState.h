//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterCore/TFSTwitterOnboardingSubtaskState.h>

#import <TFSTwitterCore/NSCopying-Protocol.h>

@interface TFSTwitterOnboardingPrivacyOptionsSubtaskState : TFSTwitterOnboardingSubtaskState <NSCopying>
{
    _Bool _discoverableByEmail;
    _Bool _discoverableByPhone;
}

@property(nonatomic) _Bool discoverableByPhone; // @synthesize discoverableByPhone=_discoverableByPhone;
@property(nonatomic) _Bool discoverableByEmail; // @synthesize discoverableByEmail=_discoverableByEmail;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addStateToJSONDictionary:(id)arg1;

@end

