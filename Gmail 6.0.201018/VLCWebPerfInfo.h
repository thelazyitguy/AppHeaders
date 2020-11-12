//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@interface VLCWebPerfInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int connectionType; // @dynamic connectionType;
@property(nonatomic) int effectiveConnectionType; // @dynamic effectiveConnectionType;
@property(nonatomic) _Bool hasConnectionType; // @dynamic hasConnectionType;
@property(nonatomic) _Bool hasEffectiveConnectionType; // @dynamic hasEffectiveConnectionType;
@property(nonatomic) _Bool hasLogicalPageType; // @dynamic hasLogicalPageType;
@property(nonatomic) _Bool hasMaxFrameTimeInterval; // @dynamic hasMaxFrameTimeInterval;
@property(nonatomic) _Bool hasStartMemory; // @dynamic hasStartMemory;
@property(nonatomic) _Bool hasStartTimeInterval; // @dynamic hasStartTimeInterval;
@property(nonatomic) _Bool hasUiUpdateStrategy; // @dynamic hasUiUpdateStrategy;
@property(nonatomic) _Bool hasUsedJsHeapSize; // @dynamic hasUsedJsHeapSize;
@property(nonatomic) int logicalPageType; // @dynamic logicalPageType;
@property(nonatomic) double maxFrameTimeInterval; // @dynamic maxFrameTimeInterval;
@property(nonatomic) int startMemory; // @dynamic startMemory;
@property(nonatomic) double startTimeInterval; // @dynamic startTimeInterval;
@property(nonatomic) int uiUpdateStrategy; // @dynamic uiUpdateStrategy;
@property(nonatomic) int usedJsHeapSize; // @dynamic usedJsHeapSize;

@end
