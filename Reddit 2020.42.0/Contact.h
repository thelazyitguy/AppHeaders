//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/ObservableObject.h>

#import "AsyncModel-Protocol.h"
#import "REDSelectableModel-Protocol.h"

@class NSDate, NSDictionary, NSString, SBDUser, User;

@interface Contact : ObservableObject <REDSelectableModel, AsyncModel>
{
    _Bool selected;
    _Bool _profileNSFW;
    _Bool _blockedByMe;
    _Bool _willAcceptChats;
    unsigned long long _uniqueID;
    User *_user;
    SBDUser *_sendbirdUser;
    NSString *_realName;
    NSString *_username;
    NSDictionary *_serverUserData;
    NSString *_userID;
    NSString *_profileThumbnailUrl;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _commentKarma;
    long long _linkKarma;
}

+ (id)persistProperties;
+ (id)tableName;
+ (id)keyPathsToObserveChanges;
+ (id)sortedContacts:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool willAcceptChats; // @synthesize willAcceptChats=_willAcceptChats;
@property(nonatomic) _Bool blockedByMe; // @synthesize blockedByMe=_blockedByMe;
@property(nonatomic) _Bool profileNSFW; // @synthesize profileNSFW=_profileNSFW;
@property(nonatomic) long long linkKarma; // @synthesize linkKarma=_linkKarma;
@property(nonatomic) long long commentKarma; // @synthesize commentKarma=_commentKarma;
@property(retain, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *profileThumbnailUrl; // @synthesize profileThumbnailUrl=_profileThumbnailUrl;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSDictionary *serverUserData; // @synthesize serverUserData=_serverUserData;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) SBDUser *sendbirdUser; // @synthesize sendbirdUser=_sendbirdUser;
@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *sortName;
- (void)configureWithSendbirdUser:(id)arg1;
@property(readonly, nonatomic) long long totalKarma;
- (void)configureWithProfileThumbnailUrl:(id)arg1 isProfileNSFW:(_Bool)arg2;
- (void)configureWithAdditionalUserData:(id)arg1;
- (void)configureWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

