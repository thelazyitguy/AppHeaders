//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBEnumValueOptions, NSString;

@interface GPBEnumValueDescriptorProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasNumber; // @dynamic hasNumber;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int number; // @dynamic number;
@property(retain, nonatomic) GPBEnumValueOptions *options; // @dynamic options;

@end

