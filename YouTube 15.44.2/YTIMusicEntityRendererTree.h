//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSMutableArray, NSString, YTIMusicEntityReference, YTIRenderer;

@interface YTIMusicEntityRendererTree : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMusicEntityReference *entityId; // @dynamic entityId;
@property(nonatomic) _Bool hasEntityId; // @dynamic hasEntityId;
@property(nonatomic) _Bool hasPageId; // @dynamic hasPageId;
@property(nonatomic) _Bool hasPageToken; // @dynamic hasPageToken;
@property(nonatomic) _Bool hasRenderer; // @dynamic hasRenderer;
@property(retain, nonatomic) NSMutableArray *initialRequirementsArray; // @dynamic initialRequirementsArray;
@property(readonly, nonatomic) unsigned long long initialRequirementsArray_Count; // @dynamic initialRequirementsArray_Count;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(retain, nonatomic) YTIRenderer *renderer; // @dynamic renderer;

@end

