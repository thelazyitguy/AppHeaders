//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class XFieldMaskProto, YTIEntityFieldMaskMergeOptions;

@interface YTIEntityFieldMask : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMergeOptions; // @dynamic hasMergeOptions;
@property(nonatomic) _Bool hasXfieldMask; // @dynamic hasXfieldMask;
@property(retain, nonatomic) YTIEntityFieldMaskMergeOptions *mergeOptions; // @dynamic mergeOptions;
@property(retain, nonatomic) XFieldMaskProto *xfieldMask; // @dynamic xfieldMask;

@end

