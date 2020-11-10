//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AsyncModel-Protocol.h"

@class NSString;

@interface ContactByChannel : NSObject <AsyncModel>
{
    _Bool _isModerator;
    unsigned long long _uniqueID;
    unsigned long long _contactId;
    unsigned long long _channelId;
}

+ (id)persistProperties;
+ (id)tableName;
@property(nonatomic) _Bool isModerator; // @synthesize isModerator=_isModerator;
@property(nonatomic) unsigned long long channelId; // @synthesize channelId=_channelId;
@property(nonatomic) unsigned long long contactId; // @synthesize contactId=_contactId;
@property(nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;
- (void)configureWithIsModerator:(_Bool)arg1;
- (id)initWithContactId:(unsigned long long)arg1 channelId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

