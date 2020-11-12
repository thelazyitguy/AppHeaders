//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFSScribe/TFSScribeImpression-Protocol.h>

@class NSData, NSDate, NSString;

@interface TFSScribeImpressionContainer : NSObject <TFSScribeImpression>
{
    NSString *_group;
    NSData *_content;
    NSDate *_timestamp;
    NSString *_eventName;
    NSString *_query;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *group; // @synthesize group=_group;
- (id)initWithGroup:(id)arg1 content:(id)arg2 timestamp:(id)arg3 eventName:(id)arg4 query:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
