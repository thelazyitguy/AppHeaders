//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBExtensionRangeOptions;

@interface GPBDescriptorProto_ExtensionRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int end; // @dynamic end;
@property(nonatomic) _Bool hasEnd; // @dynamic hasEnd;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasStart; // @dynamic hasStart;
@property(retain, nonatomic) GPBExtensionRangeOptions *options; // @dynamic options;
@property(nonatomic) int start; // @dynamic start;

@end
