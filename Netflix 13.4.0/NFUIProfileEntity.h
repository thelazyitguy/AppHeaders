//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ArgoCore/NFLXGeneratedObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface NFUIProfileEntity : NFLXGeneratedObject <NSMutableCopying, NSCopying>
{
    _Bool _isProfileCreationLocked;
    _Bool _isKidsProfile;
    _Bool _isAccountOwner;
    _Bool _isFirstUse;
    _Bool _isActive;
    _Bool _canEditAvatar;
    _Bool _isAutoCreatedProfile;
    _Bool _hasTitleLevelRestrictions;
    _Bool _hasKidsUI;
    NSString *_name;
    NSString *_avatarName;
    NSString *_avatarImageUrl;
    NSString *_avatarThumbnailUrl;
    NSString *_guid;
    NSString *_country;
    NSString *_language;
    NSNumber *_maturityLevel;
    NSNumber *_profileLockPin;
    NSDictionary *_maturityRestrictions;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasKidsUI; // @synthesize hasKidsUI=_hasKidsUI;
@property(nonatomic) _Bool hasTitleLevelRestrictions; // @synthesize hasTitleLevelRestrictions=_hasTitleLevelRestrictions;
@property(nonatomic) _Bool isAutoCreatedProfile; // @synthesize isAutoCreatedProfile=_isAutoCreatedProfile;
@property(nonatomic) _Bool canEditAvatar; // @synthesize canEditAvatar=_canEditAvatar;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) _Bool isFirstUse; // @synthesize isFirstUse=_isFirstUse;
@property(nonatomic) _Bool isAccountOwner; // @synthesize isAccountOwner=_isAccountOwner;
@property(nonatomic) _Bool isKidsProfile; // @synthesize isKidsProfile=_isKidsProfile;
@property(nonatomic) _Bool isProfileCreationLocked; // @synthesize isProfileCreationLocked=_isProfileCreationLocked;
@property(copy, nonatomic) NSDictionary *maturityRestrictions; // @synthesize maturityRestrictions=_maturityRestrictions;
@property(copy, nonatomic) NSNumber *profileLockPin; // @synthesize profileLockPin=_profileLockPin;
@property(copy, nonatomic) NSNumber *maturityLevel; // @synthesize maturityLevel=_maturityLevel;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) NSString *avatarThumbnailUrl; // @synthesize avatarThumbnailUrl=_avatarThumbnailUrl;
@property(copy, nonatomic) NSString *avatarImageUrl; // @synthesize avatarImageUrl=_avatarImageUrl;
@property(copy, nonatomic) NSString *avatarName; // @synthesize avatarName=_avatarName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)hasProfileLockPIN;
- (_Bool)hasSufficientMaturityForVideoId:(id)arg1 inObjectContext:(id)arg2;
- (void)validateRestrictionsForVideoId:(id)arg1 inObjectContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)maturityValue;
@property(readonly, nonatomic) _Bool isHighestMaturityLevel;
@property(readonly, nonatomic) _Bool isLowestMaturityLevel;
@property(readonly, copy, nonatomic) NSString *maturityRatingLimit;
- (id)asCLProfileSettings;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)asFalcorArguments;
- (id)initWithDictionary:(id)arg1;

@end

