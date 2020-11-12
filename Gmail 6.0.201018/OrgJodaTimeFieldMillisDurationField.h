//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeDurationField.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface OrgJodaTimeFieldMillisDurationField : OrgJodaTimeDurationField <JavaIoSerializable>
{
}

+ (void)initialize;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (int)compareToWithId:(id)arg1;
- (long long)getDifferenceAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getDifferenceWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)getMillisWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)getMillisWithInt:(int)arg1 withLong:(long long)arg2;
- (long long)getMillisWithLong:(long long)arg1;
- (long long)getMillisWithInt:(int)arg1;
- (long long)getValueAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getValueWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)getValueAsLongWithLong:(long long)arg1;
- (int)getValueWithLong:(long long)arg1;
- (long long)getUnitMillis;
- (_Bool)isPrecise;
- (_Bool)isSupported;
- (id)getName;
- (id)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
