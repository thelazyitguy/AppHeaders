//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTProductsInVideoEntityModel.h>

#import <Module_Framework/YTMutableEntity-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface YTMutableProductsInVideoEntityModel : YTProductsInVideoEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *entityMetadata; // @dynamic entityMetadata;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) _Bool isFullscreen; // @dynamic isFullscreen;
@property(nonatomic) _Bool isControlOverlayVisible; // @dynamic isControlOverlayVisible;
@property(nonatomic) int videoTimeSec; // @dynamic videoTimeSec;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

