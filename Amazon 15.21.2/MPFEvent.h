//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface MPFEvent : CoralModel <NSCoding, NSCopying>
{
    NSString *_timestamp;
    NSString *_eventId;
    NSNumber *_campaignId;
    NSString *_topic;
    NSString *_provider;
}

+ (_Bool)isAbstract;
+ (id)type;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSNumber *campaignId; // @synthesize campaignId=_campaignId;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;

@end
