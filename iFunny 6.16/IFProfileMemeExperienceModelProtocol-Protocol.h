//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFModelProtocol-Protocol.h>

@class FNROUserPhoto, NSString;

@protocol IFProfileMemeExperienceModelProtocol <IFModelProtocol>
@property(readonly, nonatomic) _Bool isVerifiedUser;
@property(readonly, nonatomic) _Bool isRestrictedUser;
@property(readonly, nonatomic) FNROUserPhoto *userPhoto;
@property(readonly, nonatomic) _Bool isMyProfile;
@property(readonly, nonatomic) long long nextMilestone;
@property(readonly, nonatomic) long long daysCount;
@property(readonly, nonatomic) NSString *rank;
@property(readonly, nonatomic) NSString *badgeUrl;
@property(readonly, nonatomic) NSString *nick;
@end
