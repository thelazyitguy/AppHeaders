//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface Chime_RTCStatistics : NSObject
{
    NSString *_id;
    double _timestamp_us;
    NSString *_type;
    NSDictionary *_values;
}

@property(readonly, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) double timestamp_us; // @synthesize timestamp_us=_timestamp_us;
@property(readonly, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStatistics:(const struct RTCStats *)arg1;

@end
