//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCommandModel.h>

@class NSArray, NSData, YTCommandMetadataModel;

@interface YTMutableCommandModel : YTCommandModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) YTCommandMetadataModel *commandMetadata; // @dynamic commandMetadata;
@property(retain, nonatomic) NSArray *loggingUrlsArray; // @dynamic loggingUrlsArray;
@property(retain, nonatomic) NSData *clickTrackingParams; // @dynamic clickTrackingParams;
- (id)initWithEntityStore:(id)arg1;

@end
