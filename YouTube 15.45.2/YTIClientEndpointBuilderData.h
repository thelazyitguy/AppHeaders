//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIClientEndpointBuilderData : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *browseEndpointParams; // @dynamic browseEndpointParams;
@property(copy, nonatomic) NSString *browseId; // @dynamic browseId;
@property(nonatomic) _Bool hasBrowseId; // @dynamic hasBrowseId;
@property(readonly, nonatomic) int paramsOneOfCase; // @dynamic paramsOneOfCase;
@property(copy, nonatomic) NSString *ypcGetOfflineUpsellEndpointParams; // @dynamic ypcGetOfflineUpsellEndpointParams;

@end
