//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface DSCAppFlowEvent : NSObject
{
    unsigned long long _eventType;
    unsigned long long _statusCode;
    NSDictionary *_tags;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEventType:(unsigned long long)arg1 statusCode:(unsigned long long)arg2 tags:(id)arg3;

@end
