//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GTPColor, NSString;

@interface ASMStatusBlock : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *controlName; // @dynamic controlName;
@property(copy, nonatomic) NSString *controlStatus; // @dynamic controlStatus;
@property(nonatomic) _Bool hasControlName; // @dynamic hasControlName;
@property(nonatomic) _Bool hasControlStatus; // @dynamic hasControlStatus;
@property(nonatomic) _Bool hasStatusColor; // @dynamic hasStatusColor;
@property(retain, nonatomic) GTPColor *statusColor; // @dynamic statusColor;

@end

