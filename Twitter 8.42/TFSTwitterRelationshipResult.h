//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSTwitterCore/TFSModel-Protocol.h>

@class NSString, TFSTwitterRelationship;

@interface TFSTwitterRelationshipResult : NSObject <TFSModel>
{
    long long _userID;
    NSString *_username;
    TFSTwitterRelationship *_relationship;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TFSTwitterRelationship *relationship; // @synthesize relationship=_relationship;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) long long userID; // @synthesize userID=_userID;
- (id)initWithUserID:(long long)arg1 username:(id)arg2 relationship:(id)arg3;

@end
