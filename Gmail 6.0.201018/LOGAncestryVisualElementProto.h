//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBInt32Array;

@interface LOGAncestryVisualElementProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cardinalDirection; // @dynamic cardinalDirection;
@property(nonatomic) int elementId; // @dynamic elementId;
@property(nonatomic) int elementIndex; // @dynamic elementIndex;
@property(nonatomic) _Bool hasCardinalDirection; // @dynamic hasCardinalDirection;
@property(nonatomic) _Bool hasElementId; // @dynamic hasElementId;
@property(nonatomic) _Bool hasElementIndex; // @dynamic hasElementIndex;
@property(nonatomic) _Bool hasUserAction; // @dynamic hasUserAction;
@property(retain, nonatomic) GPBInt32Array *pathToRootElementIdArray; // @dynamic pathToRootElementIdArray;
@property(readonly, nonatomic) unsigned long long pathToRootElementIdArray_Count; // @dynamic pathToRootElementIdArray_Count;
@property(nonatomic) int userAction; // @dynamic userAction;

@end

