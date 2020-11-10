//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIProfileEntity, NSArray, NSMutableArray, NSNumber;
@protocol DataBrokerDataProviderProtocol, _TtP8ArgoCore15ACFSubscription_;

@interface NFUIProfilesManager : NSObject
{
    _Bool _shouldRefeshOnAppForeground;
    id <DataBrokerDataProviderProtocol> _delegate;
    NFUIProfileEntity *_activeProfile;
    NFUIProfileEntity *_ownerProfile;
    NSArray *_profiles;
    NSArray *_profilesJSON;
    NSMutableArray *_profileReadOperations;
    id <_TtP8ArgoCore15ACFSubscription_> _profileCUDOperation;
    NSNumber *_pinPromptPresentationSessionId;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *pinPromptPresentationSessionId; // @synthesize pinPromptPresentationSessionId=_pinPromptPresentationSessionId;
@property(retain, nonatomic) id <_TtP8ArgoCore15ACFSubscription_> profileCUDOperation; // @synthesize profileCUDOperation=_profileCUDOperation;
@property(retain, nonatomic) NSMutableArray *profileReadOperations; // @synthesize profileReadOperations=_profileReadOperations;
@property(retain, nonatomic) NSArray *profilesJSON; // @synthesize profilesJSON=_profilesJSON;
@property(retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(retain, nonatomic) NFUIProfileEntity *ownerProfile; // @synthesize ownerProfile=_ownerProfile;
@property(retain, nonatomic) NFUIProfileEntity *activeProfile; // @synthesize activeProfile=_activeProfile;
@property(nonatomic) _Bool shouldRefeshOnAppForeground; // @synthesize shouldRefeshOnAppForeground=_shouldRefeshOnAppForeground;
@property(nonatomic) __weak id <DataBrokerDataProviderProtocol> delegate; // @synthesize delegate=_delegate;
- (void)handleAppForeground:(id)arg1;
- (_Bool)isProfileCreationAllowed;
- (void)endPresentationSessionWithFailure:(_Bool)arg1 wasCanceled:(_Bool)arg2;
- (void)presesentPinEntryControllerForProfile:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)newProfileGuid;
- (void)markActiveProfileForParameter:(id)arg1;
- (void)markActiveProfileHasSeenParameter:(id)arg1;
- (_Bool)activeProfileHasSeenParameter:(id)arg1;
- (void)callFunction:(id)arg1 guid:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldSkipProfilesGateShouldIgnoreDevice:(_Bool)arg1 numProfiles:(long long)arg2 isFirstLaunchAfterSignup:(_Bool)arg3;
- (_Bool)allProfilesForKids;
- (_Bool)activeProfileHasMaturityOrKidsSettings;
- (_Bool)isActiveProfileForKids;
- (id)profileForGUID:(id)arg1;
- (_Bool)profileGUIDExists:(id)arg1;
- (id)accountOwnerProfileGUID;
- (id)kidsProfilesGUID;
- (id)activeProfileGUID;
- (id)kidsProfileEntities;
- (void)createOrUpdateProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteProfileWithGUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadProfiles:(CDUnknownBlockType)arg1;
- (id)switchToOwnerOperation:(id)arg1;
- (id)selectProfileOperation:(id)arg1 guid:(id)arg2;
- (id)nullableAccountOwnerGUID;
- (id)nullableCurrentProfileGUID;
- (void)dealloc;
- (id)init;

@end

