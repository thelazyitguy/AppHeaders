//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class OrchDate;

@interface ORCH2DateRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMaxDate; // @dynamic hasMaxDate;
@property(nonatomic) _Bool hasMinDate; // @dynamic hasMinDate;
@property(retain, nonatomic) OrchDate *maxDate; // @dynamic maxDate;
@property(retain, nonatomic) OrchDate *minDate; // @dynamic minDate;

@end

