//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStreamProgressModel.h>

@class NSData;

@interface YTMutableStreamProgressModel : YTStreamProgressModel
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSData *data; // @dynamic data;
@property(nonatomic) unsigned int itag; // @dynamic itag;
@property(retain, nonatomic) NSData *formatStreamBytes; // @dynamic formatStreamBytes;
@property(nonatomic) unsigned long long numTotalBytes; // @dynamic numTotalBytes;
@property(nonatomic) unsigned long long numBytesDownloaded; // @dynamic numBytesDownloaded;
- (id)initWithEntityStore:(id)arg1;

@end

