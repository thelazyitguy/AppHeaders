//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class YTIUploadInfo;

@interface YTIUploadVideoTranscoded : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long durationMs; // @dynamic durationMs;
@property(nonatomic) _Bool hasDurationMs; // @dynamic hasDurationMs;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasUploadInfo; // @dynamic hasUploadInfo;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) YTIUploadInfo *uploadInfo; // @dynamic uploadInfo;

@end

