//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString, TFSTwitterEntityMedia, TFSTwitterEntitySet;

@interface TFSDirectMessageUser : NSObject
{
    // Error parsing type: , name: userID
    // Error parsing type: , name: createdAt
    // Error parsing type: , name: username
    // Error parsing type: , name: fullName
    // Error parsing type: , name: profileImageMediaEntity
    // Error parsing type: , name: bio
    // Error parsing type: , name: bioEntities
    // Error parsing type: , name: followingCount
    // Error parsing type: , name: followersCount
    // Error parsing type: , name: protectedUser
    // Error parsing type: , name: verified
    // Error parsing type: , name: identityType
    // Error parsing type: , name: followRequestSent
    // Error parsing type: , name: following
    // Error parsing type: , name: blocking
    // Error parsing type: , name: updatedTimestamp
    // Error parsing type: , name: $__lazy_storage_$_userIDNumber
    // Error parsing type: , name: $__lazy_storage_$_displayUsername
    // Error parsing type: , name: $__lazy_storage_$_displayFullName
}

+ (id)observableForUserID:(long long)arg1 modelContext:(id)arg2;
- (void).cxx_destruct;
- (id)init;
- (void)assimilateIntoModelContext:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) long long hash;
- (id)initWithUserID:(long long)arg1 createdAt:(id)arg2 username:(id)arg3 fullName:(id)arg4 profileImageMediaEntity:(id)arg5 bio:(id)arg6 bioEntities:(id)arg7 followingCount:(id)arg8 followersCount:(id)arg9 protectedUser:(_Bool)arg10 verified:(_Bool)arg11 identityType:(long long)arg12 followRequestSent:(_Bool)arg13 following:(_Bool)arg14 blocking:(_Bool)arg15 updatedTimestamp:(id)arg16;
@property(nonatomic, copy) NSString *displayFullName;
@property(nonatomic, copy) NSString *displayUsername;
@property(nonatomic, retain) NSNumber *userIDNumber;
@property(nonatomic, readonly) NSDate *updatedTimestamp;
@property(nonatomic, readonly) _Bool blocking; // @synthesize blocking;
@property(nonatomic, readonly) _Bool following; // @synthesize following;
@property(nonatomic, readonly) _Bool followRequestSent; // @synthesize followRequestSent;
@property(nonatomic, readonly) long long identityType; // @synthesize identityType;
@property(nonatomic, readonly) _Bool verified; // @synthesize verified;
@property(nonatomic, readonly) _Bool protectedUser; // @synthesize protectedUser;
@property(nonatomic, readonly) NSNumber *followersCount; // @synthesize followersCount;
@property(nonatomic, readonly) NSNumber *followingCount; // @synthesize followingCount;
@property(nonatomic, readonly) TFSTwitterEntitySet *bioEntities; // @synthesize bioEntities;
@property(nonatomic, readonly) NSString *bio;
@property(nonatomic, readonly) TFSTwitterEntityMedia *profileImageMediaEntity; // @synthesize profileImageMediaEntity;
@property(nonatomic, readonly) NSString *fullName;
@property(nonatomic, readonly) NSString *username;
@property(nonatomic, readonly) NSDate *createdAt;
@property(nonatomic, readonly) long long userID; // @synthesize userID;

@end
