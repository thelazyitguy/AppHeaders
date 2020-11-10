//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SendBirdSDK/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SBDUser : NSObject <NSCopying>
{
    _Bool _isActive;
    _Bool _requireAuth;
    NSString *_userId;
    NSString *_nickname;
    NSString *_profileUrl;
    NSString *_originalProfileUrl;
    unsigned long long _connectionStatus;
    long long _lastSeenAt;
    NSString *_friendDiscoveryKey;
    NSString *_friendName;
    NSArray *_preferredLanguages;
    NSDictionary *_metaData;
}

+ (id)buildFromSerializedData:(id)arg1;
@property(nonatomic) _Bool requireAuth; // @synthesize requireAuth=_requireAuth;
@property(retain, nonatomic) NSDictionary *metaData; // @synthesize metaData=_metaData;
@property(retain, nonatomic) NSArray *preferredLanguages; // @synthesize preferredLanguages=_preferredLanguages;
@property(retain) NSString *friendName; // @synthesize friendName=_friendName;
@property(retain) NSString *friendDiscoveryKey; // @synthesize friendDiscoveryKey=_friendDiscoveryKey;
@property _Bool isActive; // @synthesize isActive=_isActive;
@property long long lastSeenAt; // @synthesize lastSeenAt=_lastSeenAt;
@property unsigned long long connectionStatus; // @synthesize connectionStatus=_connectionStatus;
@property(retain, nonatomic) NSString *originalProfileUrl; // @synthesize originalProfileUrl=_originalProfileUrl;
@property(retain, nonatomic) NSString *profileUrl; // @synthesize profileUrl=_profileUrl;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *plainProfileImageUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToUser:(id)arg1;
- (void)updateWithUser:(id)arg1;
- (_Bool)isCurrentUser;
- (id)_toDictionary;
- (void)updateUserInfoWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)getProfileThumbnailWithSize:(struct CGSize)arg1;
- (void)deleteAllMetaDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteMetaDataWithKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateMetaData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createMetaData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)serialize;

@end

