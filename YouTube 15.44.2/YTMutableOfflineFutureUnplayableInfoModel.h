//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTOfflineFutureUnplayableInfoModel.h>

@class NSData, YTClientEndpointBuilderDataModel;

@interface YTMutableOfflineFutureUnplayableInfoModel : YTOfflineFutureUnplayableInfoModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) YTClientEndpointBuilderDataModel *postUnplayableEndpointOverride; // @dynamic postUnplayableEndpointOverride;
@property(nonatomic) int unplayableReason; // @dynamic unplayableReason;
@property(nonatomic) unsigned long long becomesUnplayableInSeconds; // @dynamic becomesUnplayableInSeconds;
- (id)initWithEntityStore:(id)arg1;

@end

