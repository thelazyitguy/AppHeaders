//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BTAnalyticsEvent : NSObject
{
    NSString *_kind;
    long long _timestamp;
}

+ (id)event:(id)arg1 withTimestamp:(long long)arg2;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)json;
- (id)description;

@end
