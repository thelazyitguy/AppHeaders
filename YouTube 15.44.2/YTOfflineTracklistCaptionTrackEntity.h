//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <Module_Framework/YTRetryableTask-Protocol.h>

@class NSData, NSString, NSURL, YTOfflineVideoEntity, YTRetryStateEntity;

@interface YTOfflineTracklistCaptionTrackEntity : NSManagedObject <YTRetryableTask>
{
}


// Remaining properties
@property(copy, nonatomic) NSData *captionData; // @dynamic captionData;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) int format; // @dynamic format;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSURL *remoteURL; // @dynamic remoteURL;
@property(retain, nonatomic) YTRetryStateEntity *retryState; // @dynamic retryState;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTOfflineVideoEntity *video; // @dynamic video;
@end

