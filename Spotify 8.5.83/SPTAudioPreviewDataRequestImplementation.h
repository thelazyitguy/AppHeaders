//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioPreviewDataRequest-Protocol.h"

@class SPTAudioPreviewResource;
@protocol SPTDataLoaderCancellationToken;

@interface SPTAudioPreviewDataRequestImplementation : NSObject <SPTAudioPreviewDataRequest>
{
    SPTAudioPreviewResource *_resource;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(readonly, copy, nonatomic) SPTAudioPreviewResource *resource; // @synthesize resource=_resource;
- (void)cancel;
@property(readonly, nonatomic, getter=isCanceled) _Bool canceled;
- (id)initWithResource:(id)arg1 cancellationToken:(id)arg2;

@end

