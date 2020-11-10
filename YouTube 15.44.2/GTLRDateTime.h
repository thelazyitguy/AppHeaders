//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/NSCopying-Protocol.h>

@class NSDate, NSDateComponents, NSNumber, NSString;

@interface GTLRDateTime : NSObject <NSCopying>
{
    NSDate *_cachedDate;
    NSString *_cachedRFC3339String;
    NSDateComponents *_dateComponents;
    long long _milliseconds;
    NSNumber *_offsetMinutes;
}

+ (id)calendar;
+ (id)dateTimeWithDateComponents:(id)arg1;
+ (id)dateTimeForAllDayWithDate:(id)arg1;
+ (id)dateTimeWithDate:(id)arg1 offsetMinutes:(long long)arg2;
+ (id)dateTimeWithDate:(id)arg1;
+ (id)dateTimeWithRFC3339String:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *offsetMinutes; // @synthesize offsetMinutes=_offsetMinutes;
@property(nonatomic) long long milliseconds; // @synthesize milliseconds=_milliseconds;
@property(copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
@property(nonatomic) _Bool hasTime; // @dynamic hasTime;
- (void)setFromRFC3339String:(id)arg1;
- (void)setFromDate:(id)arg1;
@property(readonly, nonatomic) NSString *RFC3339String; // @dynamic RFC3339String;
@property(readonly, nonatomic) NSString *stringValue; // @dynamic stringValue;
@property(readonly, nonatomic) NSDate *date; // @dynamic date;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

