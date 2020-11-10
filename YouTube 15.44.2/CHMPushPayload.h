//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface CHMPushPayload : NSObject
{
    NSDictionary *_userInfo;
}

+ (id)payloadWithUserInfo:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) NSNumber *badgeCount;
@property(readonly, nonatomic) NSNumber *creationID;
@property(readonly, nonatomic) NSString *clientID;
@property(readonly, nonatomic) NSArray *remoteDismissThreadIDs;
@property(readonly, nonatomic) NSString *threadState;
@property(readonly, nonatomic) NSNumber *version;
@property(readonly, nonatomic) NSArray *attachmentURLs;
@property(readonly, nonatomic) NSString *userID;
@property(readonly, nonatomic) NSString *threadID;
@property(readonly, nonatomic) _Bool hasChimePayload;
- (id)initWithUserInfo:(id)arg1;

@end

