//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface A9VSEngineMetric : NSObject
{
    NSString *_name;
    NSNumber *_value;
    long long _precision;
}

@property(readonly, nonatomic) long long precision; // @synthesize precision=_precision;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 doubleValue:(double)arg2;
- (id)initWithName:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;
- (id)initWithName:(id)arg1 value:(id)arg2 precision:(long long)arg3;

@end

