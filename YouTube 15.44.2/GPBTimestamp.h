//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSDate;

@interface GPBTimestamp : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic) double timeIntervalSince1970;
@property(retain, nonatomic) NSDate *date;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(nonatomic) int nanos; // @dynamic nanos;
@property(nonatomic) long long seconds; // @dynamic seconds;

@end

